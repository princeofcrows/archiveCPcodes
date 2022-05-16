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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, e;
    cin >> n;
    cin >> str;
    temp = mx = 0;
    for(i=0;i<n;i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            temp++;
             if(temp>mx){
                mx = temp;
            }
        }
        else if(str[i]=='('){
            temp = 0;
            while(str[i]!=')')i++;
        }
        else{
            temp = 0;
        }
    }
    temp = 0;
    for(i=0;i<n;i++){
        if(str[i]=='('){
            if(str[i+1]!=')'){
                if(str[i+1]!='_')temp++;
                while(str[i]!=')'){
                    if(str[i]=='_'){
                        if((str[i+1]>='a'&&str[i+1]<='z')||(str[i+1]>='A'&&str[i+1]<='Z')){
                            temp++;
                        }
                    }
                    i++;
                }
            }
        }
    }
    cout << mx <<" " <<temp;
    return 0;
}















