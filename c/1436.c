#include <stdio.h>
#include <string.h>

#define MAX 10001

int num[MAX];
int n;

int main(){
	
	scanf("%d", &n);

	int cnt = 0;
	char cnt_str[7];
	int i=0;
	while(i<n){
		cnt++;
		sprintf(cnt_str, "%d", cnt);
		
		if(strstr(cnt_str, "666")){
			i++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
