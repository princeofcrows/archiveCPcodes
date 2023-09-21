#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <int> ara;
vector <int> ara2;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, temp1, mx, l, ans, b, e;
    cin >> l;
    for(int i=0;i<l; i++){
        cin>>temp1;
        ara.push_back(temp1);
        ara2.push_back(temp1);
    }
    sort(ara2.begin(), ara2.end());
    bool flag = false;
    for(int i=0;i<l-1; i++){
        if(ara[i]>=ara[i+1]&&flag==false){
            flag = true;
            b=i;
            while(ara[i]>=ara[i+1]){
                if(i==l-2){
                    i++;
                    break;
                }
                i++;
            }
            e = i;
            if(i==l-1) break;
        }
        else if(ara[i]>=ara[i+1]&&flag==true){
            cout << "no";
            return 0;
        }
    }
    if(flag==false){
        cout << "yes"<<endl;
        cout << 1<<" "<<1;
        return 0;
    }
    int i = b;
    int j = e;
    while(i<=j){
        temp1 = ara[i];
        ara[i] = ara[j];
        ara[j] = temp1;
        i++;
        j--;
    }
    for(int i=0;i<l; i++){
        if(ara[i]!=ara2[i]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes"<<endl;
    cout << b+1<<" "<<e+1;
    return 0;
}
