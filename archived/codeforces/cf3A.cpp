/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
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
vector <long long> z;

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

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
//____________________________________________________________________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, mn, k;
    cin >> str >> str1;
    if(str[0]<str1[0]){
    	a = (str1[0]-str[0]);
    	if(str[1]<str1[1]){
    		b = str1[1]-str[1];
    		c = min(a, b);
    		d = max(a, b);
    		cout << d << endl;
    		for(i=0;i<d;i++){
    			if(i<c){
    				cout << "RU" <<endl; 
				}
				else{
					if(a>b) cout << "R" <<endl;
					else cout << "U" << endl;
				}
			}
		}
		else{
    		b = str[1]-str1[1];
    		c = min(a, b);
    		d = max(a, b);
    		cout << d << endl;
    		for(i=0;i<d;i++){
    			if(i<c){
    				cout << "RD" <<endl; 
				}
				else{
					if(a>b) cout << "R" <<endl;
					else cout << "D" << endl;
				}
			}
		}
	}
	else{
		a = (str[0]-str1[0]);
    	if(str[1]<str1[1]){
    		b = str1[1]-str[1];
    		c = min(a, b);
    		d = max(a, b);
    		cout << d << endl;
    		for(i=0;i<d;i++){
    			if(i<c){
    				cout << "LU" <<endl; 
				}
				else{
					if(a>b) cout << "L" <<endl;
					else cout << "U" << endl;
				}
			}
		}
		else{
    		b = str[1]-str1[1];
    		c = min(a, b);
    		d = max(a, b);
    		cout << d << endl;
    		for(i=0;i<d;i++){
    			if(i<c){
    				cout << "LD" <<endl; 
				}
				else{
					if(a>b) cout << "L" <<endl;
					else cout << "D" << endl;
				}
			}
		}
	}
    return 0;
}











