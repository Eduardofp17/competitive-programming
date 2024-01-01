#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
template <typename T>
using matrix = vector<vector<T>>;


int32_t main(){
  cin.tie(nullptr)->sync_with_stdio(false);
	int n;

	while (cin >> n && n != 0) {
				int work;
				ll totalWork = 0;
				ll currWork =0;
        for (int i = 0; i < n; i++) {
            cin >> work;
						currWork += work;
						totalWork += abs(currWork);
        }
        cout << totalWork << endl;
	}


	return 0;
}

