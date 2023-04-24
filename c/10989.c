// O(n)
#include <stdio.h>

#define MAX 10001

int
main ()
{
	int N, x;
	scanf("%d", &N);

	int M[MAX] = {0,};
	for (int i=0; i<N; i++)
	{
		scanf("%d", &x);
		M[x]++;
	}

	for (int i=0; i<MAX; i++)
	{
		if (M[i] != 0)
		{
			for (int j=0; j<M[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
