#include <stdio.h>
#include <string.h>

#define max 50
#define s 8

int main(){
	int h, w;

	scanf("%d %d ", &h, &w);

	char board[h][w];

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			scanf("%c", &board[i][j]);
		}getchar();
	}

	int block[h][w];
	int record[h][w];
	memset(record, 0, sizeof(record[0][0]) * h * w);

	int min = 51;

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if( (i%2) == 0) block[i][j] = (j%2);
			else block[i][j] = ((j+1)%2);

			if(board[i][j] == 'W' && block[i][j] == 1){
				board[i][j] = 'B';
				record[i][j] = 1;
			}else if(board[i][j] == 'B' && block[i][j] == 0){
				board[i][j] = 'W';
				record[i][j] = 1;
			}else{
				record[i][j] = 0;
			}
		}
	}

	for(int i=0; i<=h-s; i++){
		for(int j=0; j<=w-s; j++){
			
			int w_cnt = 0;
			int b_cnt = 0;

			for(int k=0; k<s; k++){
				for(int r=0; r<s; r++){
					w_cnt += record[i+k][j+r];
				}
			}

			b_cnt = (s*s)-w_cnt;

			if (w_cnt < min) min = w_cnt;
			if (b_cnt < min) min = b_cnt;
		}
	}

	printf("%d\n", min);

	return 0;
}
