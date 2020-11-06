// Lab_03_4.cpp
// Кульба Андрый
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 17
#include <iostream>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if (y <= (sqrt(pow(R, 2) - (x + R) * (x + R))) || y <= (-sqrt(pow(R, 2) - (x - R) * (x - R))))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    system("pause");
    return 0;
}