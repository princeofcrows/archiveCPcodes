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
bool prime[10004];
vector <int> ip;

void seive(){
    memset(prime, true, sizeof prime);
    for(int i=2; i<10004; i++){
        if(prime[i]){
            for(int j=2*i; j<10004; j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2; i<10004; i++){
        if(prime[i]){
            ip.push_back(i);
        }
    }
}


int main(){
    //freopen("in.txt", "r", stdin);
    int n, temp, i, j, q;
    seive();
    cin >> n >> q;
    stack <int> a;
    stack <int> an;
    stack <int> b;
    for(i=0; i<n; i++){
        cin >> temp;
        a.push(temp);
    }
    for(i=0; i<q; i++){
        while(!a.empty()){
            temp = a.top();
            if(temp%ip[i]==0){
                b.push(temp);
            }
            else{
                an.push(temp);
            }
            a.pop();
        }
        a = an;
        while(!an.empty()){
            an.pop();
        }
        while(!b.empty()){
            cout << b.top() <<endl;
            b.pop();
        }
    }
    while(!a.empty()){
        cout << a.top() <<endl;
        a.pop();
    }
    return 0;
}











