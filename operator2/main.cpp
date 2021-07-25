#include <iostream>
#include<iomanip>
using namespace std;

class DIEM{
    private:
        double x,y,z;
    public:
        DIEM(){
            this->x=0;
            this->y=0;
            this->z=0;
        }
        DIEM(double x,double y,double z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        DIEM operator + (DIEM M2){
            DIEM M;
            M.x=x+M2.x;
            M.y=y+M2.y;
            M.z=z+M2.z;
            return M;
        }
        DIEM operator - (DIEM M2){
            DIEM M;
            M.x=x-M2.x;
            M.y=y-M2.y;
            M.z=z-M2.z;
            return M;
        }
        friend istream& operator>>(istream& a,DIEM &b);
        friend ostream& operator<<(ostream& a,DIEM &b);

};
istream& operator>>(istream& a,DIEM &b){
        cout<<"Nhap x : ";
		a>>b.x;
		cout<<"Nhap y: ";
		a>>b.y;
		cout<<"Nhap z : ";
		a>>b.z;
		return a;
}
ostream& operator<<(ostream& a,DIEM &b){
        a<<b.x<<setw(10)<<b.y<<setw(10)<<b.z<<endl;
        return a;
}
int main()
{
    DIEM m(1,2,3),n,t,k;
    cout<<" toa do diem m:";cout<<m;
    cout<<"Nhap toa do diem n:";
    cin>>n;
    cout<<" toa do diem n:";cout<<n;
    t=m+n;
    cout<<t;
    k=m-n;
    cout<<k;
    return 0;
}

/*
#include <iostream>
#include <math.h>
using namespace std;
class HT{
  private:
    double r;
  public:
    HT(){
      this->r = 2;
    }
    HT(double r){
		this->r = r;
	}
    double dienTich(){
      return M_PI * r * r;
    }
  friend ostream& operator <<(HT ht, ostream &os);

  HT operator + (HT a){
    HT c;
    c.r = this->r * this->r + a.r + a.r;
    return c;
  }

  HT operator - (HT a){
    HT c;
    c.r = this->r * this->r - a.r + a.r;
    return c;
  }


};

ostream& operator<<(HT ht, ostream &os){
  os<< "dt hinh tron: " << ht.dienTich();
}

int main(){


  return 0;
}
*/
