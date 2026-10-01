#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<string>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int count=0,i=0;
        while(i<n){
            if(v[i].size()<=m) count++;
            else break;
            m -= v[i].size();
            i++;
        }
        cout << count << endl;
    }
    return 0;
}