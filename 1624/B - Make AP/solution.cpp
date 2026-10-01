#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,ans=0;
        cin >> a >> b >> c;
        if(2*b <= (a+c)){
            if((a+c)%(2*b)==0) ans =1;
        }else{
            if((2*b - a)%c==0) ans = 1;
            else if((2*b - c)%a==0) ans = 1;
        }
        if(ans) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}