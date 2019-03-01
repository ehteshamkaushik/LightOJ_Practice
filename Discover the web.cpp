#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char *f[100], *b[100],*curr[2];
    int tosc = 1;
    int tosb = 0;
    int tosf = 0;
    curr[0] = "lightoj";
    int T, i = 1;
    char *url = new char[30], *command = new char[30], *c = new char[30];
    cin >> T;
    while(T>0)
    {
        cin >> command;
        printf("Case %d:\n",i);
        while(strcmp(command, "QUIT"))
        {
            if(!strcmp(command, "BACK"))
            {
                if(tosb == 0)
                {
                    cout << "Ignored\n";
                }
                else
                {
                    //c = b[--tosb];
                    f[tosf++] = curr[--tosc];
                    curr[tosc++] = b[--tosb];
                    cout << curr[tosc-1] << "\n";
                }
            }
            else if(!strcmp(command, "FORWARD"))
            {
                if(tosf == 0)
                {
                    cout << "Ignored\n";
                }
                else
                {
                    b[tosb++] = curr[--tosc];
                    curr[tosc++] = f[--tosf];
                    cout << curr[tosc-1] << "\n";
                }
            }
            else if(!strcmp(command,"VISIT"))
            {
                    b[tosb++] = curr[--tosc];
                    cin >> url;
                    cout << url << "\n";
                    curr[tosc++] = url;
                    tosf = 0;
            }
            cin >> command;
        }
        i++;
        T--;
    }
    return 0;
}
