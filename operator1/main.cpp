#include<iostream>
using namespace std;
class SP{
	private:
		float PT,PA;
	public:
		SP(float a,float b)
		{
			PT=a;
			PA=b;
		}
		SP(){
			PT=0.0;
			PA=0.0;

		}
	SP operator+() {
            SP z;
            z.PA = -PA;
            z.PT = -PT;
            return z;
    }
  void xuat(){
  	cout<<PT<<"+"<<PA<<"i"<<endl;
  }
};
int main(){

SP x(1,2);
x.xuat();
x=+x;
x.xuat();
}
