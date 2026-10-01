#include<bits/stdc++.h>
using namespace std;
 
int tri(int a,int b,int c) {
    return (a+b >c) && (b+c>a) && (a+c>b); 
}
 
int seg(int a,int b,int c){
    return (a==b+c) || (b==c+a) || (c==a+b);
}
 
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool n = false;
    bool x = false;
    n=n || tri(a,b,c);
    n=n || tri(a,b,d);
    n=n || tri(a,c,d);
    n=n || tri(b,c,d);
    x = x  || seg(a,b,c);
    x = x  || seg(a,b,d);
    x = x  || seg(a,c,d);
    x = x  || seg(b,c,d);
    if(n) cout << "TRIANGLE
";
    else if(x) cout << "SEGMENT
";
    else cout << "IMPOSSIBLE
";
    return 0;
}