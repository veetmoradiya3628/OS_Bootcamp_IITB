#include<bits/stdc++.h>
using namespace std;
class Complex {
    public:
        int real, img;

        Complex add(Complex c1, Complex c2){
            Complex ans;
            ans.real = c1.real + c2.real;
            ans.img = c1.img + c2.img;
            return ans;
        }
};
int main()
{
    Complex c1, c2;
    cout<<"Enter first complex number : ";
    cin>>c1.real>>c1.img;
    cout<<"Enter second complex number : ";
    cin>>c2.real>>c2.img;
    Complex c;
    Complex c3 = c.add(c1, c2);
    cout<<"Result : "<<c3.real<<" "<<c3.img<<endl;
    return 0;
}