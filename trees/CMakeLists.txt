
cmake_minimum_required(VERSION 3.22.1)
project(trees)
# set the project name

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp abbNode.hpp abb.hpp treeNode.hpp treeListNode.hpp treeList.hpp tree.hpp)

# add the executable