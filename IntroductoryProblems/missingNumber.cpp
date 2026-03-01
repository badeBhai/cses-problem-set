#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <=n ; i++){
        ans ^= i;
    }
    int x;
    for(int i = 1; i < n; i++){
        cin >> x;
        ans ^= x;
    }
    cout << ans;
    return 0;
}