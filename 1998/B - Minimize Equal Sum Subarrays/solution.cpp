#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>p(n),q(n);
        for(int i=0;i<n;i++) cin >> p[i];
        for(int i=0;i<n-1;i++){
            swap(p[i],p[i+1]);
        }
        for(int i=0;i<n;i++) cout << p[i] << " " ;
        cout << endl;
    }
    return 0;
}