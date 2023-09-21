#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

long long int tab[100005];
long long int tab2[100005];
long long int a[100005];
int main() {
    long long int n, t, s, p, st;
    cin >> n;
	for(int a_i = 1;a_i <= n;a_i++){
       cin >> a[a_i];
       tab[a_i] = 1;
       tab2[a_i] = 1;
    }
    long long int sum = 0;
    for(int i = 2;i <= n;i++){
    	if(a[i]>a[i-1]){
    		tab[i] += tab[i-1];
		}
    }
    for(int i = n-1;i >= 1;i--){
    	if(a[i]>a[i+1]){
    		tab2[i] += tab2[i+1];
		}
    }
    for(int i = n;i >= 1;i--){
    	sum+= max(tab[i], tab2[i]);
    }
    cout << sum;
    return 0;
}
