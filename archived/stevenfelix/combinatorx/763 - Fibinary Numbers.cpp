#include <bits/stdc++.h>

using namespace std;



struct Bigint {

    // representations and structures

    string a; // to store the digits

    int sign; // sign = -1 for negative numbers, sign = 1 otherwise



    // constructors

    Bigint() {} // default constructor

    Bigint( string b ) { (*this) = b; } // constructor for string



    // some helpful methods

    int size() { // returns number of digits

        return a.size();

    }

    Bigint inverseSign() { // changes the sign

        sign *= -1;

        return (*this);

    }

    Bigint normalize( int newSign ) { // removes leading 0, fixes sign

        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )

            a.erase(a.begin() + i);

        sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;

        return (*this);

    }



    // assignment operator

    void operator = ( string b ) { // assigns a string to Bigint

        a = b[0] == '-' ? b.substr(1) : b;

        reverse( a.begin(), a.end() );

        this->normalize( b[0] == '-' ? -1 : 1 );

    }



    // conditional operators

    bool operator < ( const Bigint &b ) const { // less than operator

        if( sign != b.sign ) return sign < b.sign;

        if( a.size() != b.a.size() )

            return sign == 1 ? a.size() < b.a.size() : a.size() > b.a.size();

        for( int i = a.size() - 1; i >= 0; i-- ) if( a[i] != b.a[i] )

            return sign == 1 ? a[i] < b.a[i] : a[i] > b.a[i];

        return false;

    }

    bool operator == ( const Bigint &b ) const { // operator for equality

        return a == b.a && sign == b.sign;

    }



    // mathematical operators

    Bigint operator + ( Bigint b ) { // addition operator overloading

        if( sign != b.sign ) return (*this) - b.inverseSign();

        Bigint c;

        for(int i = 0, carry = 0; i<a.size() || i<b.size() || carry; i++ ) {

            carry+=(i<a.size() ? a[i]-48 : 0)+(i<b.a.size() ? b.a[i]-48 : 0);

            c.a += (carry % 10 + 48);

            carry /= 10;

        }

        return c.normalize(sign);

    }

    Bigint operator - ( Bigint b ) { // subtraction operator overloading

        if( sign != b.sign ) return (*this) + b.inverseSign();

        int s = sign; sign = b.sign = 1;

        if( (*this) < b ) return ((b - (*this)).inverseSign()).normalize(-s);

        Bigint c;

        for( int i = 0, borrow = 0; i < a.size(); i++ ) {

            borrow = a[i] - borrow - (i < b.size() ? b.a[i] : 48);

            c.a += borrow >= 0 ? borrow + 48 : borrow + 58;

            borrow = borrow >= 0 ? 0 : 1;

        }

        return c.normalize(s);

    }

    Bigint operator * ( Bigint b ) { // multiplication operator overloading

        Bigint c("0");

        for( int i = 0, k = a[i] - 48; i < a.size(); i++, k = a[i] - 48 ) {

            while(k--) c = c + b; // ith digit is k, so, we add k times

            b.a.insert(b.a.begin(), '0'); // multiplied by 10

        }

        return c.normalize(sign * b.sign);

    }

    Bigint operator / ( Bigint b ) { // division operator overloading

        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );

        Bigint c("0"), d;

        for( int j = 0; j < a.size(); j++ ) d.a += "0";

        int dSign = sign * b.sign; b.sign = 1;

        for( int i = a.size() - 1; i >= 0; i-- ) {

            c.a.insert( c.a.begin(), '0');

            c = c + a.substr( i, 1 );

            while( !( c < b ) ) c = c - b, d.a[i]++;

        }

        return d.normalize(dSign);

    }

    Bigint operator % ( Bigint b ) { // modulo operator overloading

        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );

        Bigint c("0");

        b.sign = 1;

        for( int i = a.size() - 1; i >= 0; i-- ) {

            c.a.insert( c.a.begin(), '0');

            c = c + a.substr( i, 1 );

            while( !( c < b ) ) c = c - b;

        }

        return c.normalize(sign);

    }



    // output method

    void print() {

        if( sign == -1 ) putchar('-');

        for( int i = a.size() - 1; i >= 0; i-- ) putchar(a[i]);
        putchar('\n');

    }

};

Bigint fibo[205];


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i, j, k, l;
    string str, str1;
    fibo[0] = "1";
    fibo[1] = "2";
    for(i=2;i<=200;i++){
        fibo[i] = fibo[i-1]+fibo[i-2];
        //fibo[i].print();
    }
    l = 0;
    while(cin >> str >> str1){
        if(l) cout << endl;
        reverse(str.begin(), str.end());
        reverse(str1.begin(), str1.end());
        l = 1;
        Bigint a, b, c;
        a = "0";
        b = "0";
        c = "0";
        for(i=0;i<str.length();i++){
            if(str[i]=='1') a = a + fibo[i];
        }
        //a.print();
        //b.print();
        for(i=0;i<str1.length();i++){
            if(str1[i]=='1') b = b + fibo[i];
        }
        c = a + b;
        j = 0;
        for(i=200;i>=0;i--){
            if(fibo[i]<c||fibo[i]==c){
                j = 1;
                cout << 1;
                c = c - fibo[i];
            }
            else if(j){
                cout << 0;
            }
        }
        if(!j) cout << 0;
        cout << endl;
    }
    return 0;
}















