#include <iostream>
#include <locale.h>
#include "functions.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Программа запущена!" << endl;

    int a = 5, b = 3;
    cout << "Сумма " << a << " и " << b << " = " << Plus(a, b) << endl;
    cout << "Разность " << a << " и " << b << " = " << Minus(a, b) << endl;

    return 0;
}
