#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

int main() {
    int n, ans, mx;
	cin >> n;
	ans = 0;
	mx = 0;
	for(int i= 0; i<ceil(log2((double) n)); i++){
		if(check(n, i)){
			ans++;
			if(mx<ans) mx = ans;
		}
		else{
			ans = 0;
		}
	} 
	cout << mx;
    return 0;
}

