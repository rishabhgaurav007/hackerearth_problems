#include<stdio.h>
int main(){
	int n,j,i;
	
	
		scanf("%d",&n);
		int arr[n];
		int max;
		int temp[n];
		for(j=0;j<n;j++)
			scanf("%d",&arr[j]);
		max=arr[n-1];
		int count=0;
		temp[count]=arr[n-1];
		printf("   %d	",temp[count]);
		for(j=n-2;j>=0;j--){
		
			if(arr[j]>=max){
				max=arr[j];
				count++;
				temp[count]=max;
			}
		}
		printf(" %d ",count);
		for(j=0;j<count+1;j++)
			printf("%d ",temp[j]);
		
		
		
 
	
	return 0;
}
