#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool found = false;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[0]){swap(s[i],s[0]);found=true;break;}
        }
        if(!found) cout <<"no
";
        else {
            cout <<"yes
";
            cout << s << endl;
        }
    }
    return 0;
}