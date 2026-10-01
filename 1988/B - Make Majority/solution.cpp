#include<bits/stdc++.h>
using namespace std;
 
int hasstring(string s){
    int count =0;
    for(int i=1;i<s.size();++i){
        if(s[i-1]=='1' && s[i]=='1') count++;
    }
    return count;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string v;
        cin >> v;
        if(n==1){
            if(v[0]=='0') cout << "No
";
            else cout << "Yes
";
        } 
        else if(v[0]=='1' && v[n-1]=='1') cout << "Yes
";
        else{
            if(v.find("1111")!=string::npos) cout << "Yes
";
            else if(v.find("111")!=string::npos) cout << "Yes
";
            else if(hasstring(v)>=2) cout << "Yes
";
            else if(hasstring(v)>=1 && (v[0]=='1' || v[n-1]=='1')) cout << "Yes
";
            else cout << "No
";
        }
    }
    return 0;
}