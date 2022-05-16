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
    int n1;
    int n2;
    int n3, temp, mx;
    cin >> n1 >> n2 >> n3;
    vector<int> x1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> x1[h1_i];
    }
    vector<int> x2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> x2[h2_i];
    }
    vector<int> x3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> x3[h3_i];
    }
    stack<int> h1;
    h1.push(0);
    for(int h1_i = n1-1;h1_i >=0;h1_i--){
       h1.push(h1.top()+x1[h1_i]);
    }
    stack<int> h2;
    h2.push(0);
    for(int h2_i = n2-1;h2_i >=0;h2_i--){
       h2.push(h2.top()+x2[h2_i]);
    }
    stack<int> h3;
    h3.push(0);
    for(int h3_i = n3-1;h3_i >=0;h3_i--){
       h3.push(h3.top()+x3[h3_i]);
    }
    while(1){
       if(h1.top()==h2.top()&&h1.top()==h3.top()){
            cout << h1.top();
            break;
       }
       else{
            mx = max(h1.top(), max(h2.top(), h3.top()));
            if(h1.top()==mx) h1.pop();
            if(h2.top()==mx) h2.pop();
            if(h3.top()==mx) h3.pop();
       }
    }
    return 0;
}

