cmake_minimum_required(VERSION 3.28)
project(AirplaneSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(AirplaneSystem main.cpp
        Route.h
        Client.h
        Route.cpp
        Client.cpp
        validations/user_validation.cpp
        validations/user_validation.h
        bat_lib/DataStructers.cpp
        bat_lib/DataStructers.h
)
