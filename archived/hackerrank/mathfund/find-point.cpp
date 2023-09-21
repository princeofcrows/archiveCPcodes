#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int px, py, qx, qy, t;
    cin >> t;
    while(t--){
    	cin >> px >> py >> qx >> qy;
    	cout << 2*qx-px <<" "<<2*qy-py <<endl;
	}
    
    return 0;
}

