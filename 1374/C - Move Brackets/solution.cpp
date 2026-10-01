#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char>stk;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]==')' && stk.empty()) ans++;
            else if(s[i]=='(') stk.push(s[i]);
            else if(s[i]==')') stk.pop();
        }
        cout << ans << endl;
    }
    return 0;
}