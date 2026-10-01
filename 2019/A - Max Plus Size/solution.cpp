#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int a = *max_element(v.begin(),v.end());
        if(n%2==0) cout << (n/2) + a << endl;
        else {
            int i = 0;
            bool found = false;
            while(i<n){
                if(v[i]==a) {
                    found = true;
                    break;
                }
                i = i+2;
            }
            if(found) cout << n-(n/2) + a << endl;
            else cout << (n/2)+a << endl;
        }
    }
    return 0;
}