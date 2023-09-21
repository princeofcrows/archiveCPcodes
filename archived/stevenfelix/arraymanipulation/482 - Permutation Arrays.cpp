#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;
int arsz;
vector <int> ara;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


void LineTointconv(){
    int i, j, k, n, num;
    n = str.length();
    j = num = 0;
    for(i=0;i<n;i++){
        if(str[i]==' '){
            ara.push_back(num);
            //cout << num << " ";
            num = 0;
            j++;
            continue;
        }
        num = num*10 + (str[i]-'0');
    }
    arsz = j;
}

void LineTowordconv(){
    int i, j, k, n, num;
    n = str1.length();
    j = num = 0;
    for(i=0;i<n;i++){
        if(str1[i]==' '){
            star.push_back(str3);
            //cout << star[j] <<" ";
            str3.clear();
            j++;
            continue;
        }
        str3 += str1[i];
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> n;
    //getchar();
    for(i=0;i<n;i++){
        if(i==0)getchar();
        getchar();
        getline(cin, str);
        str+=" ";
        getline(cin, str1);
        str1+=" ";
        //cout << str1;
        LineTointconv();
        LineTowordconv();
        string star2[arsz];
        for(j=0;j<arsz;j++){
            star2[ara[j]-1] = star[j];
        }
        if(i!=0) cout << endl;
        for(j=0;j<arsz;j++){
            cout << star2[j]<<endl;
        }
        str.clear();
        str1.clear();
        star.clear();
        ara.clear();

    }
    return 0;
}















