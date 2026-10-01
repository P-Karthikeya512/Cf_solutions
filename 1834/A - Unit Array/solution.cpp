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
        int sum=accumulate(v.begin(),v.end(),0),product=1;
        for(int i=0;i<n;i++) product*=v[i];
        int count = 0;
        if(sum>=0 && product ==1) cout << count << endl;
        else{
            while(sum<0 || product == -1){
                sum+=2;
                product*=(-1);
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}