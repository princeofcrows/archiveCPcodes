#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <string>
using namespace std;

int main(){
	int T, t, i, j, k, l, m, max, temp;
	cin>>T;
	t = 1;
	while(T--){
		cin >> k;
		string substr[105], ans;
		for(i=0; i<k; i++){
			cin >> substr[i];
		}
		max = temp = 0 ;
		for(i=0; i<=k; i++){
			temp = 0;
			for(l=i+1; l<=k; l++){
				if(substr[i]==substr[l]){
					temp++;
					if(temp>max){
						max = temp;
						ans.assign(substr[i]);
					}
				}
			}
		}
		cout << "Case " << t <<": "<< ans <<endl;
		t++;
	}
	return 0;
}
