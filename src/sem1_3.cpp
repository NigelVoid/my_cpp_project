#include <iostream>
#include <cstdlib>
#include <ctime> 
// Задание 4.2. Игра "Угадай число"



int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int secret_number = std::rand() % 100 + 1;
    
    const int MAX_ATTEMPTS = 7;
    int user_guess = 0;
    bool has_won = false;

    std::cout << "Компьютер загадал число от 1 до 100." << std::endl;
    std::cout << "У вас есть ровно " << MAX_ATTEMPTS << " попыток, чтобы его отгадать!\n" << std::endl;

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; ++attempt) {
        std::cout << "Попытка " << attempt << " из " << MAX_ATTEMPTS << ". Введите ваше число: ";
        
        if (!(std::cin >> user_guess)) {
            std::cout << "Ошибка ввода! Пожалуйста, введите корректное целое число." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            --attempt;
            continue;
        }

        if (user_guess == secret_number) {
            std::cout << "\nПоздравляем! Вы угадали число за " << attempt << " попыток(ки)!" << std::endl;
            has_won = true;
            break;
        } 
        else if (user_guess < secret_number) {
            std::cout << "Подсказка: Загаданное число МЕНЬШЕ вашего? Нет, оно БОЛЬШЕ!\n" << std::endl;
        } 
        else {
            std::cout << "Подсказка: Загаданное число МЕНЬШЕ!\n" << std::endl;
        }
    }

    if (!has_won) {
        std::cout << "\nК сожалению, попытки закончились. Вы проиграли!" << std::endl;
        std::cout << "Компьютер загадал число: " << secret_number << std::endl;
    }

    return 0;
}

