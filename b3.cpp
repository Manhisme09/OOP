#include<iostream>
#include<iomanip>
using namespace std;

class SinhVien{
	protected:
		string hoten;
		int sobaodanh;
	public:
		void nhap();
		void xuat();
			
	
};
class DiemThi{
	protected:
		int ketquamon1;
		int ketquamon2;
	public:
		void nhap();
		void xuat();	
	
};
class KetQua : public SinhVien,public DiemThi{
	public:
		void nhap();
		void tongDiem();
};
void SinhVien::nhap(){
	cout<<"Nhap ho ten:";
	fflush(stdin);
	getline(cin,this->hoten);
	cout<<"Nhap sbd:";
	cin>>this->sobaodanh;
	
}
void SinhVien::xuat(){
	cout<<setw(10)<<this->hoten<<setw(10)<<this->sobaodanh;
}
void DiemThi::nhap(){
	cout<<"Nhap diem thi 1:";
	cin>>this->ketquamon1;
	cout<<"Nhap diem thi 2:";
	cin>>this->ketquamon2;
}
void DiemThi::xuat(){
	cout<<setw(10)<<this->ketquamon1<<setw(10)<<this->ketquamon2;
}
void KetQua::nhap(){
	SinhVien::nhap();
	DiemThi::nhap();
}
void KetQua::tongDiem(){
	SinhVien::xuat();
	DiemThi::xuat();
	cout<<setw(10)<<this->ketquamon1+this->ketquamon2;
}
int main(){
	KetQua *a =new KetQua[10];
	for(int i=0;i<2;i++){
		a[i].nhap();	
	}
	for(int i=0;i<2;i++){
		a[i].tongDiem();
	}
    return 0;
}

