//                                                      ॐ
#include<bits/stdc++.h>
#include<chrono>

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

using   namespace std::chrono;
using   namespace std;

#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using   namespace __gnu_pbds;

// Alias:- 

typedef long double ld;
typedef long long ll;
struct  var{ll x,y;};

// Good Tools:-

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define Tgreen auto start = high_resolution_clock::now();
#define Tred auto stop = high_resolution_clock::now();
#define Texe auto duration = duration_cast<milliseconds>(stop - start);\
        cerr<<"Time exe: "<<duration.count()<<"ms"<<endl;
 
#define precision(x, y) fixed<<setprecision(y)<<x
#define gcd             __gcd
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define pr              pair<int,int>
#define vi              vector<int>
#define vll             vector<ll>
#define vvi             vector<vi>
#define vpr             vector<pr> 
#define vb              vector<bool> 
#define vv(v,a,b,c)     vector<vi> v(a,vector<int>(b,c))
#define vvpr            vector<vpr>
#define pb              push_back
#define sortv(v)        sort(v.begin(),v.end())
#define sorta(a)        sort(a,sizeof(a))
#define fl(t,n)         for(ll i=t;i<n;i++)
#define meme(x,n)       memset(x,n,sizeof(x))
#define all(x)          x.begin(),x.end()
#define fi              first
#define se              second
#define floor           ll 
#define log2            __lg
#define stoi(str,frmt)  stoi(str,nullptr,frmt) 
#define pos             order_of_key // Position of the element.
#define val             find_by_order // K-th element in a set (counting from zero).
#define endl            "\n"

// Debug:-
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(queue <T> q);
template <class T> void _print(deque <T> q);
template <class T> void _print(stack <T> s);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(queue <T> q) {cerr << "[ "; while (!q.empty()) {_print(q.front()); cerr << " "; q.pop();} cerr << "]";}
template <class T> void _print(priority_queue <T> q) {cerr << "[ "; while (!q.empty()) {_print(q.top()); cerr << " "; q.pop();} cerr << "]";}
template <class T> void _print(deque <T> q) {cerr << "[ "; while (!q.empty()) {_print(q.top()); cerr << " "; q.pop_front();} cerr << "]";}
template <class T> void _print(stack <T> s) {cerr << "[ "; while (!s.empty()) {_print(s.top()); cerr << " "; s.pop();} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
template<typename T, typename ...Arg>
void _print(T a1, Arg ...a) {_print(a1);_print(a...);}
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {cerr<<name<<" : ";_print(arg1);cerr<<endl;}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {int bracket=0,i=0;for(;; i++)if(names[i]==','&&bracket==0)break;else if(names[i]=='(')bracket++;else if(names[i]==')')bracket--;const char *comma=names+i;cerr.write(names,comma-names)<<" : ";_print(arg1);cerr<<" | ";__f(comma+1,args...);}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << "Line No. " << __LINE__ << ": " #x << " "; _print(x); cerr << endl;
#define trace(...) cerr<<"Line:"<<__LINE__<<" ", __f(#__VA_ARGS__, __VA_ARGS__)
#define testdebug(tc) cerr << "TEST CASE: " << tc << "--------------------" << endl
#else
#define debug(x)
#define trace(...)
#define testdebug(tc)
#endif

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());  // FOR RANDOM NUMBER GENERATION
ll random(int min,int max){return rng()%(max-min + 1) + min;}

// Constants:- 

constexpr  ll M1  = 1000000007;
constexpr  ll M2  = 998244353;
constexpr  ld pi  = 3.1415926535897932384626;

template <typename T>
using   ordered_set = tree<T,null_type,less<T>,rb_tree_tag,
            tree_order_statistics_node_update>;

template <typename T>
using   ordered_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,
            tree_order_statistics_node_update>;

template <typename T> // cin>>vector<T>;
istream& operator>>(istream &istream, vector<T> &v){for(auto &it:v){cin>>it;}return istream;}; 
template <typename T> // cout<<vector<T>;
ostream& operator<<(ostream &ostream, const vector<T> &v){for(auto &it:v){cout<<it<<" ";}return ostream;}; 


// Number Theory Functions:-

constexpr  ll inf = 1e18;

ll ceil(ll a,ll b){ if(a%b==0)return a/b; else return a/b+1;}

ll bexp(ll a, ll b, ll MOD = inf)     {if(b<0){b=-b;a = bexp(a,MOD-2,MOD);}ll res=1;while (b){if(b&1){res=(res*a)%MOD;}
        a=((a)%MOD*(a)%MOD)%MOD;b>>=1;}return res;}

constexpr  int N  = 8e6+7;

void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    
    vector<vector<int>> adj(n*32,vector<int>(2,0));
    vector<bool> is_terminal(n*32);
    

    // Build Trie
    int curr = 0;
    for(auto x: a){
        int node = 0;
        for(int i=30;i>=0;i--){
            if((1<<i)&x){
                if(adj[node][1]==0)
                    adj[node][1] = ++curr;
                    
                node = adj[node][1]; 
            }else{
                if(adj[node][0]==0)
                    adj[node][0] = ++curr;
                
                node = adj[node][0]; 
            }
        }
        
        is_terminal[curr] = true;
    }
    
    
    auto printgraph= [&](void)->void{
        queue<array<int,3>> q;
        q.push({0,-1,-1});
        
        while(!q.empty()){
            array<int,3> node = q.front();
            q.pop();
            cout<<node[0]<<" "<<node[1]<<" "<<node[2]<<endl;
            for(int i=0;i<2;i++){
                int child = adj[node[0]][i];
                if(child==0)continue;
                
                q.push({child,node[0],i});
            }
        }
    };
    
    // printgraph();
    
    int ans = 0;
    for(auto x: a)
    {
        int node = 0;
        int y = 0;
        for(int i=30;i>=0;i--){
            int bit;
            if((1<<i)&x)bit = 0;
            else bit = 1;
            // trace(bit);
            
            if(adj[node][bit]==0 and adj[node][1^bit]==0)break;
            if(adj[node][bit]==0)bit^=1;
            else 
                y += (1<<i);
                
            node = adj[node][bit];
            // trace(x,bit,y);
        }
        ans = max(y,ans);
    }
    
    cout<<ans<<endl;
    
}

int main(){
FAST
Tgreen
    //#ifndef ONLINE_JUDGE
    //freopen("error.txt", "w", stderr);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    srand(time(NULL)); // Seed the time
    ll t=1;
    // cin>>t;
    ll c=1;
    //presolve();
    while(t--){
        testdebug(c);
        //cout<<"Case #"<<c<<": ";
        c++;
        cout<<solve();
    }
Tred
Texe
return 0;
}
// 1e9 works in about 3-5 s.
