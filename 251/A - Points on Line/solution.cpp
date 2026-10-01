#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    long long lo = 0 , hi = 0;
    long long k,j=0,count =0;
    while(lo<n){
        while(hi<n && v[hi]-v[lo] <= d) {
            j++;
            hi++;
        }
        k = j-lo-1;
        if(k >= 2) count += ((k)*(k-1)/2);
        lo++;
    }
    cout << count << endl;
    return 0;
}