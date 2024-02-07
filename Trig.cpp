#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double p = 180/3.1415926535; // degrees to radients//
    cout << "Hello, this is my program for finding info about a triangle.\n";
    int q;
    cout << "Enter number precision\n";
    cin >> q;
    cout << setprecision(7); 
    bool side = true;
    cout << "If you only have the sides of the triangle put 1, else put 0" << endl;
    cin >> side;
    double ab, bc, ac;
    if(side){
        cout << "Enter AB\n";
        cin >> ab;
        cout << "Enter BC\n";
        cin >> bc;
        cout << "Enter AC\n" << endl;
        cin >> ac;
        }
    //enter points bellow only if sides is false//
    if(!side){ double a1, a2, b1, b2, c1, c2;
        cout << "Enter A x-value\n";
        cin >> a1;
        cout << "Enter A y-value\n";
        cin >> a2;
        cout << "Enter B x-value\n";
        cin >> b1;
        cout << "Enter B y-value\n";
        cin >> b2;
        cout << "Enter C x-value\n";
        cin >> c1;
        cout << "Enter C y-value\n";
        cin >> c2;
        ab = sqrt(pow(b1-a1,2)+pow(b2-a2,2));
        bc = sqrt(pow(c1-b1,2)+pow(c2-b2,2));
        ac = sqrt(pow(c1-a1,2)+pow(c2-a2,2));
        cout << "The center of the triangle is at \n("<< a1/3 + (b1+c1)/3 << ", " << a2/3 + (b2+c2)/3 << ")"<<"."<<endl;
    }
    cout << "The length from a to b is " << ab << ",\n and from b to c is " << bc << ",\n and from a to c is " << ac << "." <<endl;
    double aa = acos( (pow(ac,2) + pow(ab,2) - pow(bc,2))/(2*ac*ab));
    double bb = acos( (pow(ab,2) + pow(bc,2) - pow(ac,2))/(2*ab*bc));
    double cc = acos( (pow(ac,2) + pow(bc,2) - pow(ab,2))/(2*ac*bc));
        cout << "Angle a in rads is "<<aa << "\n ,or in degrees its " << aa*p << endl;
        cout << "Angle b in rads is "<<bb << "\n ,or in degrees its " << bb*p << endl;
        cout << "Angle c in rads is "<<cc << "\n ,or in degrees its " << cc*p << endl;
}