//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

stack <string> stk;
stack <long long> stk2;

int main() {
    freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    while(1){
        cin >> str;
        if(str=="#") break;
        star[0] = str;
        for(i=1;i<52;i++){
            cin >> star[i];
        }
        for(i=51;i>=0;i--){
            stk.push(star[i]);
            stk2.push(1);
        }
        str = stk.top();
        stk.pop();
        str1 = stk.top();
        stk.pop();
        str2 = stk.top();
        stk.pop();
        str3 = stk.top();
        stk.pop();
        a = b = c = d = 1;
        stk2.pop();
        stk2.pop();
        stk2.pop();
        stk2.pop();
        while(!stk.empty()){
            if(str[0]==str3[0]||str[1]==str3[1]){
                a++;
                b = c;
                c = d;
                d = stk2.top();
                stk2.pop();
                str1 = str2;
                str3 = stk.top();
                stk.pop();
            }
            else if(str[0]==str1[0]||str[1]==str1[1]){
                a++;
                b = c;
                c = d;
                d = stk2.top();
                stk2.pop();
                str = str1;
                str1 = str2;
                str2 = str3;
                str3 = stk.top();
                stk.pop();
            }
            else{
                x.push_back(a);
                a = b;
                b = c;
                c = d;
                d = stk2.top();
                stk2.pop();
                str = str1;
                str1 = str2;
                str2 = str3;
                str3 = stk.top();
                stk.pop();

            }
        }
        cout << x.size() << " piles remaining: ";
        for(i=0;i<x.size();i++){
            cout << x[i] <<" ";
        }
        x.clear();
        cout << endl;
    }
    return 0;
}




















