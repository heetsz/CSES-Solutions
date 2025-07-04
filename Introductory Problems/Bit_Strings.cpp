#include <bits/stdc++.h>  
using namespace std;
 
long long power(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;  
 
    while (b > 0) {
        if (b & 1) res = (res * a) % mod; 
        a = (a * a) % mod;  
        b >>= 1;
    }
 
    return res;
}
 
static long long mod = 1e9 + 7;
 
void solve() {
    int n;
    cin>>n;
    cout << power(2, n, mod);
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
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
