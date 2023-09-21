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
string str1, str2;
vector <long long> x;
vector <long long> y;

double fact(double n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long temp, k, r, avg, t2, temp2, j, ans, t, a, b, i, c;
    double m1, m2, p1, p2,n;
    cin >> str1 >> str2;
    t = str1.length();
    m1 = m2 = p1 = p2 = 0;
    for(i=0; i<t; i++){
        if(str2[i]=='+') p2++;
        else if(str2[i]=='-') m2++;
        if(str1[i]=='+') p1++;
        else if(str1[i]=='-') m1++;
    }
    n = t*1.0;
    if(p2>p1||m2>m1) printf("%0.9lf", 0);
    else printf("%0.11lf", fact(n-p2-m2)/(pow(2, n-p2-m2)*fact(p1-p2)*fact(m1-m2)));
    return 0;
}






