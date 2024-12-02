#include "trading_system.hpp"
#include <curl/curl.h>
#include <json/json.h>
#include <iostream>
#include <thread>
#include <chrono>

TradingSystem::TradingSystem(double stop_loss, double stop_win)
    : strategy(stop_loss, stop_win) {}

void TradingSystem::run() {
    for (int i = 0; i < 100; ++i) {
        fetchMarketData();
        std::this_thread::sleep_for(std::chrono::seconds(60));
    }
}

void TradingSystem::fetchMarketData() {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if (curl) {
        
    }
}