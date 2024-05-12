#include <iostream>
#include "read_input_functions.h"


using namespace std;

std::string ReadLine() {
    std::string s;
    std::getline(cin, s);
    return s;
}

int ReadLineWithNumber() {
    int result;
    std::cin >> result;
    ReadLine();
    return result;
}