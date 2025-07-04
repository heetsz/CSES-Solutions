# Competitive Programming Setup in VS Code

## 1. Required Extensions
- **C/C++ Extension Pack** by Microsoft (for IntelliSense, debugging)
- (Optional) **Code Runner**, **Competitive Programming Helper**

## 2. C++ Templates

### Template 1: Full-featured (with defines & debug)
```cpp
#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define endl "\n"
const ll MOD = 1e9+7;

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

void solve() {
    // code here
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t=1; //cin >> t;
    while(t--) solve();
    return 0;
}
```
## 3. Input And Output Files

- Create a file named `input.txt` in your project folder and put your sample input there.
- Create an empty file named `output.txt` where your program will write the output.
- Both templates include file redirection commands inside the `#ifndef ONLINE_JUDGE` block:

