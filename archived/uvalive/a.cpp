#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class triAngle {
    
    public: 
        int s1; 
        int s2;
        int s3;
        double shade;
        triAngle(int a, int b, int c, double s) {
            s1 = a;
            s2 = b;
            s3 = c;
            shade = s;
       }
};

bool compare(triAngle i, triAngle j){
	return(i.shade<j.shade);
}

int main() {
    int t;
    int n, m, s1, s2, s3, shade;
    cin >> t;
    for(scanf("%d", &n)!=EOF) {       
        vector<triAngle> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            cin >> s1>> s2>> s3>> shade;
            arr.push_back(triAngle(s1, s2, s3, shade));
        }

        sort(arr.begin(), arr.end(), compare);
        
    }
    return 0;
}


