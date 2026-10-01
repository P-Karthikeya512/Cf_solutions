#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, maxi=0,mini=500;
    string s;
    char x,y;
    cin >> n >> s;
    map<char,int>occur;
    for(auto a : s){
        occur[a]++;
    }
    for(auto it = occur.begin();it!=occur.end();it++){
        if(it->second >= maxi){
            x = it->first;
            maxi = it->second;
        }
        if(it->second < mini){
            mini = it->second;
            y = it->first;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]!=x){
            if(s[i]==y){
                s[i]=x;
                break;
            } 
        }
    }
    cout << s << endl;
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