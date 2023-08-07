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
    uint64_t msg_size{0};
    bool is_forward{true};
    bool is_self{false};
    bool is_seq_from_server{false};  // 是否需要从后台拉取最新seq（应用于拉取屏蔽群消息的场景）
    bool is_last_msg{false};  // 串行查询最新一条消息 再拉漫游

    TestStructParam() {
        LOGD("user_msg_mgr.h construct execute");
        LOGD("user_msg_mgr.h construct execute this %p ", static_cast<void *>(this));
    }
};