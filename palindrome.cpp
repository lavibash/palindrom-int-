//Enter the number of testcases first.
//Then enter the numbers that you need to check.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int is_palindrome(int x){
   string P = to_string(x);
   reverse(P.begin(), P.end());

    if (to_string(x) == P) {
        cout<< "true: ";
    } else {
        cout << "false: ";
    }
    return x;

}

int main (){
    int testcases;
    cin >> testcases;
    for (int t = 1; t <= testcases; ++t){
        int num;
        cin >> num;
        cout<<"Case #"<<t<<": "<<is_palindrome(num)<<endl;
    }
    return 0;
}
