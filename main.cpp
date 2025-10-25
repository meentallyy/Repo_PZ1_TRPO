﻿#include <iostream>
#include <locale.h>
#include <fstream>
#include "functions.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Программа запущена!" << endl;

	int a = 3, b = 5, i = 0, Sum = 0;

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
	
	while (i < a){ 
		Sum += b;
		i += 1;
	}

	cout << "Сумма: " << a << " + " << b << " = " << Plus(a, b) << endl;
	cout << "Разность: " << a << " - " << b << " = " << Minus(a, b) << endl;
	cout << "Умножение: " << a << " * " << b << " = " << Sum << endl;

    return 0;
}