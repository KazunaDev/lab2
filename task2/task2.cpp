#include <iostream>
#include <Windows.h>
using namespace std;

// Варіант 13
// Структура, що представляє точку
struct Point {
    int x, y;
};

// Функція, яка визначає, чи точка (p) знаходиться всередині многоугольника (polygon)
bool isInside(Point polygon[], int n, Point p) {
    int INF = 10000; // Достатньо велике значення

    // Створюємо точку за межами екрану
    Point extreme = { INF, p.y };

    // Кількість перетинів ліній між p та extreme
    int count = 0, i = 0;

    do {
        int next = (i + 1) % n;

        // Перевірка, чи лінія (polygon[i], polygon[next]) перетинає відсічену лінію (p, extreme)
        if ((polygon[i].y > p.y) != (polygon[next].y > p.y) &&
            p.x < (polygon[next].x - polygon[i].x) * (p.y - polygon[i].y) / (polygon[next].y - polygon[i].y) + polygon[i].x)
            count++;

        i = next;
    } while (i != 0);

    // Якщо кількість перетинів непарне, то точка знаходиться всередині многоугольника
    return count % 2 == 1;
}

int main() {
    //Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Задаємо вершини многоугольника
    Point polygon[] = { {-1, 0}, {-1, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1} };
    int n = sizeof(polygon) / sizeof(polygon[0]);

    // Введення координат точки
    Point p;
    cout << "Введіть координати точки (x, y): ";
    cin >> p.x >> p.y;

    // Визначення, чи точка знаходиться всередині многоугольника
    if (isInside(polygon, n, p)) {
        cout << "Точка знаходиться всередині многоугольника.\n";
    }
    else {
        cout << "Точка знаходиться поза многоугольником.\n";
    }

    return 0;
}

