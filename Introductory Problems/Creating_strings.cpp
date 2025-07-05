#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    vector<string> ans;
    sort(s.begin(), s.end());
    ans.push_back(s);
    while(next_permutation(s.begin(), s.end())) ans.push_back(s);
    cout << ans.size() << endl;
    for(string x:ans) cout << x << endl;
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
    while (t--) {
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
