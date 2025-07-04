#include <bits/stdc++.h>  
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
 
    long long ans = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i - 1]) {
            ans += abs(v[i - 1] - v[i]);
            v[i] += abs(v[i - 1] - v[i]);
        }
    }
 
    cout << ans;
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
