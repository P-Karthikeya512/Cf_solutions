#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string t = "codeforces";
        int i=0,count=0;
        while(i <  s.size()){
            if(s[i]!=t[i]) count++;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}