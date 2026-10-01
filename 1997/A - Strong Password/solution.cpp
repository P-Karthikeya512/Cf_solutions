#include<bits/stdc++.h>
#include<ctime>
using namespace std;
 
char randomCharacter(void){
    return 'a'+rand() % 26 ;
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s,x="";
        cin >> s;
        int n=s.size();
        srand(time(0));
        int l=-1;
        for(int i=0;i<n-1;i++){
             if(s[i]==s[i+1]) l=i;
        }
        if(l!=-1){
            x+=s.substr(0,l+1);
            (s[l]=='z') ? x+='y' :x+=(s[l]+1);
            x+=s.substr(l+1);
        }else {
            char p = s[n-1];
            if(p=='z'){
                x=s;
                x+=(p-1);
            }else{
                x=s;
                x+=(p+1);
            } 
        }
        cout << x << endl;
    }
    return 0;
}