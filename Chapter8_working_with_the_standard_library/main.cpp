#include <iostream>
#include <cmath> //math.h

using namespace std;
double CircleArea(double r);

int main() {
    //double result = floor(1.2);
    double result = pow(2, 3);
    cout << result << "\n";

    cout << "Enter r: ";
    double r;
    cin >> r;
    cout << "\nArea of Circle: " << CircleArea(r);

    return 0;
}

double CircleArea(double r) {
    const double phi = 3.14;
    return phi * pow(r, 2);
}

//..
/**/