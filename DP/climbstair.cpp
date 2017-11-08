#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
//DP problem 
int main(){

	int n; //number of stairs
	int st[305] = {}; //number of entire stairs , each has the stair value.
	int dp[305] = {}; //each stair's max sum.
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>st[i];
		
	dp[1] = st[1]; //the entry value
	dp[2] = st[1] + st[2]; // entry value
	
	for(int j=3; j<=n; j++)
	dp[j] = max((dp[j-2]+st[j]),(dp[j-3]+st[j-1]+st[j])); //recursion fomula
	cout<<dp[n]<<endl;
}
