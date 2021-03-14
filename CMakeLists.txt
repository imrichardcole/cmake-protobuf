cmake_minimum_required(VERSION 3.20)

project(protobuf_examples)
set(CMAKE_CXX_STANDARD 14)

find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER sample.proto)

message("The proto headers are ${PROTO_HEADER}")
message("The proto source is ${PROTO_SRC}")


add_executable(protobuf_examples src/example.cpp ${PROTO_HEADER} ${PROTO_SRC})
TARGET_LINK_LIBRARIES(protobuf_examples ${Protobuf_LIBRARIES})
