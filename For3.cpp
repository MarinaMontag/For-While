// For3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Даны два целых числа A и B (A < B). Вывести в порядке убывания все це-
лые числа, расположенные между A и B (не включая числа A и B), а также
количество N этих чисел.*/

#include "pch.h"
#include <iostream>
#include<Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B;
	int sum = 0;
	cout << "Введите 2 числа (первое число должно быть меньше второго):" << endl;
	cin >> A >> B;
	if (A < B) {
		for (int i = A + 1; i < B; i++) {
			cout << i << " " << endl;
			sum++;
		}
		cout << "Количество чисел: " << sum;
	}
	return 0;
}
			
	
	
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
