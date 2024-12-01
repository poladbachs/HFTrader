#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include <vector>
#include "market_data.hpp"

class Strategy {
public:
    Strategy(double stop_loss, double stop_win);
    void onMarketData(const MarketData& md);
    void execute();
    
private:
    std::vector<MarketData> data;
    double stop_loss;
    double stop_win;
    double entry_price;
    bool in_trade;
    bool isLocalMinimum();

};

#endif