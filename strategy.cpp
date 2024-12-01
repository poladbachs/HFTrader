#include "strategy.hpp"
#include <iostream>

// Constructor
Strategy::Strategy(double stop_loss, double stop_win)
    : stop_loss(stop_loss), stop_win(stop_win), in_trade(false) {}
