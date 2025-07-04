Competitive Programming Setup in VS Code
This guide will help you set up an efficient Competitive Programming (CP) environment in Visual Studio Code (VS Code) using C++.

1. Recommended VS Code Extensions
C/C++ Extension Pack by Microsoft
This extension pack includes the C++ IntelliSense, debugging, and code browsing support that you need.
Install it from:
Extensions → Search for C/C++ Extension Pack → Install

(Optional) Other useful extensions:

Code Runner (for quick code execution)

Competitive Programming Helper (for faster workflow)

Better Comments (for clean code annotations)

2. C++ Templates for Competitive Programming
Template 1 — Full-featured with defines and debug utilities
cpp
Copy
Edit
#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef unsigned long long ull;
typedef long double lld;

#define F              first
#define S              second
#define pb             push_back
#define usi            unordered_set<int>
#define si             set<int>
#define vi             vector<int>
#define vll            vector<ll>
#define pii            pair<int, int>
#define vpi            vector<pii>
#define vpp            vector<pair<int, pii>>
#define mii            map<int, int>
#define umii           unordered_map<int, int>
#define mpi            map<pii, int>
#define spi            set<pii>
#define endl           "\n"
#define size(x)        ((int) x.size())
#define all(p)         p.begin(), p.end()
#define que_max        priority_queue<int>
#define que_min        priority_queue<int, vi, greater<int>>
#define PI             3.141592653589793238462
#define set_bits       __builtin_popcountll
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl

const ll MOD = 1e9+7;
const ll INF = 1e18;

#ifndef normal_coder31
#define debug(x) cerr << #x<<":"; _print(x); cerr << endl;
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);

template <class T, class V> void _print(pair<T, V> p) {
    cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";
}
template <class T> void _print(vector<T> v) {
    cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";
}
template <class T> void _print(set<T> v) {
    cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";
}
template <class T> void _print(multiset<T> v) {
    cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
    cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";
}

/* Loops */
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define FORD(i, a, b) for(int i = (a); i >= (b); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)

/* Utility functions */
ll ceil_div(ll a,ll b){return (a + b - 1)/b;}
ll gcd(ll a, ll b) {if (b > a) return gcd(b, a); if (b == 0) return a; return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {
    ll res = 1; 
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod; b >>= 1;
    }
    return res;
}

/* Add more functions as needed */

void solve() {
    // Write your solution here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
    #endif

    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while(t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " sec\n";

    return 0;
}
Template 2 — Simple plain template for quick customization
cpp
Copy
Edit
#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Your code here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
    #endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while(t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " sec\n";

    return 0;
}
3. Creating VS Code Snippets
To quickly insert these templates in your code, create VS Code snippets:

Visit https://snippet-generator.app/.

Paste the desired template code into the Snippet box.

Provide a meaningful Tab Trigger, e.g., cpfull for Template 1, cpsimple for Template 2.

Add a Description like “Competitive Programming full template”.

Select mode as VS Code.

Generate the snippet JSON.

Copy the snippet JSON into your VS Code user snippets file:

Open VS Code

Press Ctrl+Shift+P → type Preferences: Configure User Snippets → select cpp.json

Paste your snippet JSON and save.

Now, you can type your tab trigger (like cpfull or cpsimple) in a .cpp file and press Tab to insert the template quickly.

4. Using Input/Output Files (input.txt and output.txt)
Create an input.txt file in your project folder where you can paste sample test input.

Create an output.txt file which your program will write the output into.

Your code (both templates) are set to redirect standard input/output to these files only when not running on an online judge (using the #ifndef ONLINE_JUDGE guard).

This helps in local testing and debugging.

Make sure to remove or comment out file redirection lines before submitting to online judges.

5. General Tips for Competitive Programming Workflow in VS Code
Keyboard Shortcuts: Learn shortcuts for running builds and switching between terminals.

Build and Run: Configure tasks to compile and run your C++ code with a single shortcut.
Example tasks.json for compiling with g++:

json
Copy
Edit
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile & Run C++",
      "type": "shell",
      "command": "g++",
      "args": [
        "-std=c++17",
        "-Wall",
        "-O2",
        "${file}",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}.exe"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"],
      "detail": "Compile C++ file"
    }
  ]
}
You can create a corresponding launch configuration to run the compiled program.

Use Fast IO: Use ios_base::sync_with_stdio(false); cin.tie(nullptr); for faster input/output.

Debugging: Use VS Code debugger with proper launch configuration.

Version Control: Use Git to manage your solutions and templates.

Organize Problems: Maintain separate folders for each contest or problem set.

Practice Snippets: Create snippets for common code blocks like loops, binary search, graph traversals.

