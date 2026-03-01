#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll prev, curr;
    ll moves = 0;
    int n;
    cin >> n;
    cin >> prev;
    for(int i = 1; i < n; i++){
        cin >> curr;

        if(curr < prev){
            moves += prev - curr;
        }else{
            prev = curr;
        }    
    } 
    cout << moves;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){
//     ll n;
//     cin >> n;

//     ll moves = 0;
//     ll arr[n];

//     cin >> arr[0];

//     for(ll i = 1; i < n; i++){
//         cin >> arr[i];

//         if(arr[i] < arr[i-1]){
//             moves += arr[i-1] - arr[i];
//             arr[i] = arr[i-1];
//         }
//     }

//     cout << moves;
// }