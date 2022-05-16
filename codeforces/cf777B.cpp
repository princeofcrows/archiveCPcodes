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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    cin >> str1 >> str2;
    long long mr[11];
    memset(mr, 0, sizeof mr);
    long long mr2[11];
    memset(mr2, 0, sizeof mr2);
    for(i=0;i<n;i++){
        mr[str2[i]-'0']++;
        mr2[str2[i]-'0']++;
    }
    a = b = 0;
    bool flag, flag1;
    for(i=0;i<n;i++){
        if(mr[str1[i]-'0']!=0){
            mr[str1[i]-'0']--;
        }
        else{
            if(str1[i]=='9'){
                a++;
                flag = false;
                for(j=0;j<9;j++){
                    if(mr[j]){
                        mr[j]--;
                        break;
                    }
                }
            }
            else{
                flag = false;
                c = str1[i]-'0';
                for(j=c+1;j<=9;j++){
                    if(mr[j]){
                        mr[j]--;
                        flag = true;
                        break;
                    }
                }
                if(flag==false){
                    for(j=0;j<=c;j++){
                        if(mr[j]){
                            mr[j]--;
                            if(j<c) a++;
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++){
        c = str1[i]-'0';
        if(c==9){
            for(j=0;j<=9;j++){
                if(mr2[j]){
                    mr2[j]--;
                    break;
                }
            }
        }
        else{
            if(mr2[c+1]){
                mr2[c+1]--;
                b++;
            }
            else{
                flag = false;
                for(j=c+1;j<=9;j++){
                    if(mr2[j]){
                        mr2[j]--;
                        if(j>c) b++;
                        flag = true;
                        break;
                    }
                }
                if(flag==false){
                    for(j=0;j<=c;j++){
                        if(mr2[j]){
                            mr2[j]--;
                            if(j>c) b++;
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << a <<endl<<b;
    return 0;
}












