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