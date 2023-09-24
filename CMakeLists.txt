cmake_minimum_required(VERSION 3.10)

project(VisionPhonic)

include(cmake/options.cmake)
include(cmake/libs.cmake)
include(tests/CMakeLists.txt)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/VisionPhonic/Analysis)

add_executable(VisionPhonic "${PROJECT_SOURCE_DIR}/src/VisionPhonic/main.cpp")
target_link_libraries(VisionPhonic PUBLIC sfml-graphics VFAnalysis)
