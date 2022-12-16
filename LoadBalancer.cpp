#include <string>
#include <fstream>
#include <iostream>
#include "vector"

#include "LoadBalancer.h"
#include "fileoutstream.h"

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

void LoadBalancer::get_final_result(int num_threads) {
    // Concatenate all main*.tmp files into main.txt
    std::ofstream main_file("main.txt");
    for (int i = 0; i < num_threads; i++) {
        std::ifstream tmp_file(tmp_filename(i));
        std::string line;
        if (tmp_file.is_open() and main_file.is_open()) {
            while (getline(tmp_file, line)) {
                std::cout << line << '\n';
                main_file << line << std::endl;
            }
            tmp_file.close();
            std::remove(LoadBalancer::tmp_filename(i).c_str());
        } else {
            throw std::runtime_error("Unable to open file, check os settings");
        }
    }

}

std::string LoadBalancer::tmp_filename(int i) {
    // Get filename for tmp file with thread work results
    std::string filename = "main" + std::to_string(i) + ".tmp";
    return filename;

}
