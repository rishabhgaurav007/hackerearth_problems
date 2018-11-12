#include<stdio.h>
#include<string.h>
int arr_count[1000000];
int main(){
	int t,n,i;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&n);
		
		for(i=0;i<1000000;i++)
			arr_count[i]=0;
		int arr[n];
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
			arr_count[arr[i]]++;
		}
		for(i=0;i<n;i++){
			if(arr_count[arr[i]]==1){
			printf("%d\n",arr[i]);
			break;
			}
		}
		
	//for
}//while
}//main
