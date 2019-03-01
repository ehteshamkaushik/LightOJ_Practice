#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n,m;
    int ara[50]={0};
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        if(n==0)
        printf("0 0\n");
        else if(n==20)
            printf("10 10\n");
        else if(n<=10){
            printf("%d %d\n",ara[n],abs(n-ara[n]));
            ara[n]++;
        }
        else{
            m=10-ara[n];
            printf("%d %d\n",m,abs(n-m));
            ara[n]++;
        }


}
return 0;
}
