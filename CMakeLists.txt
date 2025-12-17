cmake_minimum_required(VERSION 4.0)
project(Tymovy_projekt)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tymovy_projekt main.cpp
        stvoreni.cpp
        stvoreni.h
        nepritel.cpp
        nepritel.h
        nepratele/goblin.cpp
        nepratele/goblin.h
        hrac/hrac.cpp
        hrac/hrac.h
        Mapa.cpp
        Mapa.h)
