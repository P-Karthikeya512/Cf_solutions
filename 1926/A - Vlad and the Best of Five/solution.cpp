#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int acount=0,bcount=0;
        for(int i=0; i < s.size();i++){
            if(s[i]=='A') acount++;
            else if(s[i]=='B') bcount++;
        }
        if(acount > bcount) cout << "A" << endl;
        else cout << "B"<<endl;
    }
    return 0;
}