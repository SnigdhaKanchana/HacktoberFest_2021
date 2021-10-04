#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool t[102][102];
int ss(int arr[], int n, int sums){
	for(int j=0;j<sums;j++){
		t[0][j] = false;
	}
	for(int i=0;i<n;i++){
		t[i][0] = true;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sums;j++){
			
			if(arr[i-1] <= j){
				t[i][j] = t[i][j-arr[i-1]] || t[i-1][j];
			}
			else{
				t[i][j] = t[i-1][j];
			}
			
		}
	}
	return t[n][sums];
}
int main(){
	int n , sums , arr[n];
	cin >> n >> sums;
	for(int i=0;i<n;i++){
		cin >>  arr[i];
	}
	cout << ss(arr, n , sums);
}
