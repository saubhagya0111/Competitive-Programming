#include <bits/stdc++.h>
using namespace std;
//created by Saubhagya Chopra
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define incr_loop(a, n) for (i = a; i < n; ++i)
#define decr_loop(a, b) for (i = a; i > b; --i)
#define nested_incr_loop(a, b) for (ll j = a; j < b; ++j)
#define nested_decr_loop(a, b) for (ll j = b; j > a; --j)
typedef long long ll;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define sort_all(v) sort(all(v));
#define space cout << ' ';
#define all(x) x.begin(), x.end()
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
typedef vector<ll> vi;
typedef vector<char> vc;
typedef set<ll> si;
typedef set<char> scr;
typedef set<string> sst;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll, ll> mii;
typedef pair<ll, ll> pii;
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
/**************Debugger*************/
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
void solution()
{
    ll i, j, n, m, n1 = 0, element, a, b, flag = 0;
    int ans = 0;
    in(n);
    vector<pair<int, int>> v;
    incr_loop(1, n + 1)
    {
        ans = log2(i);
        v.pb({i, ans});
    }
    int freq = INT_MIN, ans1 = v[0].first;
    for (auto i1 : v)
    {
        if (i1.second > freq)
        {
            ans1 = i1.first;
            freq = i1.second;
        }
    }
    out(ans1);
    line;
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
// #include <bits/stdc++.h>
// using namespace std;
// //created by Saubhagya Chopra
// #define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define endl "\n"
// #define incr_loop(a, n) for (i = a; i < n; ++i)
// #define decr_loop(a, b) for (i = a; i > b; --i)
// #define nested_incr_loop(a, b) for (ll j = a; j < b; ++j)
// #define nested_decr_loop(a, b) for (ll j = b; j > a; --j)
// typedef long long ll;
// #define pb push_back
// #define ppb pop_back
// #define MP make_pair
// #define sort_all(v) sort(all(v));
// #define space cout << ' ';
// #define all(x) x.begin(), x.end()
// #define in(x) cin >> x;
// #define in2(x, y) cin >> x >> y;
// #define in3(x, y, z) cin >> x >> y >> z;
// #define out(x) cout << x;
// #define out2(x, y) cout << x << ' ' << y;
// #define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
// #define line cout << endl;
// typedef vector<ll> vi;
// typedef vector<char> vc;
// typedef set<ll> si;
// typedef set<char> scr;
// typedef set<string> sst;
// typedef vector<ll> vll;
// typedef vector<string> vs;
// typedef map<ll, ll> mii;
// typedef pair<ll, ll> pii;
// const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
// /**************Debugger*************/
// void _print(ll a) { cerr << a << endl; }
// void _print(string a) { cerr << a << endl; }
// void _print(bool a) { cerr << a << endl; }
// void _print(char a) { cerr << a << endl; }
// void _print(auto a) { cerr << a << endl; }
// template <class T>
// void _print(vector<T> v1)
// {
//     cerr << "[";
//     for (T i : v1)
//     {
//         _print(i);
//         cerr << " ";
//         cerr << "]" << endl;
//     }
// }
// template <class T>
// void _print(set<T> s1)
// {
//     cerr << "[";
//     for (T i : s1)
//     {
//         _print(i);
//         cerr << " ";
//         cerr << "]" << endl;
//     }
// }
// #ifndef ONLINE_JUDGE
// #define debug(x)       \
//     cerr << #x << "="; \
//     _print(x);         \
//     cout << endl;
// #else
// #define debug(x)
// #endif
// /************************************/
// int fun1(int n)
// {
//     int c;
//     int temp = n;
//     while (temp % 2 == 0)
//     {
//         temp /= 2;
//         c++;
//     }
//     return c;
// }
// void solution()
// {
//     ll i, j, n, m, n1 = 0, element, a, b, flag = 0;
//     in(n);
//     vector<pair<int, int>> v;
//     for (int i = 1; i <= n; i++)
//     {
//         v.pb({i, fun1(i)});
//     }
//     int ans = 1, freq = INT_MIN;
//     for (auto i1 : v)
//     {
//         if (i1.second > freq)
//         {
//             ans = i1.first;
//             freq = i1.second;
//         }
//     }
//     out(ans);
//     line;
// }
// /************************************/
// int main()
// {
//     fio;
//     ll tt = 1;
//     // in(tt);
//     while (tt--)
//     {
//         solution();
//     }
//     return 0;
// }
