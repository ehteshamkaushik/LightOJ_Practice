#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, j = 1;
    long long int A, B, c = 0;
    cin >> T;
    while(T > 0)
    {
        cin >> A >> B;
        if(A == B)
        {
            if(A%3 == 0 || B%3 == 2)
                c = 1;
        }
        else if(A % 3 == 1)
        {
            if(B%3 == 0)
            {
                c = (B-A+1)/3;
                c = c*2;
            }
            else if(B%3 == 1)
            {
                c = (B-A)/3;
                c = c*2;
            }
            else if(B %3 == 2)
            {
                c = (B-A)/3;
                c=c*2+1;
            }
        }
        else if(A % 3 == 2)
        {
            if(B%3 == 0)
            {
                c = (B-A+2)/3;
                c = c*2;
            }
            else if(B%3 == 1)
            {
                c = (B-A+1)/3;
                c = c*2;
            }
            else if(B %3 == 2)
            {
                c = (B-A)/3;
                c=c*2+1;
            }
        }
        else if(A % 3 == 0)
        {
            if(B%3 == 0)
            {
                c = (B-A)/3;
                c = c*2+1;
            }
            else if(B%3 == 1)
            {
                c = (B-A)/3;
                c = c*2+1;
            }
            else if(B %3 == 2)
            {
                c = (B-A+1)/3;
                c=c*2;
            }
        }
        printf("Case %d: %lld\n",j, c);
        T--;
        j++;
        c = 0;
    }
    return 0;
}

