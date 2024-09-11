#include <iostream>

using namespace std;
double Fah2Cel(double fahrenheit);

int main() {
    cout << "Enter a value: \n";

    int value;
    cin >> value;

    cout << "\nValue: " << value;

    //double x, y;
    //cin >> x >> y;

    double fahrenheit;
    cout << "Enter fahrenheit: ";
    cin >> fahrenheit;
    cout << "\nCelsius: " << Fah2Cel(fahrenheit);

    return 0;
}

double Fah2Cel(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9.0;
}
