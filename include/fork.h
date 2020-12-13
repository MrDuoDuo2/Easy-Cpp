//
// Created by zyx on 2020/12/13.
//

#ifndef EASY_CPP_FORK_H
#define EASY_CPP_FORK_H
namespace std {
    typedef void(*active_t)();

    void fork_new_proc(active_t childFunc, active_t parentFunc);

    void fork_new_proc(active_t childFunc);

    void save_child_id(string home, __pid_t pid, string desc);
}

#endif //EASY_CPP_FORK_H
