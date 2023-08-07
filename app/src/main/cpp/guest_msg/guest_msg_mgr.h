#pragma once

#include <string>
#include <iostream>
#include "../log.h"

using namespace std;

struct TestStructParam {
    std::string user_id;
    std::string peer_id;
    uint64_t msg_id{0};
    uint32_t count{0};
    bool is_forward{true};

    TestStructParam() {
        LOGD("guest_msg_mgr.h construct execute");
        LOGD("guest_msg_mgr.h construct execute this %p ",static_cast<void*>(this));
    }
};
