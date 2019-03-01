#include <stdio.h>

int main()
{
    int T, n, i;
    scanf("%d",&T);
    int arr[21];
    for(i = 0; i <= 10; i++)
    {
        arr[i] = 0;
    }
    for(i = 11; i <= 20; i++)
    {
        arr[i] = 10;
    }
    for(i = 0; i < T; i++)
    {
        scanf("%d",&n);
        printf("%d %d\n",arr[n],n - arr[n]);
        if(n <=10){
            arr[n]++;
        }
        else
        {
            arr[n]--;
        }
        if((n <= 10) && (n - arr[n]) < 0)
        {
            arr[n] = 0;
        }
        if((n-arr[n] > 10)){
            arr[n] = 10;
        }
    }
    return 0;
}
