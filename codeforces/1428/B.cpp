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
#define tr(it,a) for(auto it=a.begin(); it!=a.end();it++)
#define nl '\n'
#define PI 3.141592653589793238
#define mod 1000000007

void solve(){
    int i,j;
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    bool flag1=false,flag2=false;
    fo(i,n){
        if(s[i]=='<'){
            flag1=true;
        }
        if(s[i]=='>'){
            flag2=true;
        }
    }
    if(!flag1 || !flag2){
        cout<<n<<endl;
        return;
    }
    s+=s[0];
    fo(i,n){
        if(s[i]=='-' || s[i+1]=='-'){
            count++;  
        }       
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

