#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

string num;
vector <long long int> x;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans1, t, ans2;
	cin >> n;
	for(int i=0; i<n; i++){
        cin >> t;
        x.push_back(t);
	}
    sort(x.begin(), x.end());
    m = x[n-1]-x[0];
    ans1 = ans2 = 0;
    for(int i=0; i<n; i++){
        if(x[i]==x[0]){
            ans1++;
        }
        if(x[n-i-1]==x[n-1]){
            ans2++;
        }
    }
    if(m==0){
        cout << m <<" "<< n*(n-1)/2;
        return 0;
    }
    cout << m <<" "<< ans1*ans2;
	return 0;
}
