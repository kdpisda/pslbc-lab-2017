cmake_minimum_required(VERSION 3.8)
project(pslbc_lab_2017)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        04-08-2k17/16115036_clab_1.c
        04-08-2k17/16115036_clab_2.c
        04-08-2k17/16115036_clab_3.c
        04-08-2k17/16115036_clab_4.c
        04-08-2k17/16115036_clab_5.c
        04-10-2k17/16115036_clab_1.c
        sets_library/4_pattern.c
        sets_library/5_pattern.c
        sets_library/6_pattern.c
        sets_library/main.c
        sets_library/palindrome.c
        sets_library/print_palindrome.c
        sets_library/sets.h)

add_executable(pslbc_lab_2017 ${SOURCE_FILES})