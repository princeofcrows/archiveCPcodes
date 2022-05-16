#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#define ulli unsigned long long int
using namespace std;

int main() {
   int n, t, q, dig, st, mx;
   cin >> n;
   t = n;
   dig = 0;
   st = 1;
   while(t!=0){
   		dig++;
   		t/=10;
   		st*=10;
   }
   int din[dig];
   t = n;
   int i =0;
   mx = 0;
   while(t!=0){
   		din[i++] = t%10;
   		t/=10;
   		if(din[i-1]>mx){
   			mx = din[i-1];
		}
   }
   cout << mx <<endl;
   bool flag;
   for(i=0;i<mx;i++){
   		flag = false;
   		for(int j = dig-1; j>=0;j--){
   			if(din[j]!=0){
   				cout << 1;
   				din[j]--;
   				flag = true;
			}
			else if(din[j]==0&&flag){
				cout<<0;
			}
		}
		cout << " ";
   }
   return 0;
}

