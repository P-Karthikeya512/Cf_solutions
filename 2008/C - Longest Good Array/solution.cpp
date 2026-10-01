#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int l , r;
        cin >> l >> r;
        int j=0;
        vector<int>v;
        for(int i=l;i<=r;i=j+i){
            v.push_back(i);
            j++;
        }
        cout << v.size() << endl;
    }
    return 0;
}