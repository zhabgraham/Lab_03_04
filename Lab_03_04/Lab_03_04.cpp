// Lab_03_04.cpp
// ������ ��������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 23

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R; // ������� ��������

    cout << "x = "; cin >> x; 
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // ������������ � ����� ����
    if ( ((x + R)*(x + R) + (y - R)*(y - R) >= R*R && y >= 0 && x <= 0 && y <= R && x <= R)
        || ((x - R) * (x - R) + (y + R) * (y + R) >= R*R && y <= 0 && x >= 0 && y <= R && x <= R)
        || (x <= R && y <= R && x >= 0 && y >= 0) || (x <= 0 && y <= 0 && x >= -R && y >= -R))
        cout << "yes" << endl;
    else 
        cout << "no" << endl;

    system("pause");
    return 0;
}