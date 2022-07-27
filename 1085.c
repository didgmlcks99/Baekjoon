#include <stdio.h>

int main(){
	int x, y, w, h;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	int x_dis;
	int y_dis;

	if(x > (w/2)) x_dis = w-x;
	else x_dis = x;

	if(y > (h/2)) y_dis = h-y;
	else y_dis = y;

	int min;
	if (x_dis < y_dis) min = x_dis;
	else min = y_dis;

	printf("%d\n", min);

	return 0;
}
