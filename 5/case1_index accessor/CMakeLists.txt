cmake_minimum_required(VERSION 3.7)
project(case1_index_accessor)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        source/main.cpp
        source/Student_info.cpp
        header/Student_info.h
        source/grade.cpp header/grade.h
        header/median.h source/median.cpp
        header/category.h source/category.cpp
        )
add_executable(case1_index_accessor ${SOURCE_FILES})