#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int y=n,cnt2=0,cnt3=0;
        while(n%2==0){
            n/=2;
            cnt2++;
        }
        while(n%3==0){
            n/=3;
            cnt3++;
        }
        if(cnt2 <= cnt3 && n == 1) cout << (cnt3-cnt2)+cnt3 << endl;
        else cout << -1 << endl;
        
    }
    return 0;
}