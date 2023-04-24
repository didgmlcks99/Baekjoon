// O(n*m)
#include <stdio.h>

void
swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int
main ()
{
	int N;
	scanf("%d", &N);

	int M[N];

	for (int i=0; i<N; i++)
	{
		scanf("%d", &M[i]);
	}

	for (int i=0; i<N; i++)
	{
		for (int j=i; j<N; j++)
		{
			if (M[i] > M[j]) swap(&M[i], &M[j]);
		}
	}

	for (int i=0; i<N; i++)
	{
		printf("%d\n", M[i]);
	}

	return 0;
}
