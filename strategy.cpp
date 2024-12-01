#include "strategy.hpp"
#include <iostream>

// Constructor
Strategy::Strategy(double stop_loss, double stop_win)
    : stop_loss(stop_loss), stop_win(stop_win), in_trade(false) {}

// Method to process market data
void Strategy::onMarketData(const MarketData& md) {
    std::cout << "Received market data: " << md.price << std::endl;
    if (md.symbol == "EUR/USD") {
        data.push_back(md);
        if (data.size() >= 3) {
            execute();
        }
    }
}

// Execute the strategy logic
void Strategy::execute() {
    std::cout << "Executing strategy..." << std::endl;
    if (!in_trade) {
        if (isLocalMinimum()) {
            entry_price = data[data.size() - 2].price;
            in_trade = true;
            std::cout << "Buy signal generated at price: " << entry_price << std::endl;
        }
    } else {
        double current_price = data.back().price;
        std::cout << "Current price: " << current_price << ", Entry price: " << entry_price << std::endl;
        if (current_price <= entry_price - stop_loss) {
            std::cout << "Stop Loss triggered at price: " << current_price << std::endl;
            in_trade = false;
        } else if (current_price >= entry_price + stop_win) {
            std::cout << "Take Profit triggered at price: " << current_price << std::endl;
            in_trade = false;
        }
    }

    if (data.size() > 3) {
        data.erase(data.begin());
    }
}