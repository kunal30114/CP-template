
#include <iostream>
#include <iomanip> 
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map> 
#include <random> 
#include <numeric>  
#include <numeric>  
#include <algorithm>  
#include <cmath>  

// #include <bits/stdc++.h>
using namespace std;
 
#define in(n) int n; cin>>n;
#define inll(n) ll n; cin>>n;
#define in2(x, y) int x, y; cin>>x>>y;
#define inll2(x, y) ll x, y; cin>>x>>y;
#define ins(s) string s; cin>>s;
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ll long long
#define ld long double
#define pb push_back
#define pbb pop_back()
#define endl '\n'
 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
//****************************************DEBUG********************************************************************/
 
template<class T> void _print(T t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
/************************************************************************************************************/

void solve(){
 
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    #endif
    in(t);
    while (t--) {
        solve();
    }
    //  solve();
    return 0;
}
