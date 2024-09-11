#include <iostream>

double Test(int x, int y);

int main() {
    // 1st. ()
    // 2nd. * and /
    // 3rd. + and -
    double x = 1+2*3;
    std::cout << x;
    std::cout << '\n';

    double test_x = 3, test_y = 10;
    double test_z = Test(test_x, test_y);

    std::cout << test_z;

    return 0;
}

double Test(double x, double y) {
    return (x + 10) / (3 * y);
}