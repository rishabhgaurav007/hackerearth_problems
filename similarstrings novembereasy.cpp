#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
	int n,i,j;
	scanf("%d",&n);
	string a,b,c;
	int E[n],A[n],B[n],C[n],D[n];
	cin>>a>>b>>c;
	int k;
		 int d,maxa=-488,mina=488;
	for(i=0;i<n;i++){
		k=i;
		d=0;
		for(j=0;j<n;j++){
			k=k%n;
		 d=d+abs(a[k]-b[k])+abs(a[k]-c[k]);
	k++;
		if(d>maxa)
			maxa=d;
		
		if(d<mina)
		mina=d;
	}
		if(d>maxa)
			maxa=d;
		
		if(d<mina)
		mina=d;
	}
	printf("%d %d",maxa,mina);
}
