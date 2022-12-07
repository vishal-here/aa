#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define display(i, n, a) \
    For(i, n) { cout << a[i] << " "; }

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int mod = 1'000'000'007;
const int N = 3e5;

int solve(vector<int> &vec, int k)
{
    int n = vec.size();
    int best = 0;
    int count = 1;
    for (int i = 0; i < n - k - 1; i++)
    {
        if (vec[i] == vec[i + 1])
            count++;
        else{
            count = 1;
        }
        best = max(best, count);
    }
    int result = best + k;
    return result;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

   //  vi vec = {1, 1, 3, 3, 3, 4, 5, 5, 5, 5};
     vi vec  = {2,3,3,3,3,3,3} ;
   // vi vec  = {1,1,1,1} ;
    int k = 2;
    cout << solve(vec, k);

    return 0;
}