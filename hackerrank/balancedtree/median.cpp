#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int ara[1000005], n, n2, ans, swt, ara2[1000005];

void stfupN(long long int i){
    if(i!=0){
        long long int prnt = (i-1)/2;
        long long int temp;
        if(ara[prnt]>ara[i]){
            temp = ara[prnt];
            ara[prnt] = ara[i];
            ara[i] = temp;
            stfupN(prnt);
        }
    }
}

void stfdwnN(long long int i){
    long long li, ri, temp, mi;
    li = 2*i+1;
    ri = 2*i+2;
    if(ri>=n){
        if(li>=n){
            return;
        }
        else{
            mi = li;
        }
    }
    else{
        if(ara[li]<=ara[ri]){
            mi = li;
        }
        else{
            mi = ri;
        }
    }
    if(ara[i]>=ara[mi]){
        temp = ara[i];
        ara[i] = ara[mi];
        ara[mi] = temp;
        stfdwnN(mi);
    }
}

void InsertN(long long v){
    ara[n] = v;
    n++;
    stfupN(n-1);
}

bool DeleteN(long long int v){
    long long int i;
    for(i=0; ara[i]!=v; i++){
        if(i==n-1){
            cout << "Wrong!"<<endl;
            return false;;
        }
    }
    ara[i] = ara[n-1];
    ara[n-1] = 999999999999;
    n--;
    stfdwnN(i);
    return true;
}

void stfupX(long long int i){
    if(i!=0){
        long long int prnt = (i-1)/2;
        long long int temp;
        if(ara2[prnt]<ara2[i]){
            temp = ara2[prnt];
            ara2[prnt] = ara2[i];
            ara2[i] = temp;
            stfupX(prnt);
        }
    }
}

void stfdwnX(long long int i){
    long long li, ri, temp, mi;
    li = 2*i+1;
    ri = 2*i+2;
    if(ri>=n2){
        if(li>=n2){
            return;
        }
        else{
            mi = li;
        }
    }
    else{
        if(ara2[li]>ara2[ri]){
            mi = li;
        }
        else{
            mi = ri;
        }
    }
    if(ara2[i]<ara2[mi]){
        temp = ara2[i];
        ara2[i] = ara2[mi];
        ara2[mi] = temp;
        stfdwnX(mi);
    }
}

void InsertX(long long v){
    ara2[n2] = v;
    n2++;
    stfupX(n2-1);
}

bool DeleteX(long long int v){
    long long int i;
    for(i=0; ara2[i]!=v; i++){
        if(i==n2-1){
            cout << "Wrong!"<<endl;
            return false;
        }
    }
    ara2[i] = ara2[n2-1];
    ara2[n2-1] = 0;
    n2--;
    stfdwnX(i);
    return true;
}

int main() {
    freopen("in.txt", "r", stdin);
    long long int num, k, a, v, q, v1, v2;
    cin >> num ;
    n = 0;
    n2 = 0;
    bool flag = false;
    bool tp;
    for(int i=0; i<num; i++){
        char ch;
        cin >> ch;
        cin >> v;
        if(ch=='a'){
            if(flag==false){
                InsertX(v);
                flag = true;
            }
            else if(v<ara2[0]) InsertX(v);
            else InsertN(v);
            if(n>n2){
                if(n-n2>1){
                    v = ara[0];
                    tp = DeleteN(v);
                    InsertX(v);
                }
            }
            else if(n2>n){
                if(n2-n>1){
                    v = ara2[0];
                    tp = DeleteX(v);
                    InsertN(v);
                }
            }
        }
        else if(ch=='r'){
            if(n==0&&n2==0){
                cout << "Wrong!"<<endl;
            }
            if(v<ara2[0]){
                tp = DeleteX(v);
            }
            else{
                tp = DeleteN(v);
            }
            if(tp==false){
                continue;
            }
            if(n>n2){
                if(n-n2>1){
                    v = ara[0];
                    tp = DeleteN(v);
                    InsertX(v);
                }
            }
            else if(n2>n){
                if(n2-n>1){
                    v = ara2[0];
                    tp = DeleteX(v);
                    InsertN(v);
                }
            }
        }
        //cout << n2 <<": "<<ara2[0]<<" "<<n<<": "<<ara[0]<<endl;
        if(n==n2){
            printf("%.1lf", ((double)ara2[0]+(double)ara[0])/2);
        }
        else if(n>n2) {
            printf("%.1lf", (double)ara[0]);
        }
        else{
            printf("%.1lf", (double)ara2[0]);
        }
        cout << endl;
    }
    return 0;
}













