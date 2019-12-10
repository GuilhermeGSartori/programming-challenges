#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592

int main() {
	int r, la, lo;
	double X, Y, Z;
	double r_la, r_lo;

	while(scanf("%d%d%d", &r, &la, &lo) != EOF) {

		r_la = (double)la/180*PI;
		r_lo = (double)lo/180*PI;

		Z = -1*r*cos(r_la)*cos(r_lo);
		X = r*cos(r_la)*sin(r_lo);
		Y = r*sin(r_la);

		if(Z > -0.0099999999 && Z < 0)
			Z = 0;
		if(X > -0.0099999999 && X < 0)
			X = 0;
		if(Y > -0.0099999999 && Y < 0)
			Y = 0;
		/*Z = roundf(Z * 100) / 100;
		X = roundf(X * 100) / 100;
		Y = roundf(Y * 100) / 100;

		if(Z == -0.00)
			Z = 0;
		if(X == -0.00)
			X = 0;
		if(Y == -0.00)
			Y = 0;*/

		printf("%.2lf %.2lf %.2lf\n", X, Y, Z);
	}

	exit(0);
}
