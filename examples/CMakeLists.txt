cmake_minimum_required(VERSION 3.5)
project(yaml_test)

set(CMAKE_CXX_STANDARD 11)
find_package(yaml-cpp)
include_directories(${YAML_CPP_INCLUDE_DIRS})

add_executable(yaml_test yaml_test.cpp)
target_link_libraries(yaml_test ${YAML_CPP_LIBRARIES})
set_target_properties(yaml_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)
set_target_properties(yaml_test PROPERTIES OUTPUT_NAME yaml_demo)