cmake_minimum_required(VERSION 3.9)
project(envoy-wasm-example)
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s WASM=1 -s LEGALIZE_JS_FFI=0 -s EMIT_EMSCRIPTEN_METADATA=1 -O3 -g3")

include_directories(/usr/local/include/)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
file(GLOB api_SRC
    "api/wasm/cpp/*.cc"
    )
add_library(envoy-wasm-example MODULE header_token_checker.cc ${api_SRC})