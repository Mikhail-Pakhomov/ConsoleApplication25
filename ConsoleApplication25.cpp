#include <iostream>
#include <unordered_set>
#include <Windows.h>

class SpecialCharacters {
private:
    std::unordered_set<char> characters;

public:
    SpecialCharacters() {
        // Ініціалізуємо множину особливих символів
        characters = { 'O', 'A', 'I', 'E', 'H', 'C', 'B', 'K', 'P', 'X', 'T', 'M' };
    }

    bool operator==(char символ) const {
        // Перевіряємо, чи переданий символ є особливим символом
        return characters.count(символ) > 0;
    }

    bool operator!=(char символ) const {
        // Інвертуємо результат перевірки рівності
        return !(*this == символ);
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    SpecialCharacters особливі;

    // Порівнюємо символи
    char символ1 = 'А';
    char символ2 = 'Б';

    if (особливі == символ1) {
        std::cout << "Символ 1 є особливим." << std::endl;
    }
    else {
        std::cout << "Символ 1 не є особливим." << std::endl;
    }

    if (особливі == символ2) {
        std::cout << "Символ 2 є особливим." << std::endl;
    }
    else {
        std::cout << "Символ 2 не є особливим." << std::endl;
    }

    return 0;
}