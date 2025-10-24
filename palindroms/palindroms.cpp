#include <iostream>
using namespace std;

int main() {

    int a, b, c = 0;
    
cout << "Ievadiet skaitli: ";
cin >> a;

b = a;
    while (a > 0) {
        int cipars = a % 10;
        c = c * 10 + cipars;
        a /= 10;
    }

    if (b == c)
        cout << "Skaitlis ir palindroms." << endl;
    else
        cout << "Skaitlis nav palindroms." << endl;

    return 0;
}