// Lab_03_4.cpp
// ������ ������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 17
#include <iostream>
using namespace std;

int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R; // ������� ��������

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // ������������ � ����� ����
    if (y <= (sqrt(pow(R, 2) - (x + R) * (x + R))) || y <= (-sqrt(pow(R, 2) - (x - R) * (x - R))))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    system("pause");
    return 0;
}