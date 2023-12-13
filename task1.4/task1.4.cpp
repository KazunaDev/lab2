#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    //Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int month;
    cout << "Введіть номер місяця: ";
    cin >> month;

    switch (month) {
    case 1:
    case 2:
    case 12:
        cout << "Зима";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Весна";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Літо";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Осінь";
        break;
    default:
        cout << "Такого місяця не існує";
        break;
    }

    return 0;
}
