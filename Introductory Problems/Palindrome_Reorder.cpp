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
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int arr[26] = {0};
    for(char ch : s){
        arr[ch-'a']++;
    }
    char odd = '-';
    for(int i=0;i<26;i++){
        if(arr[i]==0) continue;
        if(arr[i]%2!=0 && odd != '-') {
            cout << "NO SOLUTION" ;
            return ;
        }
        if(arr[i]%2!=0) odd = i+'a'; 
    }
    string pal = "";
    for(int i=0;i<26;i++){
        string x(arr[i]/2, i+'a');
        pal+=x;
    }
    string x = pal;
    reverse(x.begin(), x.end());
    pal += x;
    if(odd != '-'){
        string o(1, odd);
        pal.insert(pal.length()/2, o);    
    }
    transform(pal.begin(), pal.end(), pal.begin(), ::toupper);
    cout << pal;
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
