#include <benchmark/benchmark.h>
#include "strategy.hpp"

static void BM_Execute(benchmark::State& state) {
    Strategy strategy(0.0050, 0.0050);
}