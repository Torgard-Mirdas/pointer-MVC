cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Dodaj pliki źródłowe
set(SOURCE_FILES
        controler.cpp
        controller.h
        main.cpp
        model.cpp
        model.h
        view.cpp
        view.h
)

# Dodaj wykonywalny plik
add_executable(MyExecutable ${SOURCE_FILES})
