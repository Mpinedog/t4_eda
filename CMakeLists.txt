
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(EXECUTABLE_NAME main)
SET(MY_SOURCE_FILES
    tests/main.cpp
    src/abb.cpp
    src/abbNode.cpp
    src/avl.cpp
    src/avlNode.cpp
    src/tree.cpp
    src/treeList.cpp
    src/treeListNode.cpp
    src/treeNode.cpp
)
# set the project name

project(main)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${EXECUTABLE_NAME} ${MY_SOURCE_FILES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)



# add the executable