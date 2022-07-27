#include <stdio.h>

int main(){
	int a[2][3][4] = {0,};

	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<4; k++){
				printf("%d ", a[i][j][k]);
			}printf("\n");
		}printf("\n");
	}

	char c[3] = {'W', 'R', 'V'};

	for(int i=0; i<3; i++){
		printf("%c ", c[i]);
	}printf("\n");

	if(c[0] == 'W') printf("TRUE\n");

	int n = 0%2;
	int m = 1%2;
	int z = 2%2;
	int u = 3%2;

	printf("%d %d %d %d\n", n, m, z, u);

	return 0;
}
