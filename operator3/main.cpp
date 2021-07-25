#include<bits/stdc++.h>
using namespace std;

class PhanSo{
    private:
        double Tuso;
        double Mauso;
    public:
        PhanSo(){
            this->Tuso=0;
            this->Mauso=1;
        }
        PhanSo(double a,double b){
            this->Tuso=a;
            this->Mauso=b;
        }
        void nhap(){

            cout << "Nhap tu so: ";
            cin >> this->Tuso;
            cout << "Nhap mau so: ";
            cin >> this->Mauso;
        }
        void xuat(){
            cout<<this->Tuso<<"/"<<this->Mauso;
        }
        PhanSo operator*(PhanSo b);
        double operator~ ();
        friend istream& operator>>(istream& a,PhanSo &b);
        friend ostream& operator<<(ostream& a,PhanSo &b);

};
PhanSo PhanSo::operator*(PhanSo b){
            PhanSo c;
            c.Tuso=this->Tuso*b.Tuso;
            c.Mauso=this->Mauso*b.Mauso;
            return c;
}
double PhanSo::operator~ (){
            double d;
            d=(this->Tuso/this->Mauso);
            return d;
}
istream& operator>>(istream& a,PhanSo& b){
    cout<<"Nhap tu so:";
    a>>b.Tuso;
    cout<<"Nhap mau so:";
    a>>b.Mauso;
    return a;
}
ostream& operator<<(ostream& a,PhanSo &b){
    a<<b.Tuso<<"/"<<b.Mauso;
    return a;
}
int main()
{
    PhanSo a,b,c;
    double d;
    cout<<"Nhap phan so a"<<endl;
    cin>>a;
    cout<<"Nhap phan so b"<<endl;
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    c=a*b;
    cout<<c<<endl;
    d=~c;
    cout<<d<<endl;
	ofstream outfile;
	outfile.open("PhanSo.txt");
	outfile<<c<<endl;
	cout<<"\nGhi file thanh cong:";
    return 0;
}
