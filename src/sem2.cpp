#include <iostream>
#include <string>
using namespace std;

void task1() {
    int a = 17, b = 5;
    cout << "Сумма: " << a + b << endl 
    << "Разность: " << a - b << endl 
    << "Произведение: " << a * b << endl
    << "Частное: " << a / b  << endl
    << "Остаток от деления: " << a % b;
 }

 void task2() {
    double d1 = 7.0, d2 = 2.0;
    cout << "Результат деления: " << d1 / d2 << endl
    << "Результат целочисленного деления: " << int(d1) / int(d2);
 }

 void task3() {
    int x = 10;
    x += 5; cout << x << endl;
    x -= 3; cout << x << endl;
    x *= 2; cout << x << endl;
    x /= 4; cout << x << endl;
    x %= 3; cout << x;
 }

 void task4() {
    int a = 5, b = 5, c = 0, d = 0;
    c = ++a; // Сначала увеличивает значение переменной на 1 и потом уже работает оператор присваивания
    d = b++; // Сначала работает оператор присваивания, а потом увеличивание значения b на 1 
    cout << c << " " << d;
 }

 void task5() {
    for (int n = 10; n > 0; n--) {
        cout << n << " ";
    }
 }

 void task6() {
    int a = 8, b = 12, c = 20;
    cout << "(a < b): " << (a < b) << " (a == c): " << (a == c) << " (b * 2 >= c): " << (b * 2 >= c)
    << " (c - a != b): " << (c - a != b) << " (a + b <= c): " << (a + b <= c);
 }

 void task7() {
   int a = 5, b = 10, c = 15;
   cout << "(a < b) && (b < c): " << ((a < b) && (b < c)) << "\n(a > b) || (b < c): " 
   << ((a > b) || (b < c)) << "\n!((a + b) == c): " << !((a + b) == c) 
   << "\n(a == 5) && (b != 10) || (c == 15): " << ((a == 5) && (b != 10) || (c == 15));
 }

 void task8() {
   int a, b;
   cout << "Введите два целых числа через пробел: "; cin >> a >> b;
   cout << "Максимальное(Большее) число: " << (a > b ? a: b);
 }

 void task9() {
   int age = 20; string status = (age >= 18) ? "Совершеннолетний": "Несовершеннолетний";
   cout << status;
 }

 void task10() {
   int c, a, b;
   c = (a = 5, b = 7, a + b); // последовательное выполнение кода через оператор "запятая"
   cout << a << " " << b << " " << c;
 }

 void task11() {
   cout << "Размер в байтах для различных типов:" << endl;
   cout << "char: " << sizeof(char) << "\nchar16_t: " << sizeof(char16_t)
   << "\nchar32_t: " << sizeof(char32_t) << "\nwchar_t: " << sizeof(wchar_t)
   << "\nsigned char: " << sizeof(signed char) << "\nsigned short int: " << sizeof(signed short int)
   << "\nsigned int: " << sizeof(signed int) << "\nsigned long int: " << sizeof(signed long int)
   << "\nsigned long long int: " << sizeof(signed long long int) << "\nunsigned char: " << sizeof(unsigned char)
   << "\nunsigned short int: " << sizeof(unsigned short int) << "\nunsigned int: " << sizeof(unsigned int)
   << "\nunsigned long int: " << sizeof(unsigned long int) << "\nunsigned long long int: " << sizeof(unsigned long long int)
   << "\nfloat: " << sizeof(float) << "\ndouble: " << sizeof(double) << "\nlong double: " << sizeof(long double);
 }

 void task12() {
   int a = 12, b = -1;
   double c; char d; bool e;
   cout << "Размер переменной типа int в байтах: " << sizeof(a)
   << "\nРазмер переменной типа double в байтах: " << sizeof(c)
   << "\nРазмер переменной типа char в байтах: " << sizeof(d)
   << "\nРазмер переменной типа bool в байтах: " << sizeof(e);

   cout << "\nРазмер (a + b) в байтах: " << sizeof(a + b);
 }
 void task13() {
   double pi = 3.14159;
   int pi_int = (int)pi, pi_int2 = int(pi);
   cout << pi_int << " " << pi_int2;
 }

int main() {
    cout << "Задание 1:" << endl; task1(); cout << endl;
    cout << "Задание 2:" << endl; task2(); cout << endl;
    cout << "Задание 3:" << endl; task3(); cout << endl;
    cout << "Задание 4:" << endl; task4(); cout << endl;
    cout << "Задание 5:" << endl; task5(); cout << endl;
    cout << "Задание 6:" << endl; task6(); cout << endl;
    cout << "Задание 7:" << endl; task7(); cout << endl;
    cout << "Задание 8:" << endl; task8(); cout << endl;
    cout << "Задание 9:" << endl; task9(); cout << endl;
    cout << "Задание 10:" << endl; task10(); cout << endl;
    cout << "Задание 11:" << endl; task11(); cout << endl;
    cout << "Задание 12:" << endl; task12(); cout << endl;
    cout << "Задание 13:" << endl; task13(); cout << endl;

    return 0;
}