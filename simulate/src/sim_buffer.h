#pragma once

#include <mutex>
#include <vector>

struct SimBuffer {
    std::mutex mtx;
    std::vector<double> sensordata;
    std::vector<double> ctrl;
    double time = 0.0;
};

inline SimBuffer sim_buffer;