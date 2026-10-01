#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count=0,ans=0;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++){
            if(v[i]==0) count++;
            else {
                ans = max (ans,count);
                count = 0;
            }
        }
        cout << max(count,ans) << endl;
    }
    return 0;
}