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
const int MAXN = 110;
matrix<bool> grid(MAXN, vector<bool>(MAXN, false));
int ans = 0;
int r, c;
void solve();
void read();
void floodFill(int i, int j);
int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	solve();
}

void solve(){
while (cin >> r >> c && r != 0 && c != 0) {
        grid.resize(r, vector<bool>(c, false));
        
					
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                char s;
                cin >> s;
                if (s == '*')  grid[i][j] = false;
                if (s == '@') grid[i][j] = true;
								
            }
        }
				 ans = 0;
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (grid[i][j]) {
                    ans++; 
                    floodFill(i, j);
                }
            }
        }
        cout << ans << "\n";
    }
	
}



void floodFill(int i, int j) {
    if (i < 0 || i >= r || j < 0 || j >= c || !grid[i][j]) {
        return;
    }

    grid[i][j] = false; 

    floodFill(i + 1, j);
    floodFill(i - 1, j);
    floodFill(i, j + 1);
    floodFill(i, j - 1);
    floodFill(i + 1, j + 1);
    floodFill(i - 1, j - 1);
    floodFill(i + 1, j - 1);
    floodFill(i - 1, j + 1);
}


