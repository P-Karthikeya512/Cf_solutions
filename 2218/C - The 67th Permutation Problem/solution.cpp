#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans(3*n);
        int lo = 1, hi = 3*n, flip = 0, i=0;
        while(i < 3*n){
            if(flip == 0) ans[i++] = lo++;
            else{
                ans[i++] = hi--;
                ans[i++] = hi--;
            }
            flip = 1 - flip;
        }
        for(int i=0;i<(3*n);i++) cout << ans[i] << " ";
        cout << endl;
    }
}