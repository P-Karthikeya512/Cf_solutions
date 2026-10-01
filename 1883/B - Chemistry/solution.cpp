#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,count=0;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int>m;
        for(char c : s) m[c]++;
        for(auto it = m.begin();it!=m.end();++it){
            if(it->second%2==1)count++;
        }
        if(count > k+1) cout << "NO
";
        else cout << "YES
";
    }
    return 0;
}