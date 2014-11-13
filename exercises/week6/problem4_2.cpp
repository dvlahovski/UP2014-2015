#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int p, k;
    cin >> p >> k;

    bool found = false;
    for(int j=p+1; ! found; ++j) {
        for(int i=1; i < j-k; ++i) {
            if(pow(i, 3) + pow((i+k), 3) == j) {
                cout << j << endl;
                //cout << i << " " << i+k << endl;1
                found = true;
            }
        }
    }


    return 0;
}
