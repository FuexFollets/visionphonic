cmake_minimum_required(VERSION 3.10)

function(test_executable name)
    add_executable(${name} ${PROJECT_SOURCE_DIR}/tests/${name}.cpp)
    target_link_libraries(${name} PRIVATE ${PROJECT_NAME})
    add_test(NAME ${name} COMMAND ${name})
endfunction()

enable_testing()

add_test(NAME test1 COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test1 1)
add_executable(test1 ${PROJECT_SOURCE_DIR}/tests/test1.cpp)
