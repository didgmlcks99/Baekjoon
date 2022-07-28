#include <stdio.h>
#include <string.h>

#define wordMax 20001
#define charMax 51

struct myStr{
	char word[charMax];
	char len;
};

struct myStr word_list[wordMax];
int word2idx[wordMax];
int n;

void swap(int a, int b){

	int tmp = word2idx[a];
	word2idx[a] = word2idx[b];
	word2idx[b] = tmp;

}

int partition(int low, int high){
	
	int high_idx = word2idx[high];

	int pivot = word_list[high_idx].len;
	int i = (low - 1);

	for(int j=low; j<high; j++){
		
		int x = word2idx[j];

		if(word_list[x].len < pivot){
			i++;
			swap(i, j);
		}else if(word_list[x].len == pivot){
			int c = strcmp(word_list[x].word, word_list[high_idx].word);

			if(c < 0){
				i++;
				swap(i, j);
			}else if(c == 0){
				word_list[x].word[0] = '\0';
			}
		}
	}

	swap(i+1, high);
	return (i+1);
}

void quickSort(int low, int high){

	if(low < high){
		int pi = partition(low, high);

		quickSort(low, pi-1);
		quickSort(pi+1, high);
	}

}

int main(){

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%s", word_list[i].word);
		word_list[i].len = strlen(word_list[i].word);
		
		word2idx[i] = i;
	}
	
	quickSort(0, n-1);

	for(int i=0; i<n; i++){
		int x = word2idx[i];

		if (word_list[x].word[0] != '\0') printf("%s\n", word_list[x].word);
	}

/*
	for(int i=0; i<n; i++){

		int x = word2idx[i];

		if(i != 0) {
			int b = word2idx[i-1];

			if(word_list[b].len == word_list[x].len){
				if(strcmp(word_list[b].word, word_list[x].word) != 0) printf("%s\n", word_list[x].word);
			}else printf("%s\n", word_list[x].word);
		}else printf("%s\n", word_list[x].word);
	}
*/
	return 0;
}
