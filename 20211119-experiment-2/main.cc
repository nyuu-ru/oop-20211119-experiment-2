/*
 * main.c
 *
 *  Created on: 19 нояб. 2021 г.
 *      Author: unyuu
 */
#include <iostream>


		/*
		 *  - Имеется плоскость.
		 *  - На плоскости - точки. У точек есть координаты (x, y)
		 *  - Есть вектора. У векторов тоже есть координаты (x, y)
		 *  - Должна быть возможность вывода точек и векторов на консоль
		 *  - Должна быть возможность выполнения операций с векторами
		 *  - Должна быть возможность перемещать точку на какой-то вектор.
		 */

		/*
		 * Пример 1:
		 * Есть точка p=(x0, y0) и три вектора -
		 * 		v0={1, 1}, v1={x1, y1}, v2={x2, y2}
		 * Найти сумму векторов v3 = v1 + v2 + v0
		 * Переместить точку p на вектор v3
		 *
		 * Пример 2:
		 * То же самое, что в примере 1,
		 * но перед перемещением точки вектор v3 удвоить.
		 */

class Coordinates
{
public:
	double x {}, y {};

	Coordinates() = default;
	Coordinates(double x, double y): x(x), y(y) {}
	virtual ~Coordinates() = default;
};

class Point: public Coordinates
{
public:
	Point() = default;
	Point(double x, double y): Coordinates(x, y) {}
	virtual ~Point() = default;
};

class Vector: public Coordinates
{
public:
	Vector() = default;
	Vector(double x, double y): Coordinates(x, y) {}
	virtual ~Vector() = default;
};

std::istream& operator >>(std::istream &in, Coordinates &c)
{
	in >> c.x >> c.y;
	return in;
}

std::ostream& operator <<(std::ostream &out, const Coordinates& c)
{
	out << c.x << ',' << c.y;
	return out;
}

int main()
{
	using std::cin;
	using std::cout;
	Point p;
	Vector v0 {1, 1};
	Vector v1;
	Vector v2;
	Vector v3;

	cout << "Введите координаты точки p: ";
	cin >> p;
	cout << "Введите координаты вектора v1: ";
	cin >> v1;
	cout << "Введите координаты вектора v2: ";
	cin >> v2;

	v3.x = v1.x + v2.x + v0.x;
	v3.y = v1.y + v2.y + v0.x;
	cout << "v3 = {" << v3 << "}\n";

	p.x += v3.x;
	p.y += v3.y;
	cout << "p  = (" << p << ")\n";

	return 0;
}



