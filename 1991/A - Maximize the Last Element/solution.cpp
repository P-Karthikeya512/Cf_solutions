#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int max_sum=0;
        for(int i=0;i<n;i=i+2){
            max_sum=max(max_sum,v[i]);
        }
        cout << max_sum << endl;
    }
    return 0;
}