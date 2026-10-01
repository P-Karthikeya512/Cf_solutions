#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        vector<vector<char> >s(3,vector<char>(3));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) cin >> s[i][j];
        }
        char correct_char='0';
        for(int i=0;i<3;i++){
            int count_a=0,count_b=0,count_c=0;
            for(int j=0;j<3;j++){
                if(s[i][j]=='A') count_a++;
                else if(s[i][j]=='B') count_b++;
                else if(s[i][j]=='C') count_c++;
            }
            if(count_a<1)  correct_char='A';
            else if(count_b<1) correct_char='B';
            else if(count_c<1) correct_char='C';
        }
        cout << correct_char << endl;
    }
    return 0;
}