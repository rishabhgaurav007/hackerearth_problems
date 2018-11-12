//B) Team Selection
// 12 VotesB) Team Selection
//Tag(s): Brute Force, Easy, Implement
#include<stdio.h>
main(){

    int i,n,j,k;
    scanf("%d",&n);
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%d",&b[i]);
    }
    int c=0;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]<a[j]){
                for(k=1;k<=n;k++){
                    if(a[j]<b[k]){
                        c++;
                    }
                }
            }
        }
    }
    printf("%d",c);
	
}
