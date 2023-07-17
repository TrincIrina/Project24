#include<iostream>
#include<windows.h>
#include<string>
#include"Reservoir.h"
using namespace std;
//������� ������ ������������ � ����� �������
void print_array(Reservoir* mass, int& size) {
	for (int i = 0; i < size; i++)
		cout << i + 1 << ". " << mass[i].get_name() << " " << mass[i].get_type() << endl;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� ������� � ���������� ��������� "="
	Reservoir A("�����", "�����", 1.5, 2.4, 0.0125);
	Reservoir B = A;
	B.Print();
	//�������� ������� �������
	int size = 5;
	Reservoir* res = new Reservoir[size];
	//���������� �������
	res[0].Vvod("������", "�����", 79.5, 636, 1.642);
	res[1].Vvod("׸����", "����", 580, 1150, 2.210);
	res[2].Vvod("��������", "����", 180, 360, 0.013);
	res[3].Vvod("��������", "�����", 83, 248, 0.12);
	res[4].Vvod("���������", "�����", 83, 219, 0.23);

	cout << "����:" << endl;
	cout << "1. ������� ��� ������." << endl;
	cout << "2. ������� ������ ���������� � ������." << endl;
	cout << "3. �������� ������ ������." << endl;
	cout << "4. �������� ����� ������." << endl;
	cout << "5. �������� ������������ ������� ������." << endl;
	cout << "6. ��������� ��������������� ����� ������." << endl;
	cout << "7. ��������� ������� ������ ����������� �����." << endl;
	cout << "8. �������� ������� ���� ������� ������ ����." << endl;
	cout << "0. ����� �� ���������." << endl;
	int num;
	do {
		cout << "������� ����������� ����� ����: ";	cin >> num;
		if (num == 1) {
			print_array(res, size);
		}
		if (num == 2) {
			int k;
			print_array(res, size);
			cout << "����� ����� ��� ����������? ������� ��� �����: "; cin >> k;
			res[k - 1].Print();
		}
		if (num == 3) {
			int k;
			print_array(res, size);
			cout << "����� ����� ��� ����������? ������� ��� �����: "; cin >> k;
			cout << "������ - " << res[k - 1].get_width() << " ��." << endl;
		}
		if (num == 4) {
			int k;
			print_array(res, size);
			cout << "����� ����� ��� ����������? ������� ��� �����: "; cin >> k;
			cout << "����� - " << res[k - 1].get_length() << " ��." << endl;
		}
		if (num == 5) {
			int k;
			print_array(res, size);
			cout << "����� ����� ��� ����������? ������� ��� �����: "; cin >> k;
			cout << "������� - " << res[k - 1].get_depth() << " ��." << endl;
		}
		if (num == 6) {
			int k;
			print_array(res, size);
			cout << "����� ����� ��� ����������? ������� ��� �����: "; cin >> k;
			cout << "����� - " << res[k - 1].Volume() << " ��.���." << endl;
		}
		if (num == 7) {
			int k;
			print_array(res, size);
			cout << "����� ����� ��� ����������? ������� ��� �����: "; cin >> k;
			cout << "������� - " << res[k - 1].Square() << " ��.��." << endl;
		}
		if (num == 8) {
			int k, n;
			print_array(res, size);
			cout << "������� ����� ������� ����� ��������? ������� �� ������." << endl;
			cout << "1 - "; cin >> k;
			cout << "2 - "; cin >> n;
			res[k - 1].Comparison_square(res[n - 1]);
		}
	} while (num != 0);

	delete[] res; //�������� �������
}