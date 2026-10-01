#include<bits/stdc++.h>
using namespace std;
 
void solve(vector<int> v, int n){
     map<int, int> arr;
        for(int i = 0; i<n; i++){
            arr[v[i]]++;
        }
 
        auto it = arr.begin();
        for(; it!=arr.end(); it++){
            if((it->second)&1){
                cout<<"YES
";
                return ;
            }
        }
        cout<<"NO
";
}
 
int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        // int a = *max_element(v.begin(),v.end());
        // int x = count(v.begin(),v.end(),a);
        // if(x&1){
        //     cout<<"YES
";
        // }
        // else if(x%2==0 && x!=n){
        //     cout<<"YES
";
        // }
        // else{
        //     cout<<"NO
";
        // }
        solve(v, n);
       
    }
    return 0;
}