#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
vector <long long> v;
long long ara[4005];
long long dp[4005];
long long dp2[4005];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k, m;
    a = b = 0;
    for(i=0;i<8;i++){
        cin >> str;
        for(j=0;j<8;j++){
            if(str[j]=='Q'){
                a+=9;
            }
            if(str[j]=='R'){
                a+=5;
            }
            if(str[j]=='B'){
                a+=3;
            }
            if(str[j]=='N'){
                a+=3;
            }
            if(str[j]=='P'){
                a+=1;
            }
            if(str[j]=='q'){
                b+=9;
            }
            if(str[j]=='r'){
                b+=5;
            }
            if(str[j]=='b'){
                b+=3;
            }
            if(str[j]=='n'){
                b+=3;
            }
            if(str[j]=='p'){
                b+=1;
            }
        }
    }
    if(a==b) cout << "Draw";
    if(a>b) cout <<"White";
    if(a<b) cout <<"Black";
    return 0;
}















