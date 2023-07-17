#include "Reservoir.h"
//���������� �� ���������
Reservoir::Reservoir()
{
	name = "";
	type = "";
	width = 0;
	length = 0;
	depth = 0;
}
//����������� � ����������� ��������
Reservoir::Reservoir(std::string name, std::string type, double width, double length, double depth)
{
	this->name = name;
	this->type = type;
	this->width = width;
	this->length = length;
	this->depth = depth;
}
//����� ����� ������
void Reservoir::Vvod()
{
	std::cout << "������� �������� ������: "; std::cin >> name;
	std::cout << "������� ��� ������: "; std::cin >> type;
	std::cout << "������� ������ ������: "; std::cin >> width;
	std::cout << "�����: "; std::cin >> length;
	std::cout << "�������: "; std::cin >> depth;
	std::cout << std::endl;
}
void Reservoir::Vvod(std::string name, std::string type, double width, double length, double depth)
{
	this->name = name;
	this->type = type;
	this->width = width;
	this->length = length;
	this->depth = depth;
}
//����� ������ ������
void Reservoir::Print()
{
	std::cout << "�������� ������: " << name << std::endl;
	std::cout << "��� ������: " << type << std::endl;
	std::cout << "������: " << width << " ��." << std::endl;
	std::cout << "�����: " << length << " ��." << std::endl;
	std::cout << "������������ �������: " << depth << " ��." << std::endl;
}
//����� ���������� ���������������� ������
double Reservoir::Volume()
{
	return width * length * depth;
}
//����� ���������� ������� ������ �����
double Reservoir::Square()
{
	return width * length;
}
//����� ������������ ��������� �� ���� �������
bool Reservoir::Comparison(Reservoir& other)
{
	return (this->type == other.type);
}
//����� ��������� ��������
void Reservoir::Comparison_square(Reservoir& other)
{
	if (this->Comparison(other)) { //�������� ��������� �����
		//�������� ����������� ��������
		if (this->Square() == other.Square())
			std::cout << "������� " << this->type << " " << this->name << " � "
			<< other.type << " " << other.name << " �����." << std::endl << std::endl;
		if (this->Square() < other.Square())
			std::cout << "������� " << this->type << " " << this->name << " ������, ��� ������� "
			<< other.type << " " << other.name << std::endl << std::endl;
		if (this->Square() > other.Square())
			std::cout << "������� " << this->type << " " << this->name << " ������, ��� ������� "
			<< other.type << " " << other.name << std::endl;
	}
	else
		std::cout << "��� ������ ������ �����." << std::endl;
}

void Reservoir::operator=(Reservoir& other)
{
	this->name = other.name;
	this->type = other.type;
	this->width = other.width;
	this->length = other.length;
	this->depth = other.depth;
}