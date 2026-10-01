#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++) if(v[i]==i+1)count++;
        cout << count/2 + (count%2) << endl;
    }
    return 0;
}