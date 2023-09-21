#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

char hel[] = "hello";

int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j;
	bool flag;
	char str[1005], temp;
	cin >> str;
	n = strlen(str);
	flag = false;
	j = 0;
	for(i=0; i<n; i++){
		if(str[i] == hel[j]){
			j++;
			if(j==5){
				flag = true;
				cout << "YES" << endl;
				break;
			}
		}
	}
	if(!flag)	cout << "NO" << endl;
	return 0;
}
