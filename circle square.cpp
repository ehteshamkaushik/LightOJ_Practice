#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int T, i;
    double r, res, pi, a;
    pi = 2*acos(0.0);
    cin >> T;
    for(i = 0; i < T; i++)
    {
        cin >> r;
        a = r+r;
        res = (a*a) - (pi*r*r);
        printf("Case %d: %.2lf\n",i+1, res);
    }
    return 0;
}
