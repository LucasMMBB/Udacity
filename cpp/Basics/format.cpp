/**
 *Formatting output goal: practice using cout to format output to console 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    cout<<"print with set widtth = 10\n";
    cout<<"Ints"<<setw(10);
    cout<<"Floats"<<setw(10);
    cout<<"Doubles"<<setw(10)<<"\n";
    
    cout<<a;
    cout<<setw(12)<<b;
    cout<<setw(10)<<c<<"\n";

    cout<<aa;
    cout<<setw(12)<<b;
    cout<<setw(10)<<c<<"\n";

    cout<<aaa;
    cout<<setw(12)<<bbb;
    cout<<setw(10)<<ccc<<"\n";

    cout<<"print with tabs\n";
    cout<<"Int"<<"\tFloats"<<"\tDoubles\n";
    cout<<aaa<<"\t"<<bbb<<"\t"<<ccc<<"\n";
}
