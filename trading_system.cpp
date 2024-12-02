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
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.alphavantage.co/query?function=CURRENCY_EXCHANGE_RATE&from_currency=EUR&to_currency=USD&apikey=U6L3NVT5G6QZR485");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallBack);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
}