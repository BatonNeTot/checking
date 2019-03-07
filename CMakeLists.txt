cmake_minimum_required(VERSION 3.13)
project(checking)

set(CMAKE_CXX_STANDARD 17)

add_library(checking check.cpp check.h)