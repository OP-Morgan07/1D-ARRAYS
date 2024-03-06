#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<=n-1; i++){
		scanf("%d", &arr[i]);
	}
	bool flag=false;
	int sum=0;
	
	for(int i=0; i<=n-1; i++){
		
		for(int j=i; j<=n-1; j++){
			sum=sum+ arr[j];
			if(sum==0){
				flag=true;
				printf("A SUBARRAY OF THE GIVEN ARRAY CAN HAVE SUM EQUALS TO ZERO");
				break;
			}
		}
		sum=0;
	}
	if(flag==false) printf("There is no subarray in the given array that has sum equals to zero");
	return 0;
	
}