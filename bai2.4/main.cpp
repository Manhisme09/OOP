#include <bits/stdc++.h>

using namespace std;

class QuanLy{
private:
    string maql;
    string hoten;
public:
    void nhap();
    void xuat();
};
class May{
private:
    string mamay;
    string kieumay;
    string tinhtrang;
public:
    void nhap();
    void xuat();
};
class PhongMay{
private:
    string maphong;
    string tenphong;
    double dientich;
    QuanLy x;
    May *y;
    int n;
public:
    void nhap();
    void xuat();

};
void QuanLy::nhap(){
    cout<<"Nhap ma quan ly:";
    fflush(stdin);
    getline(cin,this->maql);
    cout<<"Nhap ho ten:";
    fflush(stdin);
    getline(cin,this->hoten);

}
void QuanLy::xuat(){
    cout<<setw(10)<<"Quan Ly:"<<setw(5)<<this->maql;
    cout<<setw(10)<<"Ho ten:"<<setw(5)<<this->hoten<<endl;
    cout<<"\n";
}
void May::nhap(){
    cout<<"Nhap ma may:";
    fflush(stdin);
    getline(cin,this->mamay);
    cout<<"Nhap kieu may:";
    fflush(stdin);
    getline(cin,this->kieumay);
    cout<<"Nhap tinh trang:";
    fflush(stdin);
    getline(cin,this->tinhtrang);

}
void May::xuat(){
    cout<<setw(10)<<this->mamay<<setw(10)<<this->kieumay<<setw(15)<<this->tinhtrang<<endl;
}
void PhongMay::nhap(){
    cout<<"Nhap ma phong:";
    fflush(stdin);
    getline(cin,this->maphong);
     cout<<"Nhap ten phong:";
    fflush(stdin);
    getline(cin,this->tenphong);
    cout<<"Nhap dien tinh:";
    cin>>this->dientich;
    x.nhap();
    y = new May[100];
    cout<<"Nhap so may:";
    cin>>n;
    for(int i=0;i<n;i++){
        y[i].nhap();
    }
}
void PhongMay::xuat(){
    cout<<setw(10)<<"\nMa Phong:"<<setw(5)<<this->maphong<<endl;
    cout<<setw(10)<<"Ten Phong:"<<setw(5)<<this->tenphong<<endl;
    cout<<setw(10)<<"Dien Tich:"<<setw(5)<<this->dientich<<" m2"<<endl;
    x.xuat();
    cout<<setw(10)<<"Ma may"<<setw(10)<<"Kieu may"<<setw(15)<<"Tinh trang"<<endl;
    for(int i=0;i<n;i++){
        y[i].xuat();
    }
}
int main()
{
    PhongMay p1;
    p1.nhap();
    p1.xuat();
    return 0;
}
