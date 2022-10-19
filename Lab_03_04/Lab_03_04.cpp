// Lab_03_04.cpp
// Чипігіна Анастасія
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 23

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр
    double xc1, xc2, yc1, yc2; // координати центрів кіл
    double d1, d2, d3, d4;

    cout << "x = "; cin >> x; 
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    yc1 = R;
    xc1 = R * (-1);
    yc2 = R * (-1);
    xc2 = R;
    d1 = x - xc1;
    d2 = y - yc1;
    d3 = x - xc2;
    d4 = y - yc2;

    // розгалуження в повній формі
    if ((-1) * R < x && x < R && ((-1) * R < y && y < R) && (sqrt(pow(d1, 2) + pow(d2, 2)) > R) && (sqrt(pow(d3, 2) + pow(d4, 2)) > R))
        cout << "yes";
    else 
        cout << "no";

    system("pause");
    return 0;
}