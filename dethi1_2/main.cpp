#include <iostream>

using namespace std;

class HHCN{
private:
    double cdai;
    double crong;
    double ccao;
public:
    HHCN(){
        this->ccao=0;
        this->cdai=0;
        this->crong=0;
    }
    HHCN(double cdai,double crong,double ccao){
        this->ccao=ccao;
        this->cdai=cdai;
        this->crong=crong;
    }
    double theTich(){
        return cdai*crong*ccao;
    }
    friend ostream &operator<<(ostream &os,HHCN &obj);
    HHCN operator +(double d);
};
ostream &operator<<(ostream &os,HHCN &obj){
    cout<<"The tich la:";
    os<<obj.theTich();
}
HHCN HHCN::operator+(double d){
    HHCN tg;
    tg.ccao=this->ccao+d;
    tg.cdai=this->cdai+d;
    tg.crong=this->crong+d;
    return tg;
}
int main()
{
    HHCN a(3,4,5),b;
    cout<<a;
    double d;
    cout<<"Nhap d:";
    cin>>d;
    b=a+d;
    cout<<b;
    return 0;
}
