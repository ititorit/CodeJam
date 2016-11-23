#include <bits/stdc++.h>
using namespace std;
#define _for(i,a,b) for(int i = a; i <= b; i++)
#define _ford(i,a,b) for(int i = a; i >= b; i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()

#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
#define DEBUG(x) { cout << "--> " << #x << " = " << x << '\n'; }
#define sqr(x) ((x)*(x))
#define reset(a,val) memset(a, val, sizeof(a))

#define INF         1011111111
#define EPS         (double)1e-8
#define mod         1000000007
#define PI          3.14159265358979

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // solution starts....
    FILE *fin  = fopen ("A-small-practice.in", "r");
    FILE *fout = fopen ("output.out", "w");
    int T;
    fscanf(fin, "%d", &T);
    _for(t,1,T) {
        int n;
        fscanf(fin, "%d", &n);
        int a[n+1], b[n+1];
        _for(i,1,n) {
            fscanf(fin, "%d", &a[i]);
        }
        _for(i,1,n) {
            fscanf(fin, "%d", &b[i]);
        }
        sort(a+1,a+1+n, greater<int>());
        sort(b+1,b+1+n);
        ll ans = 0;
        _for(i,1,n) {
            ans += a[i]*b[i];
        }
        fprintf(fout, "Case %d: %lld\n", t, ans);
    }
    // solution ends....
    return 0;
}
