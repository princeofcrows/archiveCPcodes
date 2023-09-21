/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

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

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    for(i=0;i<8;i++){
        cin >> star[i];
    }
    bool flw;
    a = b = 9999999;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(star[j][i]=='W'){
                for(k=j-1;k>=0;k--){
                    flw = true;
                    if(star[k][i]!='.'){
                        flw = false;
                        break;
                    }
                }
                temp = j-0;
                if(temp<a&&flw) a = temp;
            }
            else if(star[j][i]=='B'){
                for(k=j+1;k<8;k++){
                    flw = true;
                    if(star[k][i]!='.'){
                        flw = false;
                        break;
                    }
                }
                temp = 7-j;
                if(temp<b&&flw) b = temp;
            }
        }
    }
    //cout << a <<" "<<b <<endl;
    if((a<=b)) cout <<"A";
    else cout <<"B";
    return 0;
}











