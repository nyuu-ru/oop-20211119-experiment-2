/*
 * main.c
 *
 *  Created on: 19 нояб. 2021 г.
 *      Author: unyuu
 */
#include <stdio.h>

int main()
{
	double p_x, p_y;
	double v1_x, v1_y;
	double v2_x, v2_y;
	double v3_x, v3_y;

	printf("Введите координаты точки p: ");
	scanf("%lf%lf", &p_x, &p_y);
	printf("Введите координаты вектора v1: ");
	scanf("%lf%lf", &v1_x, &v1_y);
	printf("Введите координаты вектора v2: ");
	scanf("%lf%lf", &v2_x, &v2_y);

	v3_x = v1_x + v2_x;
	v3_y = v1_y + v2_y;
	printf("v3 = {%.3lf,%.3lf}\n", v3_x, v3_y);

	p_x += v3_x;
	p_y += v3_y;
	printf("p = (%.3lf,%.3lf)\n", p_x, p_y);


	return 0;
}



