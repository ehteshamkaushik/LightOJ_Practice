#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    stack<string>s1;
    stack<string>s2;
    stack<string>s3;
    s3.push("http://www.lightoj.com/");
    int T, i = 1;
    char command[50], url[50];
    cin >> T;
    while(T>0)
    {
        cin >> command;
        printf("Case %d:\n",i);
        while(strcmp(command, "QUIT"))
        {
            if(!strcmp(command, "BACK"))
            {
                if(s1.empty())
                {
                    cout << "Ignored\n";
                }
                else
                {
                    string temp;
                    temp = s3.top();
                    s2.push(temp);
                    s3.pop();
                    temp = s1.top();
                    s3.push(temp);
                    s1.pop();
                    cout << temp << "\n";
                }
            }
            else if(!strcmp(command, "FORWARD"))
            {
                if(s2.empty())
                {
                    cout << "Ignored\n";
                }
                else
                {
                    string temp = s3.top();
                    s1.push(temp);
                    s3.pop();
                    temp = s2.top();
                    s3.push(temp);
                    s2.pop();
                    cout << temp << "\n";
                }
            }
            else if(!strcmp(command,"VISIT"))
            {
                string temp = s3.top();
                s1.push(temp);
                s3.pop();
                cin >> url;
                cout << url << "\n";
                s3.push(url);
                while(!s2.empty())
                {
                    s2.pop();
                }
            }
            cin >> command;
        }
        while(!s1.empty())
            s1.pop();
        while(!s2.empty())
            s2.pop();
        while(s3.empty())
            s3.pop();
        s3.push("http://www.lightoj.com/");
        i++;
        T--;
    }
    return 0;
}
