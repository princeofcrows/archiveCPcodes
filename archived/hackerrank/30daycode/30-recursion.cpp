#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ulli unsigned long long int
using namespace std;

unsigned long long int factorial(ulli n){
	if(n==1) return 1;
	return n*factorial(n-1);
}


int main() {
    ulli n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

