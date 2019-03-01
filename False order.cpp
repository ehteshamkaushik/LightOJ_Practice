#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct ord
{
    int num;
    int div;
};

struct ord arr[1005];
int divisor(int n)
{
    int ans = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(((n%i) == 0) && (i != n/i))
        {
            ans+=2;
        }
        else if(((n%i) == 0) && (i == n/i))
            ans += 1;
    }

    return ans;
}

int main()
{
    int T, i, n, ans;
    arr[0].div = 1;
    arr[0].num = 1;
    for(n = 2; n <= 1000; n++)
    {
        ans = divisor(n);
        arr[n-1].num = n;
        arr[n-1].div = ans;
    }
    for(i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if((arr[j].div >arr[j+1].div) || (arr[j].div == arr[j+1].div) && (arr[j].num < arr[j+1].num))
            {
                struct ord temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cin >> T;
    i = 1;
    while(T > 0)
    {
        cin >> n;
        printf("Case %d: %d\n",i, arr[n].num);
        T--;
        i++;
    }
    return 0;
}
