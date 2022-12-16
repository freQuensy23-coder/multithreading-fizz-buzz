#include <iostream>
#include <memory>
#include <thread>
#include <vector>

#include <controller.h>
#include <LoadBalancer.h>



using namespace std;


int main() {
    const int NUM_THREADS = 5;
    const int MAX_NUM = 100;
    std::thread threads[NUM_THREADS];
    Controller controllers[NUM_THREADS];
    LoadBalancer loadBalancer;
    vector<int> tasks_balance = loadBalancer.balance(NUM_THREADS, MAX_NUM);

    for (int i=0; i<NUM_THREADS; i++) {
        controllers[i] = Controller(std::make_shared<FileOutStream> (LoadBalancer::tmp_filename(i)),
                                    std::make_shared<IntNumber> ());

        std::thread t(&Controller::process_period, &controllers[i], tasks_balance[i*2], tasks_balance[i*2+1]);
        threads[i] = std::move(t);
    }
    for(auto & thread : threads) {
        thread.join();
    }

    loadBalancer.get_final_result(NUM_THREADS);
    return 0;
}
