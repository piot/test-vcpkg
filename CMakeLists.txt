cmake_minimum_required(VERSION 3.22)
project(test-vcpkg)

add_executable(test-vcpkg main.c)

find_package(PNG REQUIRED)
find_package(tiny-libc REQUIRED)

target_link_libraries(test-vcpkg PRIVATE PNG::PNG unofficial::tiny-libc::tiny-libc)
