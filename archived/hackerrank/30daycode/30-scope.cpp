#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	Difference(vector <int> a){
        elements = a;
  	}
  	int maximumDifference;
    void computeDifference(){
        int temp;
        maximumDifference = 0;
        for(int i=0; i<elements.size(); i++){
            for(int j=i+1; j<elements.size(); j++){
                temp = elements[i]-elements[j];
                if(temp<0) temp*=-1;
                if(temp>maximumDifference) maximumDifference=temp;
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
