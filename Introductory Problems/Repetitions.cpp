#include <bits/stdc++.h>  
using namespace std;
 
#define ll long long
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = INT_MIN;
    int c = 1;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            c++;
        }else{
            c=1;
        }
        ans = max(ans, c);
    }
    if(ans == INT_MIN) ans = 1;
    if(s.length() == 0) ans = 0;
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
