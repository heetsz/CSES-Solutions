#include <bits/stdc++.h>  
using namespace std;
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    if(n==3 || n==2){
        cout << "NO SOLUTION";
        return ;
    }
    ll a = 2;
    for(int i=0;i<n/2;i++){
        cout<<a<<" ";
        a+=2;
    }
    a = 1;
    for(int i=0;i<(n+1)/2;i++){
        cout<<a<<" ";
        a+=2;
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
 
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}

// https://cses.fi/paste/ad7903a247c54ffbce10db/