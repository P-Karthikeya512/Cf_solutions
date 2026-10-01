#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n=stoi(s);
        if(n<12 && n!=0){
            cout << s << " "<< "AM"<<endl;
        }
        else if(n==12){
            cout << s << " "<< "PM"<<endl;
        }
        else if(n >12){
            n=n-12;
            int a=n/10,b=n%10;
            string x=to_string(a),p=to_string(b);
            s[0]=x[0];
            s[1]=p[0];
            cout << s << " "<< "PM"<<endl;
        }
        else if(n==0){
            n=n+12;
            int a=n/10,b=n%10;
            string x=to_string(a),p=to_string(b);
            s[0]=x[0];
            s[1]=p[0];
            cout << s << " "<< "AM"<<endl;
        }
    }
    return 0;
}