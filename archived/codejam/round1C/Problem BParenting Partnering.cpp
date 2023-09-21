
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
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

vector <pair <double, long long> > xy;
vector <pair <double, long long> > cd;
vector <pair <long long, pair <double, double> > > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2;

long long ara[200005];

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//____________________________________________________//
//____________________________________________________________________________________/

long long cam[3000], jan[3000];

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    cin >> t;
    m = 1;
    while(t--){
        cin >> a >> b;
        memset(cam, 0, sizeof cam);
        memset(jan, 0, sizeof jan);
        for(i=0;i<a;i++){
            cin >> c >> d;
            for(i=c;i<=d;i++){
                cam[i] = 1;
            }
        }
        for(i=0;i<b;i++){
            cin >> c >> d;
            for(i=c;i<=d;i++){
                jan[i] = 1;
            }
        }
        ans = 99999999;
        for(k=0;k<1441;k++){
            c = d = 0;
            i = k;
            n = 1;
            a = b = 0;
            for(i=i;i<=1440;i++){
                if(n==1){
                    a++;
                    if(a==720||jan[i]==1){
                        n = 0;
                        b = 0;
                        a = 0;
                        c+=1;
                    }
                }
                else if(n==0){
                    b++;
                    if(b==720||cam[i]==1){
                        n = 1;
                        b = 0;
                        a = 0;
                        c+=1;
                    }
                }
            }
            for(i=0;i<k;i++){
                if(n==1){
                    a++;
                    if(a==720||jan[i]==1){
                        n = 0;
                        b = 0;
                        a = 0;
                        c+=1;
                    }
                }
                else if(n==0){
                    b++;
                    if(b==720||cam[i]==1){
                        n = 1;
                        b = 0;
                        a = 0;
                        c+=1;
                    }
                }
            }
            i = k;
            n = 0;
            a = b = 0;
            for(i=i;i<=1440;i++){
                if(n==1){
                    a++;
                    if(a==720||jan[i]==1){
                        n = 0;
                        b = 0;
                        a = 0;
                        d+=1;
                    }
                }
                else if(n==0){
                    b++;
                    if(b==720||cam[i]==1){
                        n = 1;
                        b = 0;
                        a = 0;
                        d+=1;
                    }
                }
            }
            for(i=0;i<k;i++){
                if(n==1){
                    a++;
                    if(a==720||jan[i]==1){
                        n = 0;
                        b = 0;
                        a = 0;
                        d+=1;
                    }
                }
                else if(n==0){
                    b++;
                    if(b==720||cam[i]==1){
                        n = 1;
                        b = 0;
                        a = 0;
                        d+=1;
                    }
                }
            }
            ans = min(c, d);
        }
        cout << "Case #"<<m++<<": "<<ans<<endl;
    }
    return 0;
}















