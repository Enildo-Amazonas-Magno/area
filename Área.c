#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	double k, l, m, t, c, p, q, r;
	scanf("%lf", &k);
	scanf("%lf", &l);
	scanf("%lf", &m);
	t = ((k*m)/(2));
	c = (PI)*(m*m);
	p = (((k+l)*(m))/2);
	q = l*l;
	r = k*l;
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", t, c, p, q, r);
	return 0;
}