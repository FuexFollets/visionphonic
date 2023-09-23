cmake_minimum_required(VERSION 3.10)

project(VisionPhonic)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(LIB_SFML ${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

add_executable(VisionPhonic "${SOURCE_DIR}/main.cpp")

add_subdirectory(${LIB_SFML})
target_link_libraries(VisionPhonic PRIVATE sfml-graphics)
target_include_directories(VisionPhonic PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML/include")
