#include<bits/stdc++.h>
using namespace std;
 
bool sqr(int x){
    int y = sqrtl(x);
    if(x==(y*y)) return true;
    return false;
}
 
void solve(){
    int n,happy=0;
    cin >> n;
    vector<int>v(n),b(n,0);
    for(int i=0;i<n;i++) cin >> v[i];
    b[0] += v[0];
    for(int i=1;i<n;i++)    b[i] += (b[i-1]+v[i]);
    for(int i=0;i<n;i++){
        if(b[i]%2 && sqr(b[i])){
            happy++;
        }
    }
    cout << happy << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
     solve();   
    }
    return 0;
}