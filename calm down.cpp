#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int T,i = 1, n;
    double pi, angle, R, r;
    pi = 2*acos(0.0);
    cin >> T;
    while(T>0)
    {
        cin >> R >> n;
        angle = 360.0/(2*n);
        angle = sin(angle*pi/180.0);
        r = (R*angle)/(1+angle);
        printf("Case %d: %.10lf\n",i,r);
        T--;
        i++;
    }
    return 0;
}
