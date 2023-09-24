cmake_minimum_required(VERSION 3.10)

project(VisionPhonic)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

add_subdirectory(${PROJECT_SOURCE_DIR}/lib/SFML)

add_executable(VisionPhonic "${PROJECT_SOURCE_DIR}/src/VisionPhonic/main.cpp")

target_link_libraries(VisionPhonic PUBLIC sfml-graphics)
target_sources(VisionPhonic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML/include")
