#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x=0,y=0;
		cin >> n;
		map<int,int>m;
		for(int i =2; i<n+1;i++){
			int sum =0;
			for(int j=1;(j*i)<=n;j++){
				sum+=(j*i);
			}
			m[i]=sum;
		}
		map<int,int> :: iterator it=m.begin();
		for(it=m.begin();it!=m.end();++it){
			if(it->second > x){
				x = it->second;
				y = it->first;
			}
		}
		cout << y <<"
";
	}
	return 0;
}