#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	//freopen("in.txt", "r", stdin);
    long long int n, ans, t, k, num, temp;
    ans = 0;
	cin >> n >> k;
	char data[n+k-1];
	char res[n];
	num = 0;
	for(int i=0; i<(n+k-1); i++){
		cin >> data[i];
	}
	cout << data[0];
	res[0] = data[0];
	for(int i=1; i<k; i++){
        res[i] = (data[i]-'0')^(data[i-1]-'0')+'0';
        cout << res[i];
	}
    for(int i=k; i<n; i++){
        temp = (res[i-k]-'0');
        res[i] = ((data[i]-'0')^(data[i-1]-'0'))^(temp)+'0';
        cout << res[i];
	}
    return 0;
}

