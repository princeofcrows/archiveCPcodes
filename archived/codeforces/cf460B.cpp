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
string str;
vector <long long int> y;
long long power(long long s, long long a){
    if(a==0) return 1;
    return s*power(s, a-1);
}

long long test(long long n){
    if(n==0) return 0;
    return n%10+test(n/10);
}

long long test2(long long n){
    if(n==0) return 0;
    return 1+test2(n/10);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s;
    cin >> a >> b >> c;
    for(s=1; s<=81; s++){
        x = power(s, a)*b + c;
        if(test2(x)<10&&test(x)==s) y.push_back(x);
    }
    cout << y.size()<<endl;
    sort(y.begin(), y.end());
    for(int i=0; i<y.size(); i++){
        cout << y[i] <<" ";
    }
    return 0;
}






