int main() {
    int number = 0b11111111; //255
    int number2 = 0xFF; //255
    unsigned int num = 0;
    return 0;
}

int Narrowing() {
    int num = 1'000'000;
    short another = num;
    return 0;
}