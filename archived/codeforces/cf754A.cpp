#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int ara[1005];

int main(){
    //freopen("in.txt", "r", stdin);
	int n, m, a, ans, x, y;
	cin >> n;
	bool flag=false;
	ans = 0;
    for(int i=0; i<n; i++){
        cin >> ara[i];
        if(ara[i]!=0){
            flag = true;
        }
        ans+=ara[i];
    }
    if(flag==false){
        cout << "NO";
        return 0;
    }
    if(ans!=0){
        cout << "YES" <<endl;
        cout << 1 <<endl;
        cout << 1 <<" "<<n;
    }
    else{
        cout << "YES" <<endl;
        cout << 2 << endl;
        for(int i=0; i<n; i++){
            if(ara[i]!=0){
                x = i;
                break;
            }
        }
        cout << 1 << " "<<x+1 <<endl;
        cout << x+2 << " "<<n<<endl;
    }
	return 0;
}
