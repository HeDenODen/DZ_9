#include <iostream>
using namespace std;

int main()
{
    //1
    int a1;
    cout << "Enter number: ";
    cin >> a1;
    int sum1 = 0;
    while (a1 <= 500) {
        sum1 += a1;
        a1++;
    }
    cout << "Sum = " << sum1 << "\n\n";
    

    //2
    int x;
    cout << "Enter number: ";
    cin >> x;
    int y;
    cout << "Enter number: ";
    cin >> y;
    int count1 = 1;
    int res = 1;
    while (count1 <= y) {
        res *= x;
        count1++;
    }
    cout << "Result = " << res << "\n\n";
    
    
    //3
    int count2 = 0;
    int c = 1;
    int res2 = 0;
    while (c <= 1000) {
        res2 += c;
        c++;
        count2++;
    }
    cout << "Res = " << res2 / count2 << "\n\n";
    

    //4
    int a2;
    cout << "Enter number: ";
    cin >> a2;
    double prod = 1;
    if (a2 >= 1 && a2 <= 20) {
        while (a2 <= 20) {
            prod *= a2;
            a2++;           
        }
        cout << "Product of numbers = " << prod << "\n\n";
    }
    else {
        cout << "Something wrong!" << "\n\n";
    }
    
    
    //5
    int k;
    cout << "Enter number: ";
    cin >> k;
    int p = 1;
    while (p <= 9) {
        cout << k << " * " << p << " = " << k * p << "\n";
        p++;
    }
}

