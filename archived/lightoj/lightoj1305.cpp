#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>

using namespace std;

int main(){
	int caseno, t = 1, ax, ay, bx, by, cx, cy, dx, dy, area;
	cin >> caseno;
	while(caseno--){
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		dx = - bx + ax + cx;
		dy = cy - by + ay;
		area = abs((ax-bx)*(by-cy) - (bx-cx)*(ay-by));
		cout << "Case " <<t<<": "<< dx <<" "<< dy <<" "<<area<<"\n";
		t++;
	}
	return 0;
}
