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
        int r,l,c;
        c = count(v.begin(),v.end(),1);
        for(int i=0;i<n;i++){
            if(v[i]==1){
                l = i+1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]==1){
                r = i+1;
                break;
            }
        }
        cout << r-l-c+1 << endl;
    }
    return 0;
}