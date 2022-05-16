#include <map>
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
vector <long long> x;
vector <long long> y;
string s, t, u, cor;

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, temp, j, i, m, h, h2, m2, c, a, b, mx, d, ans, l;
    cin >> s;
    cor = s;
    sort(cor.begin(), cor.end());
    n = s.length();
    a = 0;
    j = -1;
    l = -1;
    for(i=0;i<n;i++){
        t+=s[i];
        j++;
        while(j>=0&&cor[a]==t[j]){
            u+=t[j];
            j--;
            t.erase(t.begin()+j);
            l = j;
            a++;
        }
    }
    if(l>=0){
        cor.clear();
        for(i=l;i<=j;i++){
            cor+=t[i];
        }
        sort(cor.begin(),cor.end());
        u+=cor;
        j = l-1;
    }
    for(i=j;i>=0;i--){
        u+=t[i];
    }
    cout << u;
    return 0;
}
