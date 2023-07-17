#include<iostream>
#include<windows.h>
#include<string>
#include"Reservoir.h"
using namespace std;
//Функция вывода наименований и типов водоёмов
void print_array(Reservoir* mass, int& size) {
	for (int i = 0; i < size; i++)
		cout << i + 1 << ". " << mass[i].get_name() << " " << mass[i].get_type() << endl;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Создание объекта и применение оператора "="
	Reservoir A("Белое", "озеро", 1.5, 2.4, 0.0125);
	Reservoir B = A;
	B.Print();
	//Создание массива водоёмов
	int size = 5;
	Reservoir* res = new Reservoir[size];
	//Заполнение массива
	res[0].Vvod("Байкал", "озеро", 79.5, 636, 1.642);
	res[1].Vvod("Чёрное", "море", 580, 1150, 2.210);
	res[2].Vvod("Азовское", "море", 180, 360, 0.013);
	res[3].Vvod("Онежское", "озеро", 83, 248, 0.12);
	res[4].Vvod("Ладожское", "озеро", 83, 219, 0.23);

	cout << "МЕНЮ:" << endl;
	cout << "1. Вывести все водоёмы." << endl;
	cout << "2. Вывести полную информацию о водоёме." << endl;
	cout << "3. Показать ширину водоёма." << endl;
	cout << "4. Показать длину водоёма." << endl;
	cout << "5. Показать максимальную глубину водоёма." << endl;
	cout << "6. Посчитать приблизительный объём водоёма." << endl;
	cout << "7. Посчитать площадь водной поверхности одоёма." << endl;
	cout << "8. Сравнить площади двух объёмов одного типа." << endl;
	cout << "0. Выйти из программы." << endl;
	int num;
	do {
		cout << "Введите необходимый пункт меню: ";	cin >> num;
		if (num == 1) {
			print_array(res, size);
		}
		if (num == 2) {
			int k;
			print_array(res, size);
			cout << "Какой водоём вас интересует? Введите его номер: "; cin >> k;
			res[k - 1].Print();
		}
		if (num == 3) {
			int k;
			print_array(res, size);
			cout << "Какой водоём вас интересует? Введите его номер: "; cin >> k;
			cout << "Ширина - " << res[k - 1].get_width() << " км." << endl;
		}
		if (num == 4) {
			int k;
			print_array(res, size);
			cout << "Какой водоём вас интересует? Введите его номер: "; cin >> k;
			cout << "Длина - " << res[k - 1].get_length() << " км." << endl;
		}
		if (num == 5) {
			int k;
			print_array(res, size);
			cout << "Какой водоём вас интересует? Введите его номер: "; cin >> k;
			cout << "Глубина - " << res[k - 1].get_depth() << " км." << endl;
		}
		if (num == 6) {
			int k;
			print_array(res, size);
			cout << "Какой водоём вас интересует? Введите его номер: "; cin >> k;
			cout << "Объём - " << res[k - 1].Volume() << " км.куб." << endl;
		}
		if (num == 7) {
			int k;
			print_array(res, size);
			cout << "Какой водоём вас интересует? Введите его номер: "; cin >> k;
			cout << "Площадь - " << res[k - 1].Square() << " км.кв." << endl;
		}
		if (num == 8) {
			int k, n;
			print_array(res, size);
			cout << "Площади каких водоёмов нужно сравнить? Введите их номера." << endl;
			cout << "1 - "; cin >> k;
			cout << "2 - "; cin >> n;
			res[k - 1].Comparison_square(res[n - 1]);
		}
	} while (num != 0);

	delete[] res; //Удаление массива
}