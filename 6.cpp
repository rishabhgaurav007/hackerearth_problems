#include <stdio.h>
unsigned long long factorial(int n,unsigned int M) 
{ 

  
    unsigned long long f = 1; 
    for (int i = 1; i <= n; i++) 
        f = (f*i) % M;  // Now f never can 
                        // exceed 10^9+7 
    return f; 
}
int main(){
    int t,n,m;
int i,f;

scanf("%d",&t);
scanf("%d",&m);
for (i=1;i<=t;i++){
scanf("%d",&n);

if(n==2||n==1)
printf("0 ");
else{
f=factorial(n-2,m);
f=f*n*(n-1)/2;
printf("%d ",f);    
}
}
}
