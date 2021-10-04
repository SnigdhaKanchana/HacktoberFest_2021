#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int t[102][102];
int knapsack(int wt[], int v[], int w, int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<w;j++){
			if(i==0 || j==0){
				t[i][j] = 0;
			}
		
			if(wt[i-1] <= j){
				t[i][j] = max((v[n-1]+t[i-1][j-wt[i-1]]),t[i-1][j]);
			}
			else if(wt[i-1] > j){
				t[i][j] = t[i-1][j];
			}
			}
	}	
	return t[n][w];
}
int main(){
	int n,w,wt[100],v[100];
	cin >> n >>w ;
	memset(t,-1,sizeof(t));
	for(int i=0;i<n;i++){
		cin >> wt[i];
	}
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	cout << knapsack(wt,v,w,n) << endl;
	
}
