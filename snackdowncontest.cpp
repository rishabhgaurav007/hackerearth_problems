#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,p,q;
	cin>>t;
	int i;
	while(t--){
		map<int ,int > m;
		cin>>n;
		cin>>p;
		int temp;
		for(i=1;i<=p;i++){
			cin>>temp;
			m[temp]=1;
		}
		cin>>q;
		for(i=1;i<=q;i++){
			cin>>temp;
			m[temp]=1;
		}
		int flag=1;
		for(i=1;i<=n;i++){
		if(m[i]!=1){
			flag=0;
		}
		}
			
		if(flag==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
