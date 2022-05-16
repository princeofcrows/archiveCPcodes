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
    //freopen("in.txt", "r", stdin);
    string str, sr;
    int n, temp, a, b;
    cin >> n;
    stack <string> x;
    stack <int> op;
    while(n--){
        cin >> temp;
        if(temp==1){
            cin >> sr;
            x.push(str);
            op.push(1);
            str+=sr;
        }
        else if(temp==2){
            cin >> a;
            x.push(str);
            op.push(2);
            str.erase (str.end()-a, str.end());
        }
        else if(temp==3){
            cin >> a;
            cout << str[a-1] <<endl;
        }
        else if(temp==4){
            op.pop();
            str = x.top();
            x.pop();
        }
    }
    return 0;
}

