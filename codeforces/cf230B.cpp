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
int ara[1000005];

void seive(){
    memset(ara, 0, sizeof ara);
    for(int i=2; i<=1000000; i++){
        if(ara[i]==0){
            for(int j=2*i; j<=1000000; j+=i){
                ara[j] = 1;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n;
    long double temp, sqt;
    cin >> n;
    seive();
    for(s=1; s<=n; s++){
        cin >> temp;
        if(temp==1){
            cout <<"NO"<<endl;
            continue;
        }
        sqt = sqrt(temp);
        a = (int) sqt;
        if(sqt==(double) a && ara[a]==0){
            cout << "YES";
        }
        else cout <<"NO";
        cout << endl;
    }
    return 0;
}






