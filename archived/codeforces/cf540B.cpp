#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	//freopen("in.txt", "r", stdin);
	int n, ans, k, p ,x, y, sum;
	cin >> n >> k>> p>> x >>y;
	int gmark[k], rmark[n];
	bool table[n];
	sum = 0;
	for(int i=0; i<k; i++){
		cin >> gmark[i];
		sum+=gmark[i];
	}
	if((x-sum)<(n-k)||(x-sum)>(n-k)*p){
		cout<<-1;
		return 0;
	}
	//cout <<"not";
	memset(table, false, sizeof table);
	rmark[(n+1)/2-1] = y;
	int bf = (n+1)/2-2;
	int af = n-1;
	for(int i=0; i<k; i++){
		if(bf<0||af<=(n+1)/2-1){
			cout << -1;
			return 0;
		}
		if(gmark[i]<y){
			rmark[bf] = gmark[i];
			table[bf]=true;
			bf--;
		}
		else if(gmark[i]>y){
			rmark[af] = gmark[i];
			table[af]=true;
			af--;
		}
		if(gmark[i]==y){
			if(!table[(n+1)/2-1])
				table[(n+1)/2-1]=true;
			else{
				table[af] = true;
				rmark[af] = gmark[i];
				af--;
			}
		}
	}
	//cout <<"not";
	for(int i=0; i<n; i++){
		if(table[i]==false){
			if(i<(n+1)/2-1){
				rmark[i] = 1;
				sum+=1;
			}
			if(i>(n+1)/2-1){
				rmark[i] = y;
				sum+=y;
			}
		}
	}
	if(sum>x){
		cout << -1;
		return 0;
	}
	else{
		for(int i=0; i<n; i++){
			if(table[i]==false){
				cout<<rmark[i]<<" ";
			}
		}
	}
	return 0;
}
