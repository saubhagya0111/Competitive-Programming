//created by Saubhagya Chopra CF:@6969 CC:@saubhagya0111 LC:@saubhagya0111
#include <bits/stdc++.h>
using namespace std;
//Macros
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define incr_loop(a, n) for (i = a; i < n; ++i)
#define decr_loop(a, b) for (i = a; i > b; --i)
#define nested_incr_loop(a, b) for (ll j = a; j < b; ++j)
#define nested_decr_loop(a, b) for (ll j = b; j > a; --j)
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sort_all(v) sort(all(v));
#define space cout << ' ';
#define line cout << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef set<ll> sll;
typedef set<string> sst;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
//Constants
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//Debugger
void _print(ll a) { cerr << a << endl; }
void _print(string a) { cerr << a << endl; }
void _print(bool a) { cerr << a << endl; }
void _print(char a) { cerr << a << endl; }
void _print(auto a) { cerr << a << endl; }
template <class T>
void _print(vector<T> v1)
{
    cerr << "[";
    for (T i : v1)
    {
        _print(i);
        cerr << " ";
        cerr << "]" << endl;
    }
}
template <class T>
void _print(set<T> s1)
{
    cerr << "[";
    for (T i : s1)
    {
        _print(i);
        cerr << " ";
        cerr << "]" << endl;
    }
}
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << "="; \
    _print(x);         \
    cout << endl;
#else
#define debug(x)
#endif
/************************************/
bool check(vll v, ll target)
{
    ll key = target - 1;
    auto i1 = find(all(v), target + 1);
    if (i1 == v.end())
    {
        return true;
    }
    return false;
}
void solution()
{
    ll i, j, n, m, n1 = 0, element, a, b, flag = 0;
    in(n);
    vll v;
    ll ans = 0;
    incr_loop(0, n)
    {
        in(element);
        v.pb(element);
    }
    sort_all(v);
    if (v[0] > 1)
    {
        ans = 1;
    }
    else
    {
        incr_loop(0, n)
        {
            if (check(v, v[i]) == true)
            {
                ans = v[i] + 1;
                break;
            }
        }
    }
    cout << ans << endl;
}
/************************************/
int main()
{
    fio;
    ll tt = 1;
    // in(tt);
    while (tt--)
    {
        solution();
    }
    return 0;
}
