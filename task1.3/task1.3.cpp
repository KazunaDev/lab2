#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    //Кодування
        SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int X, Y;
    bool result;

    cout << "Введіть числа X і Y: ";
    cin >> X >> Y;

    if (X == Y) {
        result = true;
    }
    else {
        result = false;
    }

    cout << "Значення логічної змінної: " << (result ? "TRUE" : "FALSE");

    return 0;
}