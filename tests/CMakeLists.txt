cmake_minimum_required(VERSION 3.10)

function(test_executable name)
    add_executable(${name} ${PROJECT_SOURCE_DIR}/tests/${name}.cpp)
    target_link_libraries(${name} PUBLIC sfml-audio)
    add_test(NAME ${name} COMMAND ${name})
endfunction()

enable_testing()

test_executable(test1)
test_executable(test_sfml_audio)
