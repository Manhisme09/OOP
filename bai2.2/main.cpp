#include <bits/stdc++.h>

using namespace std;

class NSX{
private:
    string mansx;
    string tennsx;
    string dcnsx;
public:
    void nhap();
    void xuat();

};
class Hang{
private:
    string mahang;
    string tenhang;
    NSX x;
public:
    void nhap();
    void xuat();
};
void NSX::nhap(){
    cout<<"Nhap ma nha san xuat:";
    fflush(stdin);
    getline(cin,this->mansx);
    cout<<"Nhap ten nha san xuat:";
    fflush(stdin);
    getline(cin,this->tennsx);
    cout<<"Nhap dia chi nha san xuat:";
    fflush(stdin);
    getline(cin,this->dcnsx);
}
void NSX::xuat(){

    cout<<setw(15)<<this->mansx<<setw(15)<<this->tennsx<<setw(15)<<this->dcnsx<<endl;
}
void Hang::nhap(){
    cout<<"Nhap ma hang:";
    fflush(stdin);
    getline(cin,this->mahang);
    cout<<"Nhap ten hang:";
    fflush(stdin);
    getline(cin,this->tenhang);
    x.nhap();
}
void Hang::xuat(){
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Ma NSX"<<setw(15)<<"Ten NSX"<<setw(15)<<"DC NSX"<<endl;
    cout<<setw(15)<<this->mahang<<setw(15)<<this->tenhang<<setw(15);
    x.xuat();
}
int main()
{
    Hang h1;
    h1.nhap();
    h1.xuat();
}
