#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,c;
        cin >> n >> a >> b >> c;
        int cycle = a+b+c;
        int total = n/cycle;
        int dist = total*cycle;
        int day = total*3 + 1;
        if(dist==n) cout << day - 1 << endl;
        else if(dist+a >=n) cout << day << endl;
        else if(dist+a+b >= n) cout << day + 1 << endl;
        else cout << day + 2 << endl;
    }
    return 0;
}