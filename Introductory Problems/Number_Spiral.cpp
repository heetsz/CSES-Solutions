#include <bits/stdc++.h>  
using namespace std;
 
void solve() {
    int x, y;
    cin>>y>>x;
    int m = max(x, y);
    long long t = (long long)m*(m-1) + 1;
    if(y > x){
        if(y&1){
            cout << t-(y-x)<<endl;
        }else{
            cout << t+(y-x)<<endl;
        }
    }
    else{
        if(x&1){
            cout << t+(x-y)<<endl;
        }else{
            cout << t-(x-y)<<endl;
        } 
    }
    
    return ;
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
    cin >> t;
    while (t--) {
        solve();
    }
 
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
