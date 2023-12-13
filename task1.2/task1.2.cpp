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

    if (month >= 6 && month <= 8) {
        cout << "Це літній місяць";
    }
    else {
        cout << "Це не літній місяць";
    }

    return 0;
}