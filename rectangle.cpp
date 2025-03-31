#include <iostream>
#include <cmath>      // Для функции sqrt (квадратный корень)
#include <stdexcept>  // Для исключений

using namespace std;

int main() {
    double length, width;

    try {
        cout << "Введите длину прямоугольника: ";
        cin >> length;

        cout << "Введите ширину прямоугольника: ";
        cin >> width;

        // Проверка на отрицательные числа
        if (length < 0 || width < 0) {
            throw runtime_error("Ошибка: Длина и ширина должны быть неотрицательными!");
        }

        // Вычисления
        double perimeter = 2 * (length + width);
        double area = length * width;
        double diagonal = sqrt(length * length + width * width);

        // Вывод результатов
        cout << "Периметр: " << perimeter << endl;
        cout << "Площадь: " << area << endl;
        cout << "Диагональ: " << diagonal << endl;
    } 
    catch (const exception& e) {
        cerr << e.what() << endl;
        return 1;  // Завершаем программу с кодом ошибки
    }

    return 0;
}
