#include <bits/stdc++.h>

using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    void nhap();
    void xuat();

};
class NhanSu{
private:
    int manhansu;
    string hoten;
    Date ns;
public:
    void nhap();
    void xuat();
};
void Date::nhap(){
    cout<<"Nhap ngay:";
    cin>>this->day;
    cout<<"Nhap month:";
    cin>>this->month;
    cout<<"Nhap year:";
    cin>>this->year;
}
void Date::xuat(){
    cout<<this->day<<"/"<<this->month<<"/"<<this->year;
}
void NhanSu::nhap(){
    cout<<"Nhap ma nhan su:";
    cin>>this->manhansu;
    cout<<"Nhap ho ten:";
    fflush(stdin);
    getline(cin,this->hoten);
    ns.nhap();
}
void NhanSu::xuat(){
    cout<<setw(15)<<"Ma nhan su"<<setw(15)<<"Ho ten"<<setw(15)<<"Ngay sinh"<<endl;
    cout<<setw(15)<<this->manhansu<<setw(15)<<this->hoten<<setw(10);
    ns.xuat();
}
int main()
{
    NhanSu n1;
    n1.nhap();
    n1.xuat();
}
