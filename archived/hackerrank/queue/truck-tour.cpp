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

typedef struct data{
    int gas;
    int dis;
}data;

int main() {
    freopen("in.txt", "r", stdin);
    int i, j, stp, bhnd, gs, n;
    cin >> n;
    queue <struct data> truck;
    struct data trk;
    for(i=0;i<n;i++){
        cin >> trk.gas >> trk.dis;
        truck.push(trk);
    }
    stp = bhnd = gs = 0;
    while(bhnd<n){
        data trk = truck.front();
        truck.pop();
        gs += trk.gas;
        if(gs>=trk.dis){
            bhnd++;
            gs-=trk.dis;
        }
        else{
            stp += bhnd+1;
            bhnd = 0;
            gs = 0;
        }
        truck.push(trk);
    }
    cout << stp;
    return 0;
}


















