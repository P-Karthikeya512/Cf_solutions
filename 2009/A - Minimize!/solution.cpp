#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int a,b,mini = 1e9;
    cin >> a >> b;
    vector<int>x;
    for(int i=a;i<=b;i++) x.push_back(i);
    for(int i=0;i<x.size();i++) mini =min((x[i]-a)+(b-x[i]),mini);
    cout << mini << endl;
}
 
void fast(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int main(){
    fast();
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}