add_executable(Editor Editor.cpp)

target_include_directories(Editor PRIVATE ${PROJECT_SOURCE_DIR}/include)

install(TARGETS Editor RUNTIME DESTINATION bin)
