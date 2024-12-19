#include <bits/stdc++.h>
using namespace std;

int solution(string ch, int n)
{
    int i, j;
    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (ch[i] == ch[j])
        {
            break;
        }
    }
    return j-i+1;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string ch;
        cin.ignore();
        getline(cin, ch);

        cout << solution(ch, n) << endl;
    }

    return 0;
}