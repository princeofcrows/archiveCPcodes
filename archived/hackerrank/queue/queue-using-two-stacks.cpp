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
    int n, temp, a;
    cin >> n;
    queue <int> x;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp==1){
            cin >> a;
            x.push(a);
        }
        else if(temp==2){
            x.pop();
        }
        else{
            cout << x.front() <<endl;
        }

    }
    return 0;
}









