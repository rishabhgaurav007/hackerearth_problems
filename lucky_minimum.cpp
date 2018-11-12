#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int arr[n];
		scanf("%d",&arr[0]);
		int min=arr[0];
		int count=1;
		for(i=1;i<n;i++){
			scanf("%d",&arr[i]);
			if(arr[i]==min)
				count++;
			else if(arr[i]<min){
				count=1;
				min=arr[i];
			}
		}
		if(count%2==0)
		printf("Unlucky");
		else
		printf("Lucky");
		printf("\n");
	}
}
