#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int sSize = s.size();

//     int left = 0, right = 1;
//     int maxLen = 1;

//     while (right < sSize)
//     {
//         if (s[right] == s[right - 1])
//         {
//             maxLen = max(right - left + 1, maxLen);
//             right++;
//         }
//         else
//         {
//             left = right;
//             right++;
//         }
//     }

//     cout << maxLen;

//     return 0;
// }

int main()
{
    string s;
    cin >> s;
    int sSize = s.size();

    int right = 1;
    int currLen = 1;
    int maxLen = 1;

    while (right < sSize)
    {
        if (s[right] == s[right - 1])
        {
            currLen++;
            
        }
        else
        {
            currLen = 1;
        }
        right++;
        maxLen = max(maxLen,currLen);
    }

    cout << maxLen;

    return 0;
}