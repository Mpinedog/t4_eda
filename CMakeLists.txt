
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
# set the project name

project(main)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main tests/main.cpp src/abb.cpp src/abbNode.cpp src/avl.cpp src/avlNode.cpp src/tree.cpp src/treeList.cpp src/treeListNode.cpp src/treeNode.cpp)
target_include_directories(main PUBLIC ${PROJECT_SOURCE_DIR}/include)



# add the executable