//
// Created by frequensy on 12/12/22.
//

#ifndef FIZZ_BUZZ_LIKE_A_PRO_LOADBALANCER_H
#define FIZZ_BUZZ_LIKE_A_PRO_LOADBALANCER_H
#import <vector>

class LoadBalancer {
    public:
    std::vector<int> balance(int num_threads, int max_num);

    void get_final_result(int num_threads);

    static std::string tmp_filename(int i);
};


#endif //FIZZ_BUZZ_LIKE_A_PRO_LOADBALANCER_H
