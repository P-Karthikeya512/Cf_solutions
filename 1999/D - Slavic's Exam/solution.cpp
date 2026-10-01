#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin >> T;
    while(T--){
        int count=0,e_count=0;
        string s,t;
        cin >> s >> t;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(count < t.size())s[i]=t[count++];
                else {
                    (s[i-1]!='z') ? s[i]=s[i-1]+1 : s[i]='a';
                }
            }
            else {
                if(s[i]==t[count]) count++;
            }
        }
        if(count >= t.size()) cout << "YES
" << s << endl;
        else cout << "NO
";
    }
    return 0;
}