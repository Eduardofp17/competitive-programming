#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

unordered_map<ll, ll> a; 

void solve();

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    solve();
}

void solve() {
    int Q;
    cin >> Q;

    while (Q--) {
        int op;
        cin >> op;

        if (op == 0) {
            ll k, v;
            cin >> k >> v;
            a[k] = v; 
        } else {
            ll k;
            cin >> k;
            cout << a[k] << "\n";
        }
    }
}
