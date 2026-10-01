#include<bits/stdc++.h>
using namespace std;
 
long long height(vector<int>v,int mid){
    long long sum =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>=mid) continue;
        else sum+=(mid-v[i]);
    }
    return sum;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        long long lo = 1 , hi = *max_element(v.begin(),v.end()) + k;
        long long mid = 0;
        long long ans = 0;
        while(lo<=hi){
            mid = lo +((hi-lo)/2);
            long long x=height(v,mid);
            if(x > k) hi = mid-1;
            else {
                lo = mid+1;
                ans = mid;
            }
        }
        cout << ans << endl;
    }
    return 0;
}