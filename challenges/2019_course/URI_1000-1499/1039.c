#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1415


/*double DEG_to_RAD(double d) {
	return d * PI / 180.0;
}*/


int main() {

	int r1, x1, y1, r2, x2, y2;
	int area1, area2;
	double euc_dist;
	double rad;

	while(scanf("%d%d%d%d%d%d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {

		if(r2 > r1)
			printf("MORTO\n");

		else {
			//area1 = PI * r1 * r1;
			//area2 = PI * r2 * r2;
			int distanceX = x1 - x2;
			int distanceY = y1 - y2;
			euc_dist = sqrt((double)(distanceX*distanceX) + (double)(distanceY*distanceY));

			if(euc_dist <= r1 - r2)
				printf("RICO\n");
			else
				printf("MORTO\n");


			/*for(i = 0; i < 360; i++) {
				rad = DEG_to_RAD(i);
				x1 *
			}*/

			/*if(abs(euc_dist) > r1)
				printf("MORTO\n");
			else if((abs(euc_dist) +  r2) > r1)
				printf("MORTO\n");
			else
				printf("RICO\n");*/
		}


	}

	exit(0);

}
