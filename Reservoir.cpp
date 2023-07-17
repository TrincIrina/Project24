#include "Reservoir.h"
//Консруктор по умолчанию
Reservoir::Reservoir()
{
	name = "";
	type = "";
	width = 0;
	length = 0;
	depth = 0;
}
//Конструктор с присвоением значений
Reservoir::Reservoir(std::string name, std::string type, double width, double length, double depth)
{
	this->name = name;
	this->type = type;
	this->width = width;
	this->length = length;
	this->depth = depth;
}
//Метод ввода данных
void Reservoir::Vvod()
{
	std::cout << "Введите название водоёма: "; std::cin >> name;
	std::cout << "Введите тип водоёма: "; std::cin >> type;
	std::cout << "Введите ширину водоёма: "; std::cin >> width;
	std::cout << "Длину: "; std::cin >> length;
	std::cout << "Глубину: "; std::cin >> depth;
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
//Метод вывода данных
void Reservoir::Print()
{
	std::cout << "Название водоёма: " << name << std::endl;
	std::cout << "Тип водоёма: " << type << std::endl;
	std::cout << "Ширина: " << width << " км." << std::endl;
	std::cout << "Длина: " << length << " км." << std::endl;
	std::cout << "Максимальная глубина: " << depth << " км." << std::endl;
}
//Метод нахождения приблизительного объёма
double Reservoir::Volume()
{
	return width * length * depth;
}
//Метод нахождения площади водной глади
double Reservoir::Square()
{
	return width * length;
}
//Метод определяющий совпадают ли типы водоёмов
bool Reservoir::Comparison(Reservoir& other)
{
	return (this->type == other.type);
}
//Метод сравнения площадей
void Reservoir::Comparison_square(Reservoir& other)
{
	if (this->Comparison(other)) { //Проверка равенства типов
		//Проверка соотношения площадей
		if (this->Square() == other.Square())
			std::cout << "Площади " << this->type << " " << this->name << " и "
			<< other.type << " " << other.name << " равны." << std::endl << std::endl;
		if (this->Square() < other.Square())
			std::cout << "Площадь " << this->type << " " << this->name << " меньше, чем площадь "
			<< other.type << " " << other.name << std::endl << std::endl;
		if (this->Square() > other.Square())
			std::cout << "Площадь " << this->type << " " << this->name << " больше, чем площадь "
			<< other.type << " " << other.name << std::endl;
	}
	else
		std::cout << "Эти водоёмы разных типов." << std::endl;
}

void Reservoir::operator=(Reservoir& other)
{
	this->name = other.name;
	this->type = other.type;
	this->width = other.width;
	this->length = other.length;
	this->depth = other.depth;
}