#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 99999

struct data{
	char num[MAX];
	int len;
	struct data* next;
};

struct data* input;

int isPalindrome(char* num, int l, int r){

	if(l < r){
		if(num[l] == num[r]){
			return isPalindrome(num, l+1, r-1);
		}else return -1;
	}return 1;
}

int main(){
	
	input = (struct data*)malloc(sizeof(struct data));
	int n=0;

	struct data* walk = input;
	while(1){
		scanf("%s", walk->num);
		walk->len = strlen(walk->num);

		if(walk->num[0] == '0' && walk->num[1] == '\0') break;
		else {
			walk->next = (struct data*)malloc(sizeof(struct data));
			walk = walk->next;
		}
	}

	walk = input;
	while(walk->next != 0x0){
		if(isPalindrome(walk->num , 0, walk->len-1) == 1) printf("yes\n");
		else printf("no\n");

		walk = walk->next;
	}

	return 0;
}
