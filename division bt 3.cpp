#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, j = 1;
    unsigned long long int A, B, c = 0;
    cin >> T;
    while(T > 0)
    {
        cin >> A >> B;
        if(A == B)
        {
            if(A%3 == 0 || B%3 == 2)
                c = 1;
        }
        else if((A % 3 == 0 && B % 3 == 0) || (A%3 == 2 && B%3 == 2) || (A%3 == 1 && B % 3 == 2) || (A% 3 == 0 && B %3 == 1))
        {
            c = (B-A)/3;
            c = c*2 + 1;
        }
        else if((A % 3 == 0 && B % 3 == 2) || (A%3 == 1 && B % 3 == 0))
        {
            c = (B-A+1)/3;
            c = c*2;
        }
        else if((A%3 == 2 && B%3 == 0))
        {
            c = (B-A+2)/3;
            c = c*2;
        }
        else if(A%3 == 1 && B%3 == 1)
        {
            c = (B - A)/3;
            c = c*2;
        }
        printf("Case %d: %llu\n",j, c);
        T--;
        j++;
        c = 0;
    }
    return 0;
}

