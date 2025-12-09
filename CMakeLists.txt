cmake_minimum_required(VERSION 3.16)

project(LibraryManagement LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LibraryManagement main.cpp
    Book.h
    Book.cpp
    author.h author.cpp
)

include(GNUInstallDirs)
install(TARGETS LibraryManagement
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
