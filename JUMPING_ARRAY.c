#include<stdio.h>
//Count the number of steps coming out of the array
int main(){
	int n;
	printf("ENTER THE VALUE OF n: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<= n-1; i++){
		scanf("%d", &arr[i]);
	}
	
	int count=0;
	int x=0;
	while(x<=n){
		x+=arr[x];
		n-=x;
		count++;
	}
	printf("%d", count);
	return 0;
}