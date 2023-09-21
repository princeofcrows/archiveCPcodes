#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <long long int> v;

int main() {
    long long int num, ans, tem;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> num;
    	vector <long long int>::iterator iv = lower_bound(v.begin(), v.end(), num);
    	if(v.end()==iv) v.push_back(num);
		else v[iv-v.begin()] = num;
	} 
	cout << v.size();
    return 0;
}
