#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <stack>

using namespace std;

int n, m;
int maxrec(int ara[]){
	stack <int> index;
	int area = 0;
	int maxarea = 0;
	int top;
	int i = 0;
	while(i<n){
		if(index.empty()||ara[i]>=ara[index.top()]){
			index.push(i++);
		}
		else{
			top = ara[index.top()];
			index.pop();
			area = top*i;
			if(!index.empty())	area = top*(i-index.top()-1);
			maxarea = max(maxarea, area);
		}
	}
	while(!index.empty()){
		top = ara[index.top()];
		index.pop();
		area = top*i;
		if(!index.empty())	area = top*(i-index.top()-1);
		maxarea = max(maxarea, area);
	}
	return maxarea;
}

int main(){
	int a;
	while(true){
		cin >> m >> n;
		if(n==0&&m==0) break;
		int ara[n];
		memset(ara, 0, sizeof(ara));
		int area = 0;
		int maxarea = 0;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin >> a;
				if(a == 1) ara[j] = 0;
				else ara[j]++;
			}
			area = maxrec(ara);
			maxarea = max(maxarea, area);
		}
		cout << maxarea << endl;
	}
	return 0;
}
