#include <stdio.h>

int main()
{
    int T, N, d, res, i, j;
    scanf("%d", &T);
    for(i = 0; i < T; i++)
    {
        printf("\n");
        res = 0;
        scanf("%d", &N);
        for(j = 0; j < N; j++)
        {
            scanf("%d", &d);
            if(d > 0)
            {
                res+=d;
            }
        }
        printf("Case [%d]: %d\n",i+1, res);
    }

    return 0;
}

