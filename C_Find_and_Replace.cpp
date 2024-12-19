#include <bits/stdc++.h>
using namespace std;

bool solution(string ch)
{
    unordered_map<char, set<int>> charPosition;
    for (int i = 0; i < ch.size(); i++)
    {
        charPosition[ch[i]].insert(i % 2);
        if (charPosition[ch[i]].size() == 2)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string ch;
        cin.ignore();
        getline(cin,ch);

        cout<<(solution(ch) ? "YES": "NO")<<endl;
    }
    

    return 0;
}