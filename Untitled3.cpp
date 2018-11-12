#include<bits/stdc++.h>
using namespace std;
int a,b;
map<pair<int, int>, int> m;
map<pair<int, int>, int>::iterator it; 
int fun(int marks,int opr)
{
	if(marks==0 && opr==0)
		return 1;
	if(marks!=0 && opr==0)
		return 0;
	/*it=m.find({marks,opr});
	if(it!=m.end())
	{
		cout<<"#";
		return m[{marks,opr}];
	}*/
	if(marks>=0)
	{
	int p=fun(marks-a,opr-1);
	if(p==1)
		return m[{marks,opr}]=1;
	int q=fun(marks,opr-1);
	if(q==1)
		return m[{marks,opr}]=1;
	int r=fun(marks+b,opr-1);
	if(r==1)
		return m[{marks,opr}]=1;
	return m[{marks,opr}]=0;
	}
	else if(marks<0)
	{
		int r=fun(marks+b,opr-1);
		if(r==1)
			return m[{marks,opr}]=1;
		int q=fun(marks,opr-1);
		if(q==1)
			return m[{marks,opr}]=1;
		int p=fun(marks-a,opr-1);
		if(p==1)
			return m[{marks,opr}]=1;

		return m[{marks,opr}]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i,count=0;
		int temp;
		cin>>n>>a>>b;
		for(i=((-1)*n*b);i<=(a*n);i++)
		{
			temp=fun(i,n);
			if(temp==1)
				count+=1;
		}
		cout<<count<<endl;
		m.clear();
	}
}
