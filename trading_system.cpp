#include "trading_system.hpp"
#include <curl/curl.h>
#include <json/json.h>
#include <iostream>
#include <thread>
#include <chrono>

TradingSystem::TradingSystem(double stop_loss, double stop_win)
    : strategy(stop_loss, stop_win) {}