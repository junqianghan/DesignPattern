cmake_minimum_required(VERSION 3.5)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)
include_directories(Include/)
aux_source_directory(Src SOURCE_FILES)

add_executable(main ${SOURCE_FILES})