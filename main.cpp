#include <iostream>
#include <numeric>
using namespace std;
 
class Frac {
   private:
    int a;
    int b;
    int max;
    int newA;
    int newB;

   public:
    Frac() : a(0), b(0) {}
 
    void in() {
        cout << "Enter the numerator : ";
        cin >> a;
        cout<< "Enter the denominator : ";
        cin >> b;
    }
 
    // Overload the * operator
    Frac operator * (const Frac &obj) {
        Frac temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;
        
        return temp;
    }
 
    void out() {
    max = (a > b) ? a : b;
    do
    {
        if (max % a == 0 && max % b == 0)
        {
            cout << "LCM = " << max << endl;
            break;
        }
        else
            ++max;
    } while (true);
    newA = a;
    newB = b;
    a = max/newB;
    b = max/newA;

        cout<<"The fraction is  "<< a<<"/"<<b << endl;
    }
};
 
int main() {
    Frac F1, F2, result;
 
    cout << "Enter the first fraction:" << endl;
    F1.in();
 
    cout << "Enter the second fraction:" << endl;
    F2.in();
 
   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = F1 * F2;
    result.out();
    
    return 0;
}