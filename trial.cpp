#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace std;
using namespace Eigen;

int main(){

    string s = "apple";
    string s_ = "appla";
    cout << (s==s_) << endl;
    int x = 12321;
    s = to_string(x);
    reverse(s.begin(),s.end());
    cout << s << endl;
    cout << (to_string(x)==s) << endl;
    int y = int(s);
    cout << y << endl;
    return 0;
}