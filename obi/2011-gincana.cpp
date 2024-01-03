#include <bits/stdc++.h>

using namespace std;
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
using namespace std;
template <typename T>
using matrix = vector<vector<T>>;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll INFL = (1LL<<62)-1;
const int INF = (1<<30)-1;
const double EPS = 1e-7;
const int MOD = 1e9 + 7;
const int MAXN = 1000;
matrix<bool>students(MAXN, vector<bool>(MAXN, false));
vector<bool> visited(MAXN, false);
vector<int> fathers(MAXN, 0);
int ans = 0;
void solve();
void bfs(int k, int n);
void insertEdge(int x, int y);
void joinFather(int x, int y);

int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	solve();
	cout << ans << "\n";
	
}

void solve(){
int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int x, y; cin >> x >> y;
		insertEdge(x, y);
	}
	bfs(1, n);
	
}

void insertEdge(int x, int y){
	students[x][y] = true;
	students[y][x] = true;
}

void bfs(int start, int n) {
    std::queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
	       if (!fathers[current]) {
            ans++;
            joinFather(current, current);
        }

        for (int u = 1; u <= n; ++u) {
            if (students[current][u] && !visited[u]) {
                joinFather(u, current);
                visited[u] = true;
                q.push(u);
            }
        }
    }
		if (start + 1 <= n) {
    bfs(start + 1, n);
}

}

void joinFather(int x, int y){
	fathers[x] = y;
}
