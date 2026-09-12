// Лабораторная работа № 1. Вариант 77.
// Выполнила: Соколова Д. С., группа ПИ-51.
#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====

// Перевод тонн в килограммы
double tToKg(double t) {
    return t * 1000.0;
}

// Перевод килограммов в тонны
double kgToT(double kg) {
    return kg / 1000.0;
}

// Перевод тонн в центнеры
double tToCwt(double t) {
    return t * 10.0;
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double value;
    do {
        cout << "\n=== Вариант 77: конвертер массы ===\n";
        cout << "1. Тонны -> килограммы\n";
        cout << "2. Килограммы -> тонны\n";
        cout << "3. Тонны -> центнеры\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Введите массу в тоннах: ";
                cin >> value;
                cout << "Масса = " << tToKg(value) << " кг\n";
                break;
            case 2:
                cout << "Введите массу в килограммах: ";
                cin >> value;
                cout << "Масса = " << kgToT(value) << " т\n";
                break;
            case 3:
                cout << "Введите массу в тоннах: ";
                cin >> value;
                cout << "Масса = " << tToCwt(value) << " ц\n";
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";

        }
    } while (choice != 0);
    return 0;
}
