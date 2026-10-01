#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,i,j;
    char a;
    cin >> t;
    vector<pair<string,string> >v;
    for(i=0;i<t;i++){
        string s1;
        string s2;
        cin >> s1 >> s2;
        a=s1[0];
        s1[0]=s2[0];
        s2[0]=a;
        pair<string,string> st;
        st.first=s1;
        st.second=s2;
        v.push_back(st);
    }
    for(i=0;i<t;i++){
        cout<<v[i].first<<" "<<v[i].second<<"
";
    }
    return 0;
}