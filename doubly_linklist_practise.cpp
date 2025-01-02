#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l1;
    list<int> l2;

    int x;
    while (cin >> x && x != -1)
    {
        l1.push_back(x);
    }

    while (cin >> x && x != -1)
    {
        l2.push_back(x);
    }


    bool flag = true;

    int i=0;
    while (next(l1.begin(),i)!=l1.end() && next(l2.begin(),i)!=l2.end())
    {

        if(*next(l1.begin(),i)!=*next(l2.begin(),i)){
            flag = false;
            break;
        }
        i++;
    }

    if(next(l1.begin(),i)!=l1.end()){
        flag = false;
    }

    if(next(l2.begin(),i)!=l2.end()){
        flag = false;
    }


    cout<<(flag ? "YES\n": "NO\n")<<endl;
    

    return 0;
}