#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	int T, t, x1, x2, y1, y2;
	cin >> T;
	t = 1;
	while(T--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << t <<": ";
		if((x1+y1)%2==0&&(x2+y2)%2!=0){
			cout << "impossible" << endl;
		}
		else if((x1+y1)%2!=0&&(x2+y2)%2=0){
			cout << "impossible" << endl;
		}
		else {
			if(abs(x1-x2)==abs(y1-y2)){
				cout << 1 << endl;
			}
			else{
				cout << 2 << endl;
			}
		}
		t++;
	}
	return 0;
}
