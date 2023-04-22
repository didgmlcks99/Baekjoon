#include <stdio.h>

#define MAX 99999999
#define MIN -1

int main () {
	int N, M;
	int GCD = MIN;
	int LCM = MAX;

	scanf("%d %d", &N, &M);

	int up = MIN;
	if (N > up) up = N;
	if (M > up) up = M;

	for (int i=1; i<=up; i++)
	{
		if (N%i == 0 && M%i == 0) {
			GCD = i;
		}
	}

	int lw = MAX;
	if (N < lw) lw = N;
	if (M < lw) lw = M;

	int i=1;
	while (1)
	{
		int cmp = i*lw;
		i++;
		if (cmp%N == 0 && cmp%M == 0) {
			LCM = cmp;
			break;
		}
	}


	printf("%d\n%d\n", GCD, LCM);

	return 0;
}
