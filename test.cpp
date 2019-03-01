#include <cstdio>

int main()
{
    float a  = 1000.0001f;
    double b = 1000.0001;

    for (int i = 0; i < 5; ++i) {
        printf("a^%d = %f\n", 1 << i, a);
        printf("b^%d = %lf\n\n", 1 << i, b);

        a *= a;
        b *= b;
    }

    return 0;
}
