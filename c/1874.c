#include <stdio.h>

int main(){

	int N;
	scanf("%d", &N);
	
	int index=-1;
	int stack[N];
	for (int i=0; i<N; i++){
		scanf("%d", &stack[i]);	
		index++;
	}

	printf("%d\n", index);

	return 0;
}
