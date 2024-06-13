 
#include <iostream>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
//#include <bits/stdc++.h>

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
#define endl "\n"
 
// debugging statements
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
using namespace std;
 
template<class T> void _print(T t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 


void fn(int s,int e){
    if(s==e+1) return;
    fn(s+1,e);
    cout<<s<<" ";
}







int main(int argc, char const *argv[])
{
 
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
 
ios::sync_with_stdio(0);
fn(1,10);

 
return 0;
}
