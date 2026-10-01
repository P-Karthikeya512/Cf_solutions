#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool found = false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                found = true;
                break;
            } 
        }
        if(found||(s[0]=='1'|| s[n-1]=='1')) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}