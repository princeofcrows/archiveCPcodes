#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, sum1, sum2;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    sum1 = sum2= 0;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
          if(a_i==a_j){
          	sum1+=a[a_i][a_j];
		  }
		  if(a_i==n-a_j-1){
		  	sum2+=a[a_i][a_j];
		  }
       }
    }
    cout << abs(sum1-sum2);
    return 0;
}
