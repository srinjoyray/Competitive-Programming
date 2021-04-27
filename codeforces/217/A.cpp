#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,start,end) for(i=start;i<=end;i++)
#define rfo(i,n) for(i=n-1;i>=0;i--)
#define lli long long int
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it=a.begin(); it!=a.end();it++)
#define nl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int>	pii;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
map<pii,int> vis;
map<int,vi> mx,my;
void dfs(int x,int y){
    if(vis[{x,y}]==1){
        return;
    }
    vis[{x,y}]=1;
    int i,j,child;
    fo(i,mx[x].size()){
        child=mx[x][i];
        dfs(x,child);        
    }
    fo(i,my[y].size()){
        child=my[y][i];
        dfs(child,y);
    }
}
void solve(){
    int i,j;
    int n;
    cin>>n;
    int x[n],y[n],ans=0;
    
    fo(i,n){
        cin>>x[i]>>y[i];
        mx[x[i]].pb(y[i]);
        my[y[i]].pb(x[i]);
    }
    fo(i,n){
       if(vis[{x[i],y[i]}]==0){
           dfs(x[i],y[i]);
           ans++;
       }
    }
    ans--;
    cout<<ans<<nl;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

