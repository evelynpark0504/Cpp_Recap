#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Result {
    int first;
    int second;
};
Result RollingDice();

int main() {
    //srand(5);
    //long elapsedSeconds = time(nullptr);
    //srand(elapsedSeconds);

    srand(time(nullptr));
    int number = rand()%10;
    cout << number;

    Result res = RollingDice();
    cout << "First value: " << res.first << std::endl;
    cout << "Second value: " << res.second << std::endl;

    return 0;
}

Result RollingDice() {
    //srand(5);
    //long elapsedSeconds = time(nullptr);
    //srand(elapsedSeconds);

    srand(time(nullptr));
    int num1 = rand()%6+1;

    srand(-time(nullptr));
    int num2 = rand()%6+1;

    Result res = {num1, num2};

    return res;
}