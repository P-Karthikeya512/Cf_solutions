#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(n==1) cout << -1 << endl;
        else if(n==2){
            if(s[0]==s[1]) cout << s << endl;
            else cout << -1 << endl;
        }
        else{
            bool found = false;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    found = true;
                    cout << s[i] << s[i+1] << endl;
                    break;
                }
            }
            if(!found){
                for(int i=0;i<n-2;i++){
                    if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                        found = true;
                        cout << s[i] << s[i+1] << s[i+2] << endl;
                        break;
                    }
                }
            }
            if(!found) cout << -1 << endl;
        }
    }
    return 0;
}