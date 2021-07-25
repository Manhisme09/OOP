#include<iostream>
#include<iomanip>

using namespace std;

class SanPham{
	private:
		string masp;
		string tensp;
		string ngaysx;
		double trongluong;
		string mausac;
	public:
		void nhap();
		void xuat();
};
class HangDienTu : public SanPham{
	private:
		double congsuat;
		string dongdiensd;
	public:
		void nhap();
		void xuat();	
		friend void mintrongluong(HangDienTu *a,int n);
};
void SanPham::nhap(){
	cout<<"Nhap ma san pham:";
	fflush(stdin);
	getline(cin,this->masp);
	cout<<"Nhap ten san pham:";
	getline(cin,this->tensp);
	cout<<"Nhap ngay sx:";
	getline(cin,this->ngaysx);
	cout<<"Nhap trong luong:";
	cin>>this->trongluong;
	cout<<"Nhap mau sac:";
	fflush(stdin);
	getline(cin,this->mausac);
	
}
void SanPham::xuat(){
	cout<<setw(10)<<this->masp<<setw(10)<<this->tensp<<setw(10)<<this->ngaysx<<setw(10)<<this->trongluong<<setw(10)<<this->mausac;
}
void HangDienTu::nhap(){
	SanPham::nhap();
	cout<<"Nhap cong suat:";
	cin>>this->congsuat;
	cout<<"Nhap dong dien su dung:";
	fflush(stdin);
	getline(cin,this->dongdiensd);
}
void HangDienTu::xuat(){
	SanPham::xuat();
	cout<<setw(10)<<this->congsuat<<setw(10)<<this->dongdiensd<<endl;
}
//void HangDienTu::mintrongluong(){
//	
//}
int main(){
	HangDienTu h1;
	int n;
	cout<<"Nhap n:";
	cin>>n;
	HangDienTu *a = new HangDienTu[n];
	for(int i=0;i<n;i++){
		a[i].nhap();	
	}
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
    return 0;
}

