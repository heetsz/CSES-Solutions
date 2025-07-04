#include <bits/stdc++.h>  
using namespace std;
 
#define ll long long
 
void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    for(int i=0;i<n-1;i++){
        ll x;
        cin >> x;
        sum += x;
    }
    cout << n*(n+1)/2 - sum;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    clock_t z = clock();
 
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
 
