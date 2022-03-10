add_library(jsoncpp jsoncpp.cpp)

target_include_directories(jsoncpp
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/json
)