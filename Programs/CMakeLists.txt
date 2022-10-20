cmake_minimum_required(VERSION 3.23)
project(Programs C)

set(CMAKE_C_STANDARD 11)

add_executable(Programs
        calculator.c
        circleCurcumference.c
        Hypotenuse.c
        numberGuessingGame.c
        quizGame.c
        TempConversion.c
        Tictactoe.c)
