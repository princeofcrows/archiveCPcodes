#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n, ans1, ans2;
    cin >> m >> n;
    vector<int> apple(m);
    ans1 = ans2 = 0;
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
       if(a+apple[apple_i]>=s&&a+apple[apple_i]<=t) ans1++;
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
       if(b+orange[orange_i]>=s&&b+orange[orange_i]<=t) ans2++;
    }
    cout << ans1<<endl<<ans2;
    return 0;
}

