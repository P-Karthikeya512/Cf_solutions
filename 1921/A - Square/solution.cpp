#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x1,y1,x2,y2,x3,y3,x4 , y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;
        if(x1==x2) cout << (y1-y2)*(y1-y2) << endl;
        else if(x1==x3) cout << (y1-y3)*(y1-y3) << endl;
        else if(x1==x4) cout << (y1-y4)*(y1-y4) << endl;
    }
    return 0;
}