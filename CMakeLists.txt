cmake_minimum_required(VERSION 3.28)
project(untitled3)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled3 main.cpp
        ProgressBar.cpp
        ProgressBar.h
        Observer.cpp
        Observer.h
        subject.cpp
        subject.h
        ProgressBar_Observer.cpp
        ProgressBar_Observer.h)
