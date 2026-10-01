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
        int maxi = *max_element(v.begin(),v.end());
        int mini = *min_element(v.begin(),v.end());
        cout << (n-1)*(maxi-mini) << endl;
    }
    return 0;
}