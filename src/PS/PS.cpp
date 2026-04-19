
#include "PS.h"
#include<iostream>
using namespace std;

void PS::NhapPS(){
	cin >> this->tu >> this->mau;
}
void PS::XuatPS(){
	cout << tu << "/" << mau;
}
int PS::UCLN(){
	int a, b;
	if (b == 0){
		return a;
	}
	return UCLN(b, a % b);
}
void PS::RutGon(PS &p){
	int ucln = UCLN(abs(p.tu), abs(p.mau));
	p.tu /= ucln;
	p.mau /= ucln;
	if(p.mau < 0){
		p.tu = -p.tu;
		p.mau = -p.mau;
	}
}
PS PS::TongPS(PS& p){
	PS kq;
	kq.tu = (tu * p.mau) + (mau * p.tu);
	kq.mau = mau * p.mau;

}
