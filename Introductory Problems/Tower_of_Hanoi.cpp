#include <bits/stdc++.h>
using namespace std;
 
// func (src, augmented, dest, tiles)
 
void solve(int a, int b, int c, int n) {
	if (n == 0)	return;
    
	solve(a, c, b, n-1);
	cout<<a<<' '<<c<<endl;
	solve(b, a, c, n-1);
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
        int n; cin>>n;
        cout<<(1<<n)-1<<endl;
        solve(1,2,3,n);
    }
 
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
