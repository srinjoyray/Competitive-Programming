#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,start,end) for(i=start;i<=end;i++)
#define rfo(i,n) for(i=n-1;i>=0;i--)
#define lli long long int
#define ll long long int
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
bool comp(pl a,pl b){
    if(a.F==b.F){
        return a.S>b.S;
    }
    return a.F>b.F;
}
void solve(){
    int i,j;
    int n;
    cin>>n;
    lli a[n],sum=0,pref[n],ans=0,pos;
    vpl v;
    fo(i,n){
        cin>>a[i];
        if(a[i]<0){
            v.pb({a[i],i});
        }
    }
    fo(i,n){
        if(a[i]>=0){
            sum+=a[i];
            ans++;
        }
        pref[i]=sum;
    }
    sort(all(v),comp);
    bool flag;
    fo(i,v.size()){
        pos=v[i].S;
        flag=true;
        for(j=pos;j<n;j++){
            if(pref[j]+v[i].F<0){
                flag=false;
                break;
            }
        }
        if(flag){
            for(j=pos;j<n;j++){
                pref[j]+=v[i].F;
            }
            ans++;
        }
    }
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
}

