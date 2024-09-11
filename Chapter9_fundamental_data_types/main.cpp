// int 4bytes -2B to 2B
// short 2bytes -32,000 to 32,000
// long 4 
// long long 8

//double 8
//long double 8
//float 4

//bool 1
//char 1

#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    float intRate = 3.67F; // if not F -> double
    long fileSize = 90000L; // if not L -> int
    char letter = 'a';
    bool isValid = false;

    auto randomStr = "hi I'm elfo";

    //int num {1.2}; -> doesn't work like this
    int num {};
    cout << num;

    return 0;
}