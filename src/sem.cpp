#include <iostream>

// Задание 4.3. Обмен значений без переменной

int main() {
    int a, b; 
    std::cout << "Введите целое число a: "; std::cin >> a; 
    std::cout << std::endl << "Введите целое число b: "; std::cin >> b;
    a = b + a;
    b = a - b; a = a - b;
    std::cout << std::endl << "Результат: a = " << a << " b = " << b << std::endl;
    return 0;
}
