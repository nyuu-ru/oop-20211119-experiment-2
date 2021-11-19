/*
 * main.c
 *
 *  Created on: 19 нояб. 2021 г.
 *      Author: unyuu
 */
#include <stdio.h>

typedef struct {
	double x, y;
} coords_t;

void read_coords(coords_t * where)
{
	scanf("%lf%lf", &where->x, &where->y);
}

void print_coords(const coords_t * what)
{
	printf("%.3lf,%.3lf", what->x, what->y);
}

int main()
{
	coords_t p;
	coords_t v1;
	coords_t v2;
	coords_t v3;

	printf("Введите координаты точки p: ");
	read_coords(&p);
	printf("Введите координаты вектора v1: ");
	read_coords(&v1);
	printf("Введите координаты вектора v2: ");
	read_coords(&v2);

	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	printf("v3 = {");
	print_coords(&v3);
	printf("}\n");

	p.x += v3.x;
	p.y += v3.y;
	printf("p  = (");
	print_coords(&p);
	printf(")\n");

	return 0;
}



