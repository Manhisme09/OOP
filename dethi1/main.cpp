#include <bits/stdc++.h>

using namespace std;
class SACHGK;
class IDSACH{
protected:
    string tensach;
    string masach;
public:
    void nhap();
    void xuat();
};
void IDSACH::nhap(){
    cout<<"Nhap ma sach:";
    fflush(stdin);
    getline(cin,this->masach);
    cout<<"Nhap ten sach:";
    fflush(stdin);
    getline(cin,this->tensach);
}
void IDSACH::xuat(){
    cout<<setw(15)<<this->masach<<setw(15)<<this->tensach;
}
class TacGia{
private:
    string tentacgia;
    string diachitg;
public:
    friend class SACHGK;
    friend void xoa(SACHGK *a,int &n);
};
class NXB{
private:
    string tenNXB;
    string diachiNXB;
public:
    friend class SACHGK;
    friend void hien_thi1(SACHGK *a,int n);
};
class SACHGK : public IDSACH{
private:
    TacGia x;
    NXB y;
public:
    void nhap();
    void xuat();
    friend void hien_thi1(SACHGK *a,int n);
    friend void hien_thi2(SACHGK *a,int n);
    friend void chen(SACHGK *a,int &n,SACHGK x,int k);
    friend void xoa(SACHGK *a,int &n);
};
void SACHGK::nhap(){
    IDSACH::nhap();
    cout<<"Nhap ten tac gia:";
    fflush(stdin);
    getline(cin,this->x.tentacgia);
    cout<<"Nhap dia chi tac gia:";
    fflush(stdin);
    getline(cin,this->x.diachitg);
    cout<<"Nhap ten NXB:";
    fflush(stdin);
    getline(cin,this->y.tenNXB);
    cout<<"Nhap dia chi NXB:";
    fflush(stdin);
    getline(cin,this->y.diachiNXB);
    cout<<endl;
}
void SACHGK::xuat(){
    IDSACH::xuat();
    cout<<setw(15)<<this->x.tentacgia<<setw(15)<<this->x.diachitg<<setw(15)<<this->y.tenNXB<<setw(15)<<this->y.diachiNXB<<endl;
}
void display(){
    cout<<setw(15)<<"Ten Sach"<<setw(15)<<"Ma Sach"<<setw(15)<<"Ten TG"<<setw(15)<<"DiaChiTG"<<setw(15)<<"Ten NXB"<<setw(15)<<"DCNXB"<<endl;
}
void hien_thi1(SACHGK *a,int n){
    for(int i=0;i<n;i++){
        if(a[i].y.tenNXB=="Giao Duc"){
            a[i].xuat();
        }
    }
}
void hien_thi2(SACHGK *a,int n){
    for(int i=0;i<n;i++){
        if(a[i].tensach=="LTHDT"){
            a[i].xuat();
        }
    }
}
void chen(SACHGK *a,int &n,SACHGK x,int k){
    for(int i=n;i>k;i--){
        a[i]=a[i-1];
	}
	a[k]=x;
	n++;

}
// 0 1 2
void xoa(SACHGK *a,int &n){
    int vt;
    for(int i=0;i<n;i++){
        if(a[i].x.tentacgia=="Manh"){
            vt=i;
        }
    }
    for(int i=vt;i<n;i++){
        a[i]=a[i+1];
    }
    n--;

    for(int i=0;i<n;i++){
        a[i].xuat();
    }
}
int main()
{
    int n;
    cout<<"Nhap so sach:";
    cin>>n;
    SACHGK *a = new SACHGK[100];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    display();
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    cout<<"Hien thi sach cua nha xuat ban Giao Duc:"<<endl;
    display();
    hien_thi1(a,n);
    cout<<"\nHien thi sach LTHDT:"<<endl;
    display();
    hien_thi2(a,n);
    /*
    cout<<"Nhap thong tin ssach can chen:"<<endl;
    SACHGK x;
    x.nhap();
    int k;
    cout<<"Nhap vi tri can chen:";
    cin>>k;
    cout<<"sau khi chen:"<<endl;
    chen(a,n,x,k);
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
    */
    cout<<"\nsau khi xoa:"<<endl;
    xoa(a,n);
    return 0;
}
