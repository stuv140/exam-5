cmake_minimum_required(VERSION 3.10)

project(Editor VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
file(GLOB_RECURSE SOURCE_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.hpp")

# Создаем исполнимый файл
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
add_subdirectory(tests)

include(InstallRequiredSystemLibraries)

set(CPACK_PACKAGE_NAME "Editor")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "otus")

include(CPack)
