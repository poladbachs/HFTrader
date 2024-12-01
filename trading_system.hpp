#ifndef TRADING_SYSTEM_HPP
#define TRADING_SYSTEM_HPP

#include <string>
#include "strategy.hpp"

class TradingSystem {
public:
    TradingSystem(double stop_loss, double stop_win);
    void run();
private:
    Strategy strategy;

    void fetchMarketData();
    static size_t writeCallBack(void* contents, size_t size, size_t nmemb, void* userp);
};

#endif