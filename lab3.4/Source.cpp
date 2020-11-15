// Lab_03_4.cpp
// Кульба Андрый
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 17
#include <iostream>
using namespace std;

int main()
{
    double x, y, R, x0, y0, x1, y1;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    x0 = R;
    y0 = 0;
    x1 = -R;
    y1 = 0;


    // розгалуження в повній формі
    if (((x > 0 && x < R) && (y < 0 && y > -R) && ((x - x0) * (x - x0) + (-y0) * (y - y0) <= R * R)) ||
        (((x < 0 && x > -R) && (y > 0 && y < R)) && ((x - x1) * (x - x1) + (y - y1) * (y - y1))))

        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    system("pause");
    return 0;
}