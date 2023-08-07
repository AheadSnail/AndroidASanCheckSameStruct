#include "user_msg_mgr.h"

#include <memory>
#include <iostream>
#include "user_msg_api.h"


using namespace std;

void send_msg() {
    auto param = new TestStructParam();
    LOGD("roam_msg_mgr.cpp params %p sizeof: %lu", static_cast<void *>(param),
         sizeof(TestStructParam));

    param->user_id = "user_id";
    param->peer_id = "peer_id";
    param->msg_id = 1;
    param->count = 1;
    param->msg_size = 1;
    param->is_forward = true;
    param->is_self = true;
    param->is_seq_from_server = true;
    param->is_last_msg = true;

    delete param;
}