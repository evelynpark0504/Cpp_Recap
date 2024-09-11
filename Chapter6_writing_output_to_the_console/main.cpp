#include <iostream>

using namespace std;
void TaxCal(double sales, double state_tax, double county_tax);

int main() {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl 
         << "y = " << y << endl;
    TaxCal(95000, 4, 2);
    return 0;
}

// int main() {
//     int x = 10;
//     int y = 20;
//     std::cout << "x = " << x << std::endl 
//               << "y = " << y;
//     return 0;
// }

void TaxCal(double sales, double state_tax, double county_tax){
    double state_tax_amt = sales*state_tax/100;
    double county_tax_amt = sales*county_tax/100;
    double total_tax_amt = state_tax_amt + county_tax_amt;

    cout << "state tax: " << state_tax_amt << "\n"
         << "county tax: " << county_tax_amt << "\n"
         << "total tax: " << total_tax_amt;
}