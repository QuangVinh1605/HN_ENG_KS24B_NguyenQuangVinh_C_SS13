#include<stdio.h>
void mang(int m, int n){
	int arr[m][n];
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			printf("arr[%d][%d] = ",i, j );
			scanf("%d",  &arr[i][j]);
		}
	}
	for(int i = 0; i<m;i++){
		for(int j = 0; j<n;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	mang(3,3);
	return 0;
}
