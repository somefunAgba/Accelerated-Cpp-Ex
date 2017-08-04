cmake_minimum_required(VERSION 3.7)
project(final_partitoning_prog)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        source/main.cpp
        source/Student_info.cpp
        header/Student_info.h
        source/grade.cpp header/grade.h
        header/median.h source/median.cpp)
add_executable(final_partitoning_prog ${SOURCE_FILES})