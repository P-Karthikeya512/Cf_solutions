#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int xc,yc,k;
        cin >> xc >> yc >> k;
        vector<int>x(k,xc),y(k,yc);
        int sum_x = (xc*k),sum_y=(yc*k),i=0,j=0;
        while(i <= k && j < k){
            x[i]-=((k-j)/2); y[i]-=((k-j)/2);
            i=i+1;
            x[i]+=((k-j)/2); y[i]+=((k-j)/2);
            i=i+1;
            j=j+2;
        }
        for(int i=0;i<k;i++) cout << x[i] << " " << y[i] << endl;
    }
    return 0;
}