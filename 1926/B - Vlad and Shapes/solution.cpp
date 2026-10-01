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
        vector<vector<char>>v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin >> v[i][j];
        }
        vector<int>s;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(v[i][j]=='1') count++;
            }
            if(count) s.push_back(count);
            else continue;
        }
        if(s[0]!=s[1]) cout << "TRIANGLE
";
        else cout << "SQUARE
";
    }
    return 0;
}