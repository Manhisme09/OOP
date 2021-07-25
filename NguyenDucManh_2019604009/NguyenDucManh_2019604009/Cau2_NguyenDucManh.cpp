#include <bits/stdc++.h>

using namespace std;

class PTB2{
private:
    double a, b, c;
public:
    PTB2()
    {
        a = 1;
        b = 1;
        c = 1;
    }
    PTB2(double a, double b, double c)
    {
       this->a=a;
       this->b=b;
       this->c=c;
    }
    PTB2 operator-(PTB2 obj);
    friend istream& operator>>(istream &is, PTB2 &obj);
    friend ostream& operator<<(ostream &os, PTB2 obj);
};

PTB2 PTB2::operator-(PTB2 obj)
{
    PTB2 Z;
    Z.a = a - obj.a;
    Z.b = b - obj.b;
    Z.c = c - obj.c;
    return Z;
}

istream& operator>>(istream &is, PTB2 &obj)
{
    cout << "Nhap he so a = "; is >> obj.a;
    cout << "Nhap he so b = "; is >> obj.b;
    cout << "Nhap he so c = "; is >> obj.c;
    return is;
}

ostream& operator<<(ostream &os, PTB2 obj)
{
   os<<obj.a<<"x^2 + "<<obj.b<<"x"<<"+"<<obj.c<<"=0"<<endl;
}

int main()
{
    PTB2 P, Q;
    cout << "Nhap he so phuong trinh P: " << endl;
    cin >> P;
    cout << "\nNhap he so phuong trinh Q: " << endl;
    cin >> Q;

    cout << "\nPhuong trinh K là hieu cua P, Q la: " << endl;
    PTB2 K;
    K = P - Q;
    cout << K;




}
