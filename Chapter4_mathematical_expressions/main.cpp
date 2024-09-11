#include <iostream>

int main() {
    int x = 10;
    int y = 3;
    int z = x % y;
    std::cout << z;
    return 0;
}

int add() {
    int x = 10;
    x = x+1;
    x++;
    ++x;
    std::cout << x;
    return 0;
}

int add2() {
    int x = 10;
    int y = x++; // y = 11, x = 10
    int z = ++x; // z = 12, x = 12

    std::cout << x;
    return 0;
}