cmake_minimum_required(VERSION 3.31)
project(Herencia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Herencia main.cpp
        Envio.cpp
        Envio.h
        Paquete.cpp
        Paquete.h
        Sobre.cpp
        Sobre.h)
