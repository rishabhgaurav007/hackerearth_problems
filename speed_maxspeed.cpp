#include<stdio.h>
int main(){
	int n,t,j,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&n);
		int count=0,k,arr[n];
		for(j=0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		k=arr[0];
		if(n>1){
		for(j=0;j<n-1;j++){
			if(k>=arr[j+1]){
				count++;
				k=arr[j+1];	
			}
		}}
		count++;//1st car is always at its max speed
		printf("%d\n",count);
 
	}
	return 0;
}
