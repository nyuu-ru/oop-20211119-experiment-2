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

int main()
{
	coords_t p;
	coords_t v1;
	coords_t v2;
	coords_t v3;

	printf("Введите координаты точки p: ");
	scanf("%lf%lf", &p.x, &p.y);
	printf("Введите координаты вектора v1: ");
	scanf("%lf%lf", &v1.x, &v1.y);
	printf("Введите координаты вектора v2: ");
	scanf("%lf%lf", &v2.x, &v2.y);

	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	printf("v3 = {%.3lf,%.3lf}\n", v3.x, v3.y);

	p.x += v3.x;
	p.y += v3.y;
	printf("p = (%.3lf,%.3lf)\n", p.x, p.y);


	return 0;
}



