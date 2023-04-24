#include <stdio.h>

#define K_MAX 10001
#define N_MAX 1000001
// K <= N
#define max 2147483647

long int k_lens[K_MAX];
long int n_lens[N_MAX];
int K, N;

int check(long int t){
	int cnt = 0;

	for(int i=0; i<K; i++){
		if(k_lens[i] >= t) cnt += (k_lens[i]/t);
	}

	if(cnt >= N) return 1;
	else return -1;
}

long int binary_search(long int l, long int r, long int max_length){
	long int m = 0;
	
	while(l <= r){

		m = (l+r)/2;

		if(check(m) == 1) {
			max_length = m;
			l = m+1;
		}
		else r = m-1;
	}

	return max_length;
}

int main(){
	scanf("%d %d", &K, &N);

	for(int i=0; i<K; i++){
		scanf("%ld", &k_lens[i]);
	}

	long int result = binary_search(0, max, -1);	

	printf("%ld\n", result);

	return 0;
}
