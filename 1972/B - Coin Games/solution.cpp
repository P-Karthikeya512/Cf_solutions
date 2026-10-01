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
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='U') count++;
        }
        if(count & 1) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}