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
vector <pair <long long, long long> > v;
vector <long long> x;
vector <long long> y;
string str;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b;
    long long ara[10];
    memset(ara, 0, sizeof ara);
    for(i=0;i<6;i++){
        cin >> temp;
        ara[temp]++;
    }
    j = m =  h = 0;
    for(i=1;i<=9;i++){
        if(ara[i]==4) j++;
        if(ara[i]==2) m++;
        if(ara[i]==6){
             m++;
             j++;
        }
        if(ara[i]==5){
             j++;
        }
    }
    if(j==1&&m==1){
        cout << "Elephant";
        return 0;
    }
    if(j==1&&m==0){
        cout << "Bear";
        return 0;
    }
    cout << "Alien";
    return 0;
}















