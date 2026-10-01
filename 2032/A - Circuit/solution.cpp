#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(2*n);
        for(int i=0;i<2*n;i++) cin >> v[i];
        int c_0 = count(v.begin(),v.end(),0);
        int c_1 = count(v.begin(),v.end(),1);
        if(c_1%2==1) cout << 1 << " " << min(c_0,c_1) << endl;
        else cout << 0 << " " << min(c_0,c_1) << endl;
    }
    return 0;
}