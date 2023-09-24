add_library(VFAnalysis ./rgb_grid.hpp ./rgb_grid.cpp)
target_include_directories(VFAnalysis PUBLIC ${PROJECT_SOURCE_DIR}/lib/AudioFile)
