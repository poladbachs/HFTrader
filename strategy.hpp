#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include <vector>
#include <iostream>
#include <numeric>
#include "market_data.hpp"

class Strategy {
    std::vector<MarketData> data;
    double stop_loss;
    double stop_win;
    double entry_price;
    bool in_trade;

    Strategy(double stop_loss, double stop_win)
    : stop_loss(stop_loss), stop_win(stop_win), in_trade(false) {}

};

#endif