#include "functions.c"
#include <iostream>

using namespace std;

int main() {
    // c funtions: sendMessage(string), sum(int, int)

    string message = std::to_string(sum(10,2));
    char strChar[message.length()];
    strcpy(strChar,message.c_str()); 

    sendMessage(strChar); // c function
}