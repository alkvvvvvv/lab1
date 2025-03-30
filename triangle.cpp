#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// проверка на реальность треугольника 
bool valid(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// периметр
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// площадь
double area(double a, double b, double c) {
    double p = perimeter(a, b, c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// проверка на р/б
bool IsRB(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

// проверка на положительность 
double positive(const string &side) {
    double value;
    do {
        cout << "Введите сторону " << side << ":" << endl;
        cin >> value ;
        if (value <= 0) {
            cout << "Эмм... Значение должно быть положительным... Кто-нибудь видел когда-нибудь отрицательное занчение стороны треугольника? Введите положительное. Базар?" << endl;
        }
    } while (value <= 0);
    return value;
}

int main() {
    double a, b, c;
    
    // ввод сторон 
    a = positive("a");
    b = positive("b");
    c = positive("c");
    
    if (!valid(a, b, c)) {
        cout << "Треугольник с данными сторонами не существует" << endl;
        return 1;
    }
    
    cout << "Периметр треугольника: " << perimeter(a, b, c) << endl;
    cout << "Площадь треугольника по формуле Герона: " << area(a, b, c) << endl;
    cout << "Является ли треугольник равнобедренным: " 
         << (IsRB(a, b, c) ? "Да" : "Нет") << endl;
    
    return 0;
}