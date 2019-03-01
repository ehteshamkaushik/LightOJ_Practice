#include <stdio.h>
#include <string.h>

long long int base(int n, int b)
{
    int str[100];
    long long int q, k = 0, i;
    q = n;
    while(q != 0)
    {
        str[k] = q % b;
        q = q / b;
        k++;
    }
    //return k;
    for(i = k-1; i >= 0; i--)
    {
        printf("%d", str[i]);
    }
}
long long int fact(long long int n)
{
    if ((n == 1) || (n == 0))
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int b, T, i = 1;
    long long int n;
    //scanf("%d", &T);
    //while(T > 0)
    //{
        scanf("%lld %d",&n, &b);
        base(n, b);
        //n = base(n, b);
        //printf("Case %d: %lld\n", i, n);
        //T--;
        //i++;
    //}
    printf("%lld", n);
    return 0;
}
