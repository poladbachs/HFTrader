#ifndef MARKET_DATA.HPP
#define MARKET_DATA.HPP

#include <string>

class MarketData {
public:
    std::string symbol;
    double price;
    MarketData(const std::string& sym, double p) : symbol(sym), price(p) {}
};

#endif