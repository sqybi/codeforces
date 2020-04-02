#include <bits/stdc++.h>

using namespace std;

/***** Tools start *****/

// LEVEL:
//   0 - DEBUG;
//   1 - INFO;
//   2 - WARN;
//   3 - ERROR;
//   4 - Nothing.
static const int LOG_LEVEL = 0;
struct NullBuffer : public streambuf {
  int overflow(int c) { return c; }
} n_b;
ostream CNULL(&n_b);
#define DEBUG (LOG_LEVEL==0?cerr:CNULL)<<"[DEBUG]["<<__FUNCTION__<<"][L:"<<__LINE__<<"] "
#define INFO (LOG_LEVEL<=1?cerr:CNULL)<<"[INFO]["<<__FUNCTION__<<"][L:"<<__LINE__<<"] "
#define WARN (LOG_LEVEL<=2?cerr:CNULL)<<"[WARN]["<<__FUNCTION__<<"][L:"<<__LINE__<<"] "
#define ERROR (LOG_LEVEL<=3?cerr:CNULL)<<"[ERROR]["<<__FUNCTION__<<"][L:"<<__LINE__<<"] "

#define pb push_back
#define mp make_pair
#define fi first
#define se second

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pff = pair<float, float>;
using pdd = pair<double, double>;

template<typename T> T abs (T x) { return x < 0 ? -x : x; }
template<typename T> T sgn (T x) { return x < 0 ? -1 : (x > 0 ? 1 : 0); }
template<typename T> T sqr (T x) { return x * x; }
template<typename T> T gcd (T a, T b) { return a ? gcd (b % a, a) : b; }
int qpow(int b, int e, int m) {int a=1;for(;e;e>>=1,b=(ll)b*b%m)if(e&1)a=(ll)a*b%m;return a;}
mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
double rnd1() { return ((double)rnd() - rnd.min()) / (rnd.max() - rnd.min()); }

/***** Tools end *****/

int total_test_cases;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  // Code here
  int n;
  cin >> n;
  n = 15 - n;
  unsigned int a4 = n % 2; n /= 2;
  unsigned int a3 = n % 2; n /= 2;
  unsigned int a2 = n % 2; n /= 2;
  unsigned int a1 = n % 2; n /= 2;
  unsigned int b4 = a3 | a4;
  unsigned int b3 = a3;
  unsigned int b2 = a1 | a2;
  unsigned int b1 = a1;
  cout << b4 + b3 * 2 + b2 * 4 + b1 * 8 << endl;

  return 0;
}
