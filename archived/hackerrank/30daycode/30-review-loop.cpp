#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
    	char S[10004];
    	cin >> S;
    	for(int i=0; i<strlen(S); i+=2){
    		cout<<S[i];
		}
		cout <<" ";
		for(int i=1; i<strlen(S); i+=2){
    		cout<<S[i];
		}
		cout<<endl;
	}
    return 0;
}

