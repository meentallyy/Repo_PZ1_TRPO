﻿#include <iostream>
#include <locale.h>
#include <fstream>
#include "functions.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Программа запущена!" << endl;

    int a = 5, b = 3;

    ifstream File("input.txt");
    if (File.is_open()) {
        if (File >> a >> b) {
            cout << "Переменные считаны из файла: a = " << a << ", b = " << b << endl;
        }
        else {
            cout << "Ошибка чтения файла. Используются значения по умолчанию." << endl;
        }
        File.close();
    }
    else {
        cout << "Файл input.txt не найден. Используются значения по умолчанию." << endl;
    }

	cout << "Сумма: " << a << " + " << b << " = " << Plus(a, b) << endl;
	cout << "Разность: " << a << " - " << b << " = " << Minus(a, b) << endl;
	cout << "Умножение: " << a << " * " << b << " = " << a * b << endl;
	cout << "Деление: " << a << " / " << b << " / " << a / b << endl;

    return 0;
}