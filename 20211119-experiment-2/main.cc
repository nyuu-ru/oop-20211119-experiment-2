/*
 * main.c
 *
 *  Created on: 19 нояб. 2021 г.
 *      Author: unyuu
 */
#include <iostream>

struct Coordinates
{
	double x, y;
};

int main()
{
	using std::cin;
	using std::cout;
	Coordinates p;
	Coordinates v1;
	Coordinates v2;
	Coordinates v3;

	cout << "Введите координаты точки p: ";
	cin >> p.x >> p.y;
	cout << "Введите координаты вектора v1: ";
	cin >> v1.x >> v1.y;
	cout << "Введите координаты вектора v2: ";
	cin >> v2.x >> v2.y;

	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	cout << "v3 = {" << v3.x << ", " << v3.y << "}\n";

	p.x += v3.x;
	p.y += v3.y;
	cout << "p  = (" << p.x << ", " << p.y << ")\n";

	return 0;
}



