#pragma once
#include<iostream>
//Класс описывающий водоёмы
class Reservoir
{
private:
	std::string name;  //Название водоёма
	std::string type;  //Тип
	double width; //Максимальная ширина
	double length; //Длина
	double depth;  //Максимальная глубина
public:
	//Конструкторы
	Reservoir();
	Reservoir(std::string name, std::string type, double width, double length, double depth);
	//Метод ввода данных
	void Vvod();
	void Vvod(std::string name, std::string type, double width, double length, double depth);
	//Сеттеры
	void set_name(std::string name) { this->name = name; }
	void set_type(std::string type) { this->type = type; }
	void set_width(double width) { this->width = width; }
	void set_length(double length) { this->length = length; }
	void set_depth(double depth) { this->depth = depth; }
	//Геттеры
	std::string get_name() { return name; }
	std::string get_type() { return type; }
	double get_width() { return width; }
	double get_length() { return length; }
	double get_depth() { return depth; }
	//Метод вывода
	void Print();
	//Объём
	double Volume();
	//Площадь
	double Square();
	//Проверка одинаковы ли типы
	bool Comparison(Reservoir& other);
	//Сравнение площадей водоёмов одного типа
	void Comparison_square(Reservoir& other);
	//Оператор копирования
	void operator=(Reservoir & other); 
};