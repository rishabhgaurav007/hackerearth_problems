#include<bits/stdc++.h>
using namespace std;
#define nn 1000000007
int main(){

		long long int a,b,countx=0,county=0,ans,temp,an2;
	map<long long int,long long int>mx;
	map<long long int,long long int>my;
		int n;
		cin>>n;
		int i;
		for(i=0;i<n;i++){
			cin>>a>>b;
			if(mx[a]>=1)
			{
			}
			else
			{
				mx[a]=1;
				countx++;
			}
			if(my[b]>=1)
			{
			}
			else
			{
				my[b]=1;
				county++;
			}
			}
			temp=countx;
			if(countx%2==0)
			{
				countx/=2;
				ans=(((temp-1)%nn)*(countx%nn))%nn;
			}
			else
			{
				countx=(countx-1)/2;
				ans=((temp%nn)*(countx%nn))%nn;
			}
			
			temp=county;
			if(county%2==0)
			{
				county/=2;
				an2=(((temp-1)%nn)*(county%nn))%nn;
			}
			else
			{
				county=(county-1)/2;
				an2=((temp%nn)*(county%nn))%nn;
			}
			ans=((ans%nn)*(an2%nn))%nn;
			cout<<ans;
	   
	return 0;
}
