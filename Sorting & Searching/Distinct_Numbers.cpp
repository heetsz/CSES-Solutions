#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    set<int> hs;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        hs.insert(a[i]);
    }
    cout << hs.size();

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
