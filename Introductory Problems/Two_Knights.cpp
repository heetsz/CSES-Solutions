#include <bits/stdc++.h>  
using namespace std;
 
long long power(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}
 
void solve() {
    long long n;
    cin >> n;
    for(long long i=1;i<=n;i++){
        cout << (power(i, 4) - power(i, 2))/2 - 4 *(i-1)*(i-2) << endl;
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
