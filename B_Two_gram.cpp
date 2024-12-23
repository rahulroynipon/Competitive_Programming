#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string str;
    cin.ignore();
    getline(cin, str);

    unordered_map<string, int> myCount;

    string sub;
    for (int i = 0; i < n - 1; i++)
    {
        sub = str.substr(i, 2);
        myCount[sub]++;
    }

    string ans;
    int maxE = INT_MIN;
    for (auto i: myCount){
        if(i.second>maxE){
            maxE = i.second;
            ans = i.first;
        }
    }

    cout<<ans<<endl;

    return 0;
}