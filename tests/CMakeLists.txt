set(Boost_NO_BOOST_CMAKE ON)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

file(GLOB_RECURSE SOURCE_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(Edit_tests ${SOURCE_FILES})

target_include_directories(Edit_tests PRIVATE ${PROJECT_SOURCE_DIR}/include ${Boost_INCLUDE_DIRS})

target_link_libraries(Edit_tests PRIVATE ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(NAME Edit_tests COMMAND Edit_tests)
