#include <bits/stdc++.h>

using namespace std;

class NCC{
private:
    string maNCC;
    string tenNCC;
    string diachi;
public:
    void nhap();
    void xuat();
};
void NCC::nhap(){
    cout<<"Nhap ma NCC:";
    fflush(stdin);
    getline(cin,this->maNCC);
    cout<<"Nhap ten NCC:";
    fflush(stdin);
    getline(cin,this->tenNCC);
    cout<<"Nhap dia chi NCC:";
    fflush(stdin);
    getline(cin,this->diachi);

}
void NCC::xuat(){
    cout<<setw(15)<<"Ma NCC:"<<setw(10)<<this->maNCC<<setw(25)<<"Ten NCC:"<<setw(10)<<this->tenNCC<<endl;
    cout<<setw(15)<<"Dia chi:"<<setw(10)<<this->diachi<<endl;
    cout<<endl;
}
class Hang{
private:
    string tenhang;
    double dongia;
    int soluong;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};
void Hang::nhap(){
    cout<<"Nhap ten hang:";
    fflush(stdin);
    getline(cin,this->tenhang);
    cout<<"Nhap don gia:";
    cin>>this->dongia;
    cout<<"Nhap so luong:";
    cin>>this->soluong;
}
void Hang::xuat(){
    cout<<setw(15)<<this->tenhang<<setw(10)<<this->dongia<<setw(10)<<this->soluong<<setw(15)<<this->dongia*this->soluong<<endl;
}
class Phieu{
private:
    string maphieu;
    string ngaylap;
    NCC x;
    Hang *a;
    int n;
public:
    void nhap();
    void xuat();
};
void Phieu::nhap(){
    cout<<"Nhap ma phieu:";
    fflush(stdin);
    getline(cin,this->maphieu);
    cout<<"Nhap ngay lap:";
    fflush(stdin);
    getline(cin,this->ngaylap);
    x.nhap();
    cout<<"Nhap so san pham:";
    cin>>this->n;
    a = new Hang[100];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
}
void Phieu::xuat(){
    cout<<setw(15)<<"Ma Phieu"<<setw(10)<<this->maphieu<<setw(25)<<"Ngay Lap"<<setw(10)<<this->ngaylap<<endl;
    x.xuat();
    cout<<setw(15)<<"Ten SP"<<setw(10)<<"Don Gia"<<setw(10)<<"So Luong"<<setw(15)<<"Thanh Tien"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    double T=0;
    for(int i=0;i<n;i++){
        T+=a[i].dongia*a[i].soluong;
    }
    cout<<setw(15)<<"Cong thanh tien:"<<T;
    Hang p;
    cout<<"\nNhap hang can chen:"<<endl;
    p.nhap();
    int k;
    cout<<"Nhap vi tri chen:";
    cin>>k;
    for(int i=n;i>k;i--){
        a[i]=a[i-1];
    }
    a[k]=p;
    n++;
    cout<<endl;
     cout<<setw(15)<<"Ten SP"<<setw(10)<<"Don Gia"<<setw(10)<<"So Luong"<<setw(15)<<"Thanh Tien"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
}

int main()
{
    Phieu p;
    p.nhap();
    p.xuat();
    return 0;
}
