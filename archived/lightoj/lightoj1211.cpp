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
	int T, t, x1, x2, y1, y2, z1, z2, xm, xx, ym, yx, zm, zx, n, ans;
	cin >> T;
	t = 1;
	while(T--) {
		cin >> n;
		xm = ym = zm = 2000;
		xx = yx = zx = 0;
		while(n--){
			cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
			xm = min(x2, xm);
			ym = min(y2, ym);
			zm = min(z2, zm);
			xx = max(x1, xx);
			yx = max(y1, yx);
			zx = max(z1, zx);
		}
		ans = (xm-xx)*(ym-yx)*(zm-zx);
		if(ans<0){
			cout << "Case " << t <<": "<<0<<endl;
		}
		else{
			cout << "Case " << t <<": "<<ans<<endl;
		}
		t++;
	}
	return 0;
}
