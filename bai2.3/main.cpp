#include<bits/stdc++.h>

using namespace std;

class Hang{
private:
    string mahang;
    string tenhang;
    double dongia;
public:
    void nhap();
    void xuat();
};
class Phieu{
private:
    string maphieu;
    Hang *a;
    int n;
public:
    void nhap();
    void xuat();
};
void Hang::nhap(){

        cout<<"Nhap ma hang:";
        fflush(stdin);
        getline(cin,this->mahang);
        cout<<"Nhap ten hang:";
        fflush(stdin);
        getline(cin,this->tenhang);
        cout<<"Nhap don gia:";
        cin>>this->dongia;

}
void Hang::xuat(){
    cout<<setw(10)<<this->mahang<<setw(10)<<this->tenhang<<setw(10)<<this->dongia<<endl;
}
void Phieu::nhap(){
    cout<<"Nhap ma phieu:";
    fflush(stdin);
    getline(cin,this->maphieu);
    a=new Hang[100];
    cout<<"Nhap so mat hang:";
    cin>>n;
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
}
void Phieu::xuat(){
    cout<<setw(10)<<"Ma Phieu:"<<setw(5)<<this->maphieu<<endl;
    cout<<setw(10)<<"Ma Hang"<<setw(10)<<"Ten hang"<<setw(10)<<"Don Gia"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
}
int main()
{
    Phieu p1;
    p1.nhap();
    p1.xuat();
    return 0;
}
