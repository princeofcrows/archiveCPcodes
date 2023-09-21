#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <stack>

using namespace std;

int main() {
    double mc, tp, txp;
    cin >> mc >> tp >> txp;
    mc = mc+mc*(tp/100)+mc*(txp/100);
    int tc = (int)mc;
    if(mc-(double)tc<0.5){
    	cout <<"The total meal cost is "<< tc<< " dollars.";	
	}
	else{
		cout <<"The total meal cost is "<< tc+1<< " dollars.";
	}
	return 0;
}
