#pragma once
#include<iostream>
//����� ����������� ������
class Reservoir
{
private:
	std::string name;  //�������� ������
	std::string type;  //���
	double width; //������������ ������
	double length; //�����
	double depth;  //������������ �������
public:
	//������������
	Reservoir();
	Reservoir(std::string name, std::string type, double width, double length, double depth);
	//����� ����� ������
	void Vvod();
	void Vvod(std::string name, std::string type, double width, double length, double depth);
	//�������
	void set_name(std::string name) { this->name = name; }
	void set_type(std::string type) { this->type = type; }
	void set_width(double width) { this->width = width; }
	void set_length(double length) { this->length = length; }
	void set_depth(double depth) { this->depth = depth; }
	//�������
	std::string get_name() { return name; }
	std::string get_type() { return type; }
	double get_width() { return width; }
	double get_length() { return length; }
	double get_depth() { return depth; }
	//����� ������
	void Print();
	//�����
	double Volume();
	//�������
	double Square();
	//�������� ��������� �� ����
	bool Comparison(Reservoir& other);
	//��������� �������� ������� ������ ����
	void Comparison_square(Reservoir& other);
	//�������� �����������
	void operator=(Reservoir & other); 
};