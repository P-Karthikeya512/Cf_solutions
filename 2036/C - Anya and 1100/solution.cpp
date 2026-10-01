#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
    vector<int>v;
    for(int i=0;i+3<s.size();i++){
        if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0') v.push_back(i);
    }
    while(q--){
        int i;
        char a;
        cin >> i >> a;
        --i;
        if(s.size()<4) cout << "NO
";
        else if(s[i]==a){
            if(v.empty()) cout << "NO
";
            else cout << "YES
";
        }
        else if(s[i]!=a){
            for(int j=max(0,i-3);j<=min(i,n-4);++j){
                if(s[j]=='1' && s[j+1]=='1'&& s[j+2]=='0' && s[j+3]=='0'){
                    auto it = find(v.begin(),v.end(),j);
                    v.erase(it);
                }
            }
            s[i]=a;
            for(int j=max(0,i-3);j<=min(i,n-4);++j){
                if(s[j]=='1' && s[j+1]=='1'&& s[j+2]=='0' && s[j+3]=='0') v.push_back(j);
            }
            if(v.empty()) cout << "NO
";
            else cout << "YES
";
        } 
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}