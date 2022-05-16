
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

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2;

long long ara[200005];

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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

vector <string> star;
map <string, double> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> t;
    getchar();
    getchar();
    double ha, so, pe;
    ha = so = 0;
    while(t--){
        while(1){
            getline(cin, str);
            if(str==""){
                sort(star.begin(), star.end());
                for(i=0;i<star.size();i++){
                    cout << star[i] <<" ";
                    printf("%.4lf\n", (dat[star[i]]*100)/(ha+so));
                }
                ha = so = 0;
                star.clear();
                dat.clear();
                if(t!=0)cout << endl;
                break;
            }
            if(dat[str]==0){
                star.push_back(str);
            }
            dat[str]++;
            if(str=="oak"||str=="maple"||str=="cherry"){
                ha++;
            }
            else{
                so++;
            }
        }
    }
    return 0;
}















