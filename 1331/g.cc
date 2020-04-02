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
  double a = 1.29889485833701E-08;
  double b = -0.696100560287618;
  double c = 0.606239436579983;
  double d = 5.68918611079212;
  double e = 0.310490506571197;
  double f = 0.0775702899135402;
  double g = 0.0115464265803753;
  double h = 0.00101778432072808;
  double i = 4.89988238278245E-05;
  double j = 9.91393414324367E-07;

  cout<<setiosflags(ios::fixed)<<setprecision(2);
  vector<int> aa;
  while (cin >> n) {
    aa.pb(n);
  }
  cout << setiosflags(ios::fixed);
  for (auto x = aa.rbegin(); x != aa.rend(); x++) {
    n = *x;
    double res = a + b * n + c * n * n + d * n * n * n + e * n * n * n * n + f * n * n * n * n * n +
                 g * n * n * n * n * n * n + h * n * n * n * n * n * n * n + i * n * n * n * n * n * n * n * n +
                 j * n * n * n * n * n * n * n * n * n;
    if (n >= 2) {
      cout << "f(" << setprecision(0) << n << ") = MAGNA NIMIS!" << endl;
    } else {
      cout << "f(" << setprecision(0) << n << ") = " << setprecision(2) << res << endl;
    }
  }

  return 0;
}
