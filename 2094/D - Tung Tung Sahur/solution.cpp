#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string p, s;
    cin >> p >> s;
    vector<pair<char,int>> grp1, grp2;
    for(int i=0;i<p.size();){
        char c = p[i];
        int count = 0;
        while(i < p.size() and p[i]==c){
            count++;
            i++;
        }
        grp1.push_back({c,count});
    }
    for(int i=0;i<s.size();){
       char c = s[i];
       int count = 0;
       while(i<s.size() and s[i]==c){
          count++;
          i++;
        }
        grp2.push_back({c,count});
    }
    if(grp2.size() != grp1.size()){
       cout << "NO
";
       return;
    }
    for (int i = 0; i < grp1.size();i++)
    {
        char c = grp1[i].first;
        char c2 = grp2[i].first;
        int s1 = grp1[i].second,s2 = grp2[i].second;
        if(c!=c2){
            cout << "NO
";
            return;
        }
        if(s2 < s1 or s2 > (2*s1)){
            cout << "NO
";
            return;
        }
    }
    cout << "YES
";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       solve();
    }
    return 0;
}