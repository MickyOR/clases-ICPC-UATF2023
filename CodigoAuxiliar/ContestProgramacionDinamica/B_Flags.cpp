/*
               __
              / _)
     _.----._/ /
    /         /
 __/ (  | (  |
/__.-'|_|--|_|
*/
#include <bits/stdc++.h>
 //#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <bits/extc++.h>
typedef long long ll;
#define int long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(a) (a).begin(), (a).end()
#define clr(a, h) memset(a, (h), sizeof(a))
#define f first
#define s second
#define fore(i, b, e) for (int i = (int) b, o_o = e; i < (int) o_o; ++i)
#define forr(i, b, e) for (int i = (int) b, o_o = e; i < (int) o_o; ++i)
#define deb(x) cerr << "# " << (#x) << " = " << (x) << endl;
#define sz(x) (int) x.size()
#define endl '\n'
// int in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}

using namespace std;
#define cin std::cin
#define cout std::cout
#define cerr std::cerr
//using namespace __gnu_pbds;
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")

typedef pair < int, int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
typedef vector < ll > vll;
typedef vector < vi > vvi;
typedef vector < vii > vvii;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//find_by_order kth largest  order_of_key <
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int INF = numeric_limits < int > ::max() / 4;
const double PI = acos(-1);

const int maxN = 50;

int dp[maxN][3];

int f(int rayas, int ultima) {
  if (rayas == 0) return 1;
  if (rayas < 0) return 0;
  int& ans = dp[rayas][ultima];
  if (ans != -1) return ans;
  ans = 0;
  // raya blanca
  if (ultima != 0) ans += f(rayas-1, 0);
  // raya roja
  if (ultima != 1) ans += f(rayas-1, 1);
  // raya azul
  if (ultima == 0) ans += f(rayas-2, 1); // blanca azul roja
  if (ultima == 1) ans += f(rayas-2, 0); // roja azul blanca
  return ans;
}

signed main() {
  std::ios::sync_with_stdio(false); cin.tie(0);
  memset(dp, -1, sizeof(dp));
  int n;
  cin >> n;
  cout << f(n-1, 0) + f(n-1, 1) << endl;
  return 0;
}
// Sunrise, Parabellum