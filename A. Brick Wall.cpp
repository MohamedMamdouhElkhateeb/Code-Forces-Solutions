// problem link 
// https://codeforces.com/contest/1918/problem/A
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cout << fixed << setprecision(4);
    //pow (a,b)= b*log(a)
    ll t;
    cin>>t;
    ll a,b,r;
    while(t--){
        cin>>a>>b;
        r=a*(b/2);
        cout<<r<<endl;
    }

}
