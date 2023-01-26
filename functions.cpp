/*
functions.cpp
Chris
Created 26 Jan 2023
*/
#include "functions.h"
int string_length(const char* str) {
    int i = 0;
    while (str[i] != '\0') { //all strings terminate with '\0'
        i++;
    }
    return i;
}