#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k,sum=0,given=0;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        for(int i=0;i<n;i++){
            if(v[i]>=k)sum+=v[i];
            if(v[i]==0 && i!=0 && sum > 0){
                given++;
                sum--;
            }
        }
        cout << given << endl;
    }
    return 0;
}