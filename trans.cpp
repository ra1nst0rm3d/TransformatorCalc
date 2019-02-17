#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a_pack,yazik,voltage_1,voltage_2,w,S,I,P,vitok1,vitok2,D1,D2;
a_pack = yazik = voltage_1 = voltage_2 = w = S = 0;
const double pi = 3.1415926535897932;
cout << "Вводить дробные значения с точкой, не с запятой!" << endl;
cout << "Толщина будущего пакета магнитопровода(в см): ";
cin >> a_pack;
cout << "Ширина среднего языка(в см): ";
cin >> yazik;
cout << "Вольтаж первичной обмотки: ";
cin >> voltage_1;
cout << "Вольтаж вторичной обмотки: ";
cin >> voltage_2;
cout << "Ток, снимаемый с вторичной обмотки(в амперах): ";
cin >> I;
P = voltage_2 * I;
S = a_pack * yazik;
w = 50 / S; /* Кол-во витков на 1В */
vitok1 = voltage_1 * w;
vitok2 = voltage_2 * w;
cout << "-------------------------------" << endl;
cout << "Витков для первичной обмотки: " << vitok1 << endl;
cout << "Витков для вторичной обмотки: " << vitok2 << endl;
cout << "Мощность вторичной обмотки: " << P << endl;
P *= 1.25;
cout << "Мощность первичной обмотки: " << P << endl;
D2 = 0.8 * sqrt(I);
cout << "Диаметр проводника в вторичной обмотке: " << D2 << endl;
I = P/voltage_1;
cout << "Ток первичной обмотки: " << I << endl;
D1 = 0.8 * sqrt(I);
cout << "Диаметр проводника в первичной обмотке: " << D1 << endl;
D1 /= 2;
D2 /= 2;
D1 = pi * D1 * D1;
D2 = pi * D2 * D2;
D1 *= vitok1;
D2 *= vitok2;
cout << "Площадь окна для первичной обмотки: " << D1 + (D1 / 100 * 10) << endl;
cout << "Площадь окна для вторичной обмотки: " << D2 + (D1 / 100 * 10)<< endl;
cout << "-------------------------------------" << endl;
cout << "Создано Олегом Сазоновым: whitylmn@gmail.com";
}
