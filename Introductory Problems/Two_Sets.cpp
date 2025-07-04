#include <bits/stdc++.h>  
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
 
    if (sum % 2 != 0) {
        cout << "NO\n";
        return;
    }
 
    cout << "YES\n";
    vector<int> v1, v2;
    unordered_set<int> used;
    long long target = sum / 2;
 
    for (long long i = n; i >= 1; i--) {
        if (i <= target) {
            v1.push_back(i);
            used.insert(i);
            target -= i;
        }
    }
 
    for (int i = 1; i <= n; i++) {
        if (!used.count(i)) {
            v2.push_back(i);
        }
    }
 
    cout << v1.size() << '\n';
    for (int x : v1) cout << x << ' ';
    cout << '\n';
 
    cout << v2.size() << '\n';
    for (int x : v2) cout << x << ' ';
    cout << '\n';
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
