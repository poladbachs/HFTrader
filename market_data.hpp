#ifndef MARKET_DATA_HPP
#define MARKET_DATA_HPP

#include <string>

class MarketData {
public:
    std::string symbol;
    double price;
    MarketData(const std::string& sym, double p) : symbol(sym), price(p) {}
};

#endif