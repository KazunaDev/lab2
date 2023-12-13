#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    //Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int day, month;
    cout << "Введіть число та номер місяця: ";
    cin >> day >> month;

    if ((day >= 29 && month == 12) || (day <= 10 && month == 1)) {
        cout << "Канікули!";
    }
    else {
        cout << "Навчання";
    }

    return 0;
}