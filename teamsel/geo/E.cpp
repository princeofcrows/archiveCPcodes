//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;
string star[200000], str, str1, str2;
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);
double x1, x2, yy1, y2, x3, y3, x4, y4;
long long n;

double LL(){
    double b1 = (x2-x1);
    double a1 = (y2-yy1);
    double b2 = (x3-x4);
    double a2 = (y3-y4);
    double c1 = -b1*yy1-a1*x1;
    double c2 = -b2*y3-a2*x3;
    double d = abs(c1-c2)/sqrt(b1*b1+a1*a1);
    if(b2==0.0&&b1==0.0) return d;
    if(b2==0.0&&b1!=0.0) return 0.0;
    if(b2!=0.0&&b1==0.0) return 0.0;
    double m1 = a1/b1;
    double m2 = a2/b2;
    //cout << m1 <<": "<<m2 << endl;
    c1 = yy1-m1*x1;
    c2 = y3-m2*x3;
    if(m1!=m2) return 0.0;
    d = abs(c1-c2)/sqrt(1+m1*m1);
    return d;
}

double SS(){
    double b1 = (x2-x1);
    double a1 = (y2-yy1);
    double b2 = (x3-x4);
    double a2 = (y3-y4);
    double c1 = -b1*yy1-a1*x1;
    double c2 = -b2*y3-a2*x3;
    double d = sqrt((x1-x3)*(x1-x3)+(yy1-y3)*(yy1-y3));
    d = min(d, sqrt((x1-x4)*(x1-x4)+(yy1-y4)*(yy1-y4)));
    d = min(d, sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4)));
    d = min(d, sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)));
    double td = abs(x3*a1+y3*b1+c1)/sqrt(a1*a1+b1*b1);
    double tx =
    return d;
}

double LS(){
    double b1 = (x2-x1);
    double a1 = (y2-yy1);
    double c1 = -b1*yy1-a1*x1;
    double d = abs(x3*a1+y3*b1+c1)/sqrt(a1*a1+b1*b1);
    d = min(d, abs(x4*a1+y4*b1+c1)/sqrt(a1*a1+b1*b1));
    return d;
}

double SL(){
    double b2 = (x3-x4);
    double a2 = (y3-y4);
    double c2 = -b2*y3-a2*x3;
    double d = abs(x1*a2+yy1*b2+c2)/sqrt(a2*a2+b2*b2);
    d = min(d, abs(x3*a2+y3*b2+c2)/sqrt(a2*a2+b2*b2));
    return d;
}

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, a, b, mx, d, k;
    while(1){
        double dis;
        cin >> x1 >> yy1 >> x2 >> y2 >> x3 >> y3;

        printf("%.5lf\n", dis);
    }
    return 0;
}
















