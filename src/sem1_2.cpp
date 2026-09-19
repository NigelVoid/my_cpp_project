#include <iostream>
#include <bit>

// Задание 4.1. Битовый счетчик (PopCount)

int main() {
    unsigned int n; std::cout << "Введите целое число без знаков: ";
    std::cin >> n;
    int bit_count = 0;

    while (n > 0) {
        bit_count += (n & 1);
        n >>= 1;
    }

    std::cout << "Количество единиц в двоичной записи: " << bit_count << std::endl;
    return 0;
}
