#include <iostream>

using namespace std;

class PTBH{
private:
    double a;
    double b;
    double c;
public:
    PTBH(){
        this->a=0;
        this->b=0;
        this->c=0;
    }
    friend istream &operator>>(istream &is,PTBH &obj);
    friend ostream &operator<<(ostream &os,PTBH &obj);
    PTBH operator-(PTBH obj);
    double operator--();
};
istream &operator>>(istream &is,PTBH &obj){
    cout<<"\nNhap he so a:";
    is>>obj.a;
    cout<<"Nhap he so b:";
    is>>obj.b;
    cout<<"Nhap he so c:";
    is>>obj.c;
    return is;
}
ostream &operator<<(ostream &os,PTBH &obj){
    cout<<obj.a<<"x^2+"<<obj.b<<"x+"<<obj.c<<"=0"<<endl;
}
PTBH PTBH::operator-(PTBH obj){
    PTBH tg;
    tg.a=this->a-obj.a;
    tg.b=this->b-obj.b;
    tg.c=this->c-obj.c;
    return tg;
}
double PTBH::operator--(){
    double t;
    t=(this->a+this->b+this->c)/3;
    return t;
}
int main()
{
    PTBH P,Q,K;
    cout<<"Nhap ptrinh bac hai P:";
    cin>>P;
    cout<<P;
    cout<<"Nhap ptrinh bac hai Q:";
    cin>>Q;
    cout<<Q;
    K=P-Q;
    cout<<K;
    double T;
    T=--K;
    cout<<""<<T;
    return 0;
}
