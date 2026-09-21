#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <climits>

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
  cout << "pi_int: " << pi_int << " pi_int2: " << pi_int2;
}

void task14() {
  float f = 9.99;
  cout << "float f: " << f << " | int f: " << int(f) << " | char f (Вывел символ табуляции): " << static_cast<char>(int(f));
}

void task15() {
  int var = 42;
  cout << "Значение var: " << var << " Адрес var в памяти: " << &var;
}

void task16() {
  int x=5, y=10, z=0;
  z = (x += 3) * (y -= 2) + (++x) - (y--); 
  // Всё, что в скобах выполяняются преоритетно. ++x сначала x + 1 потом возвращает x. y-- сначала возвращает y потом y - 1
  cout << "z: " << z;
}

void task17() {
  int a = 2, b = 3, c = 4;
  int result = a + b * c - a / b % c, result2 = a + (b * c) - (a / b) % c;
  cout << "a + b * c - a / b % c: " << result << " a + (b * c) - (a / b) % c: " << result2;
}

void task18() {
  signed char a = CHAR_MAX; short a2 = SHRT_MAX; int a3 = INT_MAX; long a4 = LONG_MAX; long long a5 = LONG_LONG_MAX;
  unsigned char b = UCHAR_MAX; unsigned short b2 = USHRT_MAX; unsigned int b3 = UINT_MAX; unsigned long b4 = ULONG_MAX; unsigned long long b5 = ULONG_LONG_MAX;
  cout << "Максимальные значения целочисленных типов:\n" << "signed char: " << (int)a << " short: " << a2 
  << " int: " << a3 << " long: " << a4 << " long long: " << a5 << "\nБеззнаковые аналоги:\n"
  << "unsigned char: " << (int)b << " unsigned short: " << b2 << " unsigned int: " << b3 << "\nunsigned long: " << b4 << " unsigned long long: " << b5;
}

void task19() {
  float a = 1.0/3.0; double a2 = 1.0/3.0; long double a3 = 1.0/3.0;
  cout << fixed;
  cout << "Точность 5 цифр после запятой: ";
  cout.precision(5); cout << "float: " << a << " ";  cout << " double: " << a2; cout << " long double: " << a3;
  cout << "\nТочность 10 цифр после запятой: ";
  cout.precision(10); cout << "float: " << a << " ";  cout << " double: " << a2; cout << " long double: " << a3;
  cout << "\nТочность 15 цифр после запятой: ";
  cout.precision(15); cout << "float: " << a << " ";  cout << " double: " << a2; cout << " long double: " << a3;
}

void task20() {
  char ch = 'A'; char16_t u16 = u'B'; char32_t u32 = U'C'; wchar_t w = L'D'; bool flag = true;
  cout << boolalpha;
  cout << "ch: " << (int)ch << " u16: " << (int)u16 << " u32: " << (int)u32 << " w: " << (int)w
  << " flag: " << flag;
}

void task21() {
  int a; float b; char c;
  cout.precision(2);
  cout << "Введите целое число: "; cin >> a;
  cout << "\nВведите дробное число: "; cin >> b;
  cout << "\nВведите символ: "; cin >> c;
  cout << "\nСумма целого числа и привёдонного дробного к целому: " << a + (int)b
  << "\nРазность целого числа и кода символа: " << a - static_cast<int>(c)
  << "\nСравнение между исходным целым и приведённым дробным: " << (int)b << " " << b
  << "\n(целое > 10) && (код символа < 100): " << ((a > 10) && (static_cast<int>(c) < 100))
  << "\nРазмер целого числа в байтах: " << sizeof(a) << " Размер дробного числа в байтах: "
  << sizeof(b) << " Размер символа в байтах: " << sizeof(c);
}

int main() {
  cout << "Задание 1:" << endl; task1(); cout << endl << endl;
  cout << "Задание 2:" << endl; task2(); cout << endl << endl;
  cout << "Задание 3:" << endl; task3(); cout << endl << endl;
  cout << "Задание 4:" << endl; task4(); cout << endl << endl;
  cout << "Задание 5:" << endl; task5(); cout << endl << endl;
  cout << "Задание 6:" << endl; task6(); cout << endl << endl;
  cout << "Задание 7:" << endl; task7(); cout << endl << endl;
  cout << "Задание 8:" << endl; task8(); cout << endl << endl;
  cout << "Задание 9:" << endl; task9(); cout << endl << endl;
  cout << "Задание 10:" << endl; task10(); cout << endl << endl;
  cout << "Задание 11:" << endl; task11(); cout << endl << endl;
  cout << "Задание 12:" << endl; task12(); cout << endl << endl;
  cout << "Задание 13:" << endl; task13(); cout << endl << endl;
  cout << "Задание 14:" << endl; task14(); cout << endl << endl;
  cout << "Задание 15:" << endl; task15(); cout << endl << endl;
  cout << "Задание 16:" << endl; task16(); cout << endl << endl;
  cout << "Задание 17:" << endl; task17(); cout << endl << endl;
  cout << "Задание 18:" << endl; task18(); cout << endl << endl;
  cout << "Задание 19:" << endl; task19(); cout << endl << endl;
  cout << "Задание 20:" << endl; task20(); cout << endl << endl;
  cout << "Задание 21:" << endl; task21(); cout << endl << endl;

  return 0;
}