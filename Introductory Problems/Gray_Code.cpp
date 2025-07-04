#include <bits/stdc++.h>  
using namespace std;
 
#define ll long long
#define pb push_back
static ll mod = 1e9 + 7;
long long power(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;  
    while (b > 0) {
        if (b & 1) res = (res * a) % mod; 
        a = (a * a) % mod;  
        b >>= 1;
    }
    return res;
}
 
 
void solve() {
    int n;
    cin >> n;
    
    int total = 1 << n; 
    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1); // Main logic
        string s = bitset<32>(gray).to_string();  
        cout << s.substr(32 - n) << "\n";
    }
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
