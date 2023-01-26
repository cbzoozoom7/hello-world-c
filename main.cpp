/*********************
* main.cpp
* Chris B
* recieved 26 Jan 2023
**********************/

#include "main.h"

int main(int argc, char** argv) {
    cout << "My Command line analyzer..." << endl;
    cout << "The number of command line parameters are: " << argc << endl;
    cout << "The length of the name of the program is: " << string_length(argv[0]) << endl;
    for (int i = 1; i < argc; i++) { //iterate through command line arguments
        std::cout << "The length of the parameter " << i << " is " << string_length(argv[i]) << std::endl;
    }
    return 0;
}
