#include <iostream>

using namespace std;

class NhiThuc{
private:
    int a;
    int b;
public:
    NhiThuc(){
        this->a=1;
        this->b=1;
    }
    NhiThuc(int a,int b){
        this->a=a;
        this->b=b;
    }
    ~NhiThuc(){
        this->a=0;
        this->b=0;
    }
    NhiThuc operator~();
    friend istream &operator>>(istream &is,NhiThuc &obj);
    friend ostream &operator<<(ostream &os,NhiThuc &obj);
};
istream &operator>>(istream &is,NhiThuc &obj){
    cout<<"Nhap so a:";
    is>>obj.a;
    cout<<"Nhap so b:";
    is>>obj.b;
    return is;

}
ostream &operator<<(ostream &os,NhiThuc &obj){
    os<<obj.a<<"x+"<<obj.b;
}

NhiThuc NhiThuc::operator~(){
    NhiThuc tg;
    tg.a=-this->a;
    tg.b=-this->b;
    return tg;
}
int main()
{
    NhiThuc a;
    cout<<"Nhap nhi thuc:"<<endl;
    cin>>a;
    a=~a;
    cout<<a;
    return 0;
}
