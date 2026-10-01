#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1||n==3) cout << -1 << endl;
        else if(n==2) cout << 66 << endl;
        else{
            string res;
            res+="66";
            if(n%2){
                res+='3';
                res+='6';
                n-=4;
                while(n--) res+='3';
            }
            else{
                n-=2;
                while(n--) res+='3';
            }
            reverse(res.begin(),res.end());
            cout << res << endl;
        }
    }
    return 0;
}