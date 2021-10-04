#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int t[102][102];
int knapsack(int wt[], int v[], int w, int n){
	if(n == 0 || w == 0)
	return 0;
	if(t[n][w] == -1)
	return t[n][w];
	if(wt[n-1] <= w)
	{
	t[n][w] = max((v[n-1]+knapsack(wt,v,w-wt[n-1],n-1)), knapsack(wt,v,w,n-1));
	return t[n][w]
}
	else if(wt[n-1] > w)
	{
	t[n][w] =  knapsack(wt,v,w,n-1);
	return t[n][w];
}
int main(){
	int n,w,wt[100],v[100];
	memset(t, -1, sizeof(t));
	cin >> n >> w ;
	for(int i=0;i<n;i++){
		cin >> wt[i] ;0
	}
	for(int i=0;i<n;i++){
		cin >> v[i] ;
	}
	cout <<  << endl;
}

