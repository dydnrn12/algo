#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n;
	int st[305] = {};
	int dp[305] = {};
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>st[i];
		
	dp[1] = st[1];
	dp[2] = st[1] + st[2];
	
	for(int j=3; j<=n; j++)
	dp[j] = max((dp[j-2]+st[j]),(dp[j-3]+st[j-1]+st[j]));
	
	cout<<"max:"<<dp[n]<<endl;
}
