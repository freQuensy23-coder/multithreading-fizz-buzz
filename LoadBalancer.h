//
// Created by frequensy on 12/12/22.
//

#ifndef FIZZ_BUZZ_LIKE_A_PRO_LOADBALANCER_H
#define FIZZ_BUZZ_LIKE_A_PRO_LOADBALANCER_H
#import <vector>

class LoadBalancer {
    public:
    std::vector<int> balance(int num_threads, int max_num);

    void join_result(int num_threads);
};


#endif //FIZZ_BUZZ_LIKE_A_PRO_LOADBALANCER_H
