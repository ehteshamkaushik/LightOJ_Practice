
#include<stdio.h>



int count(int num)
{
    int cnt = 0;
    int t;
    for(t=1; t<= num; t *= 2)
    {
        if((num & (t)) != 0)
        {
            cnt++;
        }
    }
    return cnt;
}



int next(int num)
{
    int res;
    int t;
    for(t = 1; t<= num; t *= 2)
    {
        if( (num & (t)) != 0)
        {
            res = num + t;
            break;
        }
    }

    int diff =  count(num) - count(res) ;
    int i;
    for(i=0; i<diff; i++)
    {
        res += (1<<i);
    }
    return res;




}


int main()
{
    int kases, kaseno = 0;
    int num;

    scanf("%d", &kases);
    while(kases--)
    {
        scanf("%d", &num);
        num  = next(num);
        printf("Case %d: %d\n", ++kaseno, num);
    }
    return 0;

}
