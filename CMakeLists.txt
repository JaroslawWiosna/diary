#
#  @file CMakeLists.txt
# 
#  @author Jaroslaw Wiosna
# 
#

cmake_minimum_required (VERSION 2.6)

set(COMPILE_FLAGS "--std=gnu++17 -Wall -g -O0")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}" )
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINK_EXECUTABLE} ${LINK_FLAGS}" )

include_directories( 

)
set(files

)

project (diary)
add_executable(diary main.cpp ${files} ${COMPILED_RESOURCES}) 
target_link_libraries(diary stdc++fs)
