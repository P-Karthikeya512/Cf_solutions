#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s,x="";
        cin >> s;
        int c_0 = count(s.begin(),s.end(),'0');
        int c_1 = count(s.begin(),s.end(),'1');
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'&&c_0>0){
                x+='0';
                c_0--;
            }
            else if(s[i]=='0' && c_1>0){
                x+='1';
                c_1--;
            }
            else break;
        }
        cout << s.size()-x.size() << endl;
    }
    return 0;
}