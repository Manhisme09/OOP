#include <bits/stdc++.h>

using namespace std;

class DonVi{
private:
    string madv;
    string tendv;
public:
    void nhap();
    void xuat();
};
void DonVi::nhap(){
    cout<<"Nhap ma don vi:";
    fflush(stdin);
    getline(cin,this->madv);
    cout<<"Nhap ten don vi:";
    fflush(stdin);
    getline(cin,this->tendv);
}
void DonVi::xuat(){
    cout<<setw(15)<<"Ma don vi:"<<setw(10)<<this->madv<<setw(20)<<"Ten don vi:"<<setw(10)<<this->tendv<<endl;
}
class NhanSu{
private:
    string mans;
    string tenns;
    double hesoluong;
    int luong;
public:
    void nhap();
    void xuat();
};
void NhanSu::nhap(){
    cout<<"\nNhap ma nhan su:";
    fflush(stdin);
    getline(cin,this->mans);
    cout<<"Nhap ten nhan su:";
    fflush(stdin);
    getline(cin,this->tenns);
    cout<<"Nhap he so luong:";
    cin>>this->hesoluong;
    cout<<"Nhap luong:";
    cin>>this->luong;
}
void NhanSu::xuat(){
    cout<<setw(15)<<this->mans<<setw(15)<<this->tenns<<setw(15)<<this->hesoluong<<setw(15)<<this->luong<<endl;
}
class BangLuong{
private:
    string ngaylap;
    string nguoilap;
    DonVi y;
    NhanSu *a;
    int n;
public:
    void nhap();
    void xuat();
};
void BangLuong::nhap(){
    cout<<"Nhap ngay lap:";
    fflush(stdin);
    getline(cin,this->ngaylap);
    cout<<"Nhap nguoi lap:";
    fflush(stdin);
    getline(cin,this->nguoilap);
    y.nhap();
    cout<<"Nhap so nhan su:";
    cin>>this->n;
    a = new NhanSu[100];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }

}
void BangLuong::xuat(){
    cout<<setw(25)<<"\n-----BANG LUONG THANG 6/2017-------"<<endl;
    cout<<setw(15)<<"Ngay lap:"<<setw(10)<<this->ngaylap<<setw(20)<<"Nguoi lap:"<<setw(10)<<this->nguoilap<<endl;
    y.xuat();
    cout<<endl;
    cout<<setw(15)<<"Ma nhan su:"<<setw(15)<<"Ten nhan su"<<setw(15)<<"He so luong"<<setw(15)<<"Luong"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }

}
int main()
{
    BangLuong m;
    m.nhap();
    m.xuat();
    return 0;
}

