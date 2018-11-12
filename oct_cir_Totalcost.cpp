#include<stdio.h>
int main(){
	int f,c,p,s,t,h,x;
	scanf("%d %d %d %d %d",&p,&s,&t,&h,&x);
	if(x>=(s-t))
	{
		f=x%(s-t);
		f=f*h;
		c=p*(s-t)+f;
	printf("%d",c);
	}
	else
	printf("%d",p*x);
	return 0;
}//proper solution using loops
