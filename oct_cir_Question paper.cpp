#include<bits/stdc++.h>
using namespace std;
map <int ,int> m;
int main(){
	int r,w,ua,t,n,a,b;
	int marks;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&a,&b);
		r=n;
		int count=0;
		while(r>=0){
			w=n-r;
			while(w>=0){
				ua=n-r-w;
				while(ua>=0){
					marks=r*a-w*b;
					if(m[marks]!=1){
					count++;
					m[marks]=1;
				}
					ua--;
				}
				w--;
			}
			r--;
		}
		printf("%d\n",count);
		m.clear();
		
	}
	return 0;
}
