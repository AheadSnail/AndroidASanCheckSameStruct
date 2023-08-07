set(BIZ_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE
        ${SOURCE}
        ${BIZ_SRC_DIR}/guest_msg_mgr.cpp
        ${BIZ_SRC_DIR}/guest_msg_mgr.h
        ${BIZ_SRC_DIR}/guest_api.h
        PARENT_SCOPE
        )