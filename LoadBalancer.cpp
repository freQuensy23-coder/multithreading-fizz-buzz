#include "LoadBalancer.h"
#include "vector"

std::vector<int> LoadBalancer::balance(int num_threads, int max_num) {
    // Calculate start and end for each thread
    // Return an array of start and end per thread
    std::vector <int> res = {};
    res.resize(num_threads * 2);
    int tasks_per_thread = max_num / num_threads;
    int n = 0;
    for (int i = 0; i < num_threads; i++) {
        int start = n + 1;
        int end = n + tasks_per_thread;
        n = end;
        res[i * 2] = start;
        res[i * 2 + 1] = end;
    }
    return res;
}