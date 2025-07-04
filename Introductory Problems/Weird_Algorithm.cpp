#include <bits/stdc++.h>  
using namespace std;
 
#define ll long long
 
void solve() {
    ll n;
    cin >> n;
 
    while(n != 1) {
        cout << n << " ";
        if ((n & 1) == 0)  
            n /= 2;
        else
            n = n * 3 + 1;
 
    }
    cout << n << " ";  
 
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
