# set minimum required cmake version 
cmake_minimum_required(VERSION 3.0)

# create variable containing project name
set(PROJECT_NAME "CMake_Example")
# set project name
project(${PROJECT_NAME})
message("building ${PROJECT_NAME} ...")

# specify the folder(s) where the compiler should look for include files
include_directories(include) #in our case the 'include' folder present in the root folder

# we can manually add files to the project 
set(HEADERS include/say_hello.h) # this is relative to the root of the project

# or we can use file(GLOB ...) for wildcard additon (add any file ending with '.h')
file(GLOB HEADER_FILES "include/*.h")

file(GLOB SRC_FILES "src/*.cpp")

# specify where to generate the executable file
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)

# specify that we are building an executable, and what sources to use 
add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SRC_FILES})
