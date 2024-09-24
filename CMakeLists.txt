cmake_minimum_required(VERSION 3.29)
project(library_management_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(library_management_system main.cpp
        headers/BSTNode.h
        src/BSTNode.cpp
        headers/BST.h
        src/BST.cpp
        headers/Book.h
        src/Book.cpp
        headers/Library.h
        src/Library.cpp
)
