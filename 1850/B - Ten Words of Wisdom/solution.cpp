#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,mAx=0,count=0;
		cin >> n;
		vector<int>response(n),quality(n);
		for(int i=0;i<n;i++){
			int a,b;
			cin >> a >> b;
			response[i]=a;
			quality[i]=b;
		}
		for(int i=0;i<n;i++){
			if(response[i] <= 10 && quality[i] > mAx)  {
				mAx=quality[i];
				count=i+1;
			}
		}
		cout << count << endl;
	}
	return 0;
}