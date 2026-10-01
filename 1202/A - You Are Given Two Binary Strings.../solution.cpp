#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string x,y;
        cin >> x >> y;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        int posX,posY;
        for(int i=0;i<y.size();i++){
            if(y[i]=='1'){
                posY = i;
                break;
            }
        }
        for(int i=0;i<x.size();i++){
            if(x[i]=='1' &&  !(i < posY)) {
                posX = i;
                break;
            }
        }
        cout << posX-posY << endl;
    }
    return 0;
}