cmake_minimum_required(VERSION 3.25)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXE_LINKER_FLAGS -static)

include_directories(.)

add_executable(MyProject
        ComposedCalculator_main.cpp
        ComposedCalculator_main.h
        function.cpp
        function.h
        Least_Square.cpp
        Least_Square.h
        LeastSquare_main.cpp
        LeastSquare_main.h
        lexer.cpp
        lexer.h
        Linear_Equations.cpp
        Linear_Equations.h
        LinearEquations_main.cpp
        LinearEquations_main.h
        main.cpp
        Matrix.h
        MatrixIO.h
        parser.cpp
        parser.h
        std_lib_facilities.h
        variable.cpp
        variable.h
       Simplex_Method.cpp
        SimplexMethod_main.h)
