# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(TestProject VERSION 1.0 LANGUAGES C CXX)

# Specify the source files
set(SOURCES
    #my_test.cpp
    #FileController.cpp
    #FileService.cpp
    #File.cpp
  # Token.cpp
   #Token_test.cpp
   User.h
   Vector.h
   Console.cpp
    # other_file.cpp  # Add more .cpp files if neede 
)
if(NOT WIN32)
    find_package(Threads REQUIRED)
    target_link_libraries(TestProject PRIVATE Threads::Threads)
endif()

# Add the executable (target) from the source files
add_executable(TestProject ${SOURCES})

# Set the C++ standard for the target
set_property(TARGET TestProject PROPERTY CXX_STANDARD 14)
set_property(TARGET TestProject PROPERTY CXX_STANDARD_REQUIRED ON)
