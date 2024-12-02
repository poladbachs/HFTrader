# HFT Trader 
![alber_gif](https://github.com/user-attachments/assets/b35c447a-7403-4df3-bb00-7ad876348e1c)


HFT Trader is a high-frequency trading (HFT) system implemented in C++ to analyze and trade on financial market data. The system implements basic strategies, collects market data using the Alpha Vantage API, and executes trades. This project aims to simulate a basic automated trading system with performance benchmarking.

## Tech Stack

- **C++ (C++11)**: Main programming language for implementing the trading system.
- **Google Benchmark**: Used for performance benchmarking.
- **libcurl**: Handles HTTP requests to fetch market data from the Alpha Vantage API.
- **jsoncpp**: Parses JSON data from market data responses.
- **Alpha Vantage API**: Provides real-time market data for currency pairs like EUR/USD.

## Features

- **Market Data Fetching**: Continuously fetches live market data using `libcurl` from the [Alpha Vantage API](https://www.alphavantage.co/), which provides real-time exchange rates for currency pairs.
- **Simple Strategy**: Implements a basic local minimum strategy where the system buys when a local minimum is detected and triggers a take-profit when a set price is reached.
- **Execution**: Executes trades based on the strategy and provides buy/sell signals.
- **Benchmarking**: Performance benchmarking to evaluate the efficiency of the trading strategy using the Google Benchmark library.

## Trading Strategy

- **Local Minimum Strategy**: The system identifies local minima in market prices. A buy signal is triggered when the current price is lower than both the previous and the next price point. The trade is closed when the price reaches a target take-profit level.
  
## Benchmark Results

<img width="465" alt="Screenshot 2024-12-02 at 03 06 11" src="https://github.com/user-attachments/assets/be9a4c12-b315-432c-b6dd-487ddc6fe988">


The system's performance was benchmarked using the Google Benchmark framework. Below are the key results:

- **Average Time per Iteration**: Approximately **60 microseconds**.
- **CPU Time per Iteration**: Approximately **30 microseconds**.
- **Total Iterations**: 23,079 iterations during the benchmark.

These results indicate that the trading system is efficient enough for high-frequency trading scenarios, where speed is crucial.

### Key Observations:
- **Performance**: The system's execution time per iteration is optimized for real-time trading environments.
- **Strategy Effectiveness**: The local minimum strategy performs as expected, generating buy and sell signals based on price behavior.
- **Benchmarking**: The benchmarking results demonstrate the system's capability to handle multiple iterations swiftly, making it suitable for high-frequency trading.
