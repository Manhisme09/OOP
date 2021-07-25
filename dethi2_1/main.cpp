#include <bits/stdc++.h>

using namespace std;
int ucln(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
class PhanSo{
private:
    int tuso;
    int mauso;
public:
    PhanSo(){
        this->tuso=1;
        this->mauso=1;
    }
    PhanSo operator-();
    PhanSo operator~();
    PhanSo operator*();
    friend istream &operator>>(istream &is,PhanSo &obj);
    friend ostream &operator<<(ostream &os,PhanSo &obj);
};
istream &operator>>(istream &is,PhanSo &obj){
    cout<<"Nhap tu so:";
    is>>obj.tuso;
    cout<<"Nhap mau so:";
    is>>obj.mauso;
    return is;
}
ostream &operator<<(ostream &os,PhanSo &obj){
    os<<obj.tuso<<"/"<<obj.mauso;
}
PhanSo PhanSo::operator-(){
    PhanSo tg;
    tg.tuso=-this->tuso;
    tg.mauso=this->mauso;
    return tg;
}
PhanSo PhanSo::operator~(){
    PhanSo tg;
    tg.tuso=this->mauso;
    tg.mauso=this->tuso;
    return tg;
}
PhanSo PhanSo::operator*(){


    PhanSo tg;
    tg.tuso=tuso/ucln(tuso,mauso);
    tg.mauso=mauso/ucln(tuso,mauso);
    return tg;
}
int main()
{
    PhanSo a;
    cin>>a;
    /*
    cout<<a;
    a=-a;
    cout<<a;
    a=~a;
    cout<<a;
*/
    a=*a;
    cout<<a;



    //fstream f;
    //f.open("abc.txt",ios::out);
    //f<<a;
    return 0;
}
