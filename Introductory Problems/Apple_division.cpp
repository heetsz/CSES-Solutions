#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long total = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    long long min_diff = LLONG_MAX;

    // Go through all subsets
    for (int mask = 0; mask < (1 << n); ++mask) {
        long long subset_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset_sum += arr[i];
            }
        }
        long long other_sum = total - subset_sum;
        min_diff = min(min_diff, abs(subset_sum - other_sum));
    }

    cout << min_diff << '\n';
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
