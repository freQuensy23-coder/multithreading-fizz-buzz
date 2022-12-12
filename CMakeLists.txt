cmake_minimum_required(VERSION 3.5)

project(fizz-buzz-like-a-pro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_CXX_FLAGS "-g ${CMAKE_CXX_FLAGS}")

include_directories(./ outstream/ sender/ number/)


add_executable(fizz-buzz-like-a-pro
    main.cpp
    controller.h
    controller.cpp

    outstream/outstream.h
    outstream/fileoutstream.h
    outstream/fileoutstream.cpp

    sender/sender.h
    sender/numbersender.h
    sender/numbersender.cpp
    sender/fizzsender.h
    sender/fizzsender.cpp
    sender/buzzsender.h
    sender/buzzsender.cpp
    sender/fizzbuzzsender.h
    sender/fizzbuzzsender.cpp

    number/number.h
    number/intnumber.h
    number/intnumber.cpp)

install(TARGETS fizz-buzz-like-a-pro
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
