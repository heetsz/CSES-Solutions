# Competitive Programming Setup in VS Code

## 1. Required Extensions
- **C/C++ Extension Pack** by Microsoft (for IntelliSense, debugging)
- (Optional) **Code Runner**, **Competitive Programming Helper**

## 2. C++ Templates

### Template 1: Customizable
```cpp
#include <bits/stdc++.h>
using namespace std;

void solve(){
    
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
    cin >> t;
    while (t--) {
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
```
### Template 2: CP Customized
```cpp
#include <bits/stdc++.h>
using namespace std;
 
typedef int64_t ll;
typedef unsigned long long ull;
typedef long double lld;

#define F              first
#define S              second
#define pb             push_back
#define usi            unordered_set<int>
#define si             set <int>
#define vi             vector <int>
#define vll            vector<ll>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define umii           unordered_map<int,int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define size(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define endl            "\n"
#define PI                3.141592653589793238462
#define set_bits         __builtin_popcountll
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl

const ll MOD = 1e9+7;
const ll INF = 1e18;

 
#ifndef maxvoyager
#define debug(x) cerr << #x<<":"; _print(x); cerr << endl;
#endif


void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------------------------*/


// Loops
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define FORD(i, a, b) for(int i = (a); i >= (b); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)

/*---------------------------------------------------------------------------------------------------------------------------------------------*/
// Common utility functions
ll ceil_div(ll a,ll b){return (a + b - 1)/b;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 10; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return mod_add(arr[0], 0, b);} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll modInverse(ll a, ll m) {ll res = 1;ll exponent = m - 2; while (exponent) {if (exponent & 1) {res = (res * a) % m;}a = (a * a) % m;exponent >>= 1;}return res;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
bool isSorted(vector<ll>& a, int start, int end) {    for (int i = start; i < end; i++) {if (a[i] > a[i + 1]) return false;}return true;}
ll power(ll a, ll b) { ll r = 1; while (b) { if (b & 1) r *= a; a *= a; b >>= 1; } return r; }
ll modPower(ll a, ll b, ll m) { ll r = 1; a %= m; while (b) { if (b & 1) r = (r * a) % m; a = (a * a) % m; b >>= 1; } return r; }

/*---------------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    
}


int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif

    clock_t z = clock();

    int t = 1;
//     cin >> t;
    while (t--) {
          solve();
    };

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}
```

## 3. Input And Output Files

- Create a file named `input.txt` in your project folder and put your sample input there.
- Create an empty file named `output.txt` where your program will write the output.
- Both templates include file redirection commands inside the `#ifndef ONLINE_JUDGE` block:

## 4. Generate Snippets

- You can create snippets of your customized cpp templates from snippet generator (https://snippet-generator.app/?description=&tabtrigger=&snippet=&mode=vscode)
- Paste your template code in input ans copy the output which must be pasted in snippets tap of vscode, give a unique name to the particular snippet and you are good to go!!
