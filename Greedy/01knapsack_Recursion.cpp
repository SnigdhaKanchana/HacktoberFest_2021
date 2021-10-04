#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int knapsack(int wt[], int v[], int w, int n){
	
	if(n==0 || w==0)
	return 0;
	if(wt[n-1] <= w)
	return max((v[n-1]+knapsack(wt,v,w-wt[n-1],n-1)), knapsack(wt,v,w,n-1));
	else if(wt[n-1] > w)
	return knapsack(wt,v,w,n-1);
}
int main(){
	int n,w,wt[100],v[100];
	cin >> n >> w ;
	for(int i=0;i<n;i++){
		cin >> wt[i] ;
	}
	for(int i=0;i<n;i++){
		cin >> v[i] ;
	}
	cout << knapsack(wt,v,w,n) << endl;
}

