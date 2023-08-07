#include "guest_msg_mgr.h"

#include <memory>
#include <iostream>
#include "guest_api.h"

void send_guest_msg() {
    auto param = new TestStructParam();
    LOGD("guest_msg_mgr.cpp params %p sizeof: %lu",static_cast<void*>(param),sizeof(TestStructParam));

    param->user_id = "user_id";
    param->peer_id = "peer_id";
    param->msg_id = 1;
    param->count = 1;
    param->is_forward = true;

    delete param;
}