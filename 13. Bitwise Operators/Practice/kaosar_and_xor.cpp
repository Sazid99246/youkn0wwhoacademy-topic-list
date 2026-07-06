#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int power(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1)
            ans = 1LL * ans * a % MOD;
        a = 1LL * a * a % MOD;
        b >>= 1;
    }
    return ans;
}

void solve() {
    ll n; cin >> n;

    if (n == 1) {
        cout << "0\n";
        return;
    }

    int msb_pos = __lg(n);  // MSB position of n (0-indexed from right)

    // Special case: n == 2
    if (n == 2) {
        cout << "1\n";
        return;
    }

    // n is a power of 2 — value n itself is unreachable as XOR
    if (__builtin_popcountll(n) == 1) {
        cout << (power(2, msb_pos + 1) - 2 + MOD) % MOD << '\n';
        return;
    }

    // n is not a power of 2 — all values 1 to 2^(msb_pos+1)-1 are reachable
    cout << (power(2, msb_pos + 1) - 1 + MOD) % MOD << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}
