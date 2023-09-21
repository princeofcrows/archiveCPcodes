#include <iostream>
using namespace std;

int main(){
	int T, n, m, count, count2, y, z, temp, t;
	char x;
	cin >> T;
	t = 1;
	while(T--) {
		
		cin >> n >> m;
		int ara[n];
		count = 0;
		while(count<n){
			cin >> ara[count];
			count++;
		}
		count = 1;
		while(count<=m){
			cin >> x;
			if(x == 'S'){
				cin >> y;
				count2 = 0;
				while(count2<n){
				 ara[count2] =  ara[count2] + y;
				count2++;
				}
			}
			else if(x == 'M'){
				cin >> y;
				count2 = 0;
				while(count2<n){
				 ara[count2] =  ara[count2]*y;
				count2++;
				}
			}
			else if(x == 'D'){
				cin >> y;
				count2 = 0;
				while(count2<n){
				 ara[count2] =  ara[count2]/y;
				count2++;
				}
			}
			else if(x == 'P'){
				cin >> y >> z;
				temp = ara[y];
				ara[y] = ara[z];
				ara[z] = temp;
			}
			else if(x == 'R'){
				count2 = 0;
				while(count2<n/2){
					temp = ara[count2];
					ara[count2] =  ara[n-count2-1];
					ara[n-count2-1] = temp;
					count2++;
				}
			}
			count++;
		}
		cout << "Case " << t <<":"<<endl;
		count = 0;
		while(count<n){
			if(count == n-1){
				cout << ara[count] << endl;
			}
			else{
				cout << ara[count] <<" ";
			}
			count++;
		}
		t++;
	}
	return 0;
}
