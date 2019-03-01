#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <iostream>
using namespace std;

 double digits[1000001];

int main()
{

	int T, i, n, b;

	for(n = 1; n < 1000001; n++)
        digits[n] = log10(n) + digits[n-1];

	scanf("%d", &T);
	for(i = 1; i <= T; i++)
    {
		scanf("%d %d", &n, &b);
		printf("Case %d: %.0lf\n", i, floor(digits[n]/log10(b)) + 1);
	}
	return 0;
}
