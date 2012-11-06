#include"rational.h"
#define value val=chisl/znam
rational::rational(){
	chisl=0;
	znam=1;
	value;
	cutback();
}

rational::rational(int a, int b){
	chisl=a;
	if(b!=0)znam=b;
	else chisl=1;
	value;
	cutback();
}
void rational::cutback(){
	bool s=false;
	while(!s){
		if (chisl==0){
			value;
			break;
		}
		if(chisl==znam){
			chisl=1;
			znam=1;
			value;
			break;
		}
		if (chisl%znam==0){
			chisl=chisl/znam;
			znam=1;
			value;
			break;
		}
		if(znam%chisl==0 && chisl!=1){
			znam=znam/chisl;
			chisl=chisl/chisl;
			value;
			continue;
		}
		if(chisl % 2 ==0 && znam % 2==0){
			chisl/=2;
			znam/=2;
			value;
			continue;
		}
	s=true;
	}
} 

void rational::operator=(rational a){
	znam=a.get_znam();
	chisl=a.get_chisl();
	value;
}

void rational::operator=(rational &a){ 
  znam=a.get_znam();
  chisl=a.get_chisl();
  value;
}


void rational::operator+=(rational &a){
  if(znam!=a.get_znam()){
		znam*=a.get_znam();
  	chisl*=a.get_znam();
	}
	chisl+=a.get_chisl();
  value;
	cutback();
}

void rational::operator-=(rational &a){
  if(znam!=a.get_znam()){
		znam*=a.get_znam();
  	chisl*=a.get_znam();
	}
  chisl-=a.get_chisl();
  value;
  cutback();
}

void rational::operator*=(rational &a){
  znam*=a.get_znam();
  chisl*=a.get_chisl();
  value;
	cutback();
}

void rational::operator/=(rational &a){
  znam*=a.get_chisl();
  chisl*=a.get_znam();
  value;
  cutback();
}

rational rational::operator+(rational &a){
  rational tmp;
	tmp.set_znam(znam*a.get_znam());
	tmp.set_chisl(chisl*a.get_znam()+a.get_chisl()*znam);
	tmp.cutback();
	return tmp;
}

rational rational::operator-(rational &a){
  rational tmp;
  tmp.set_znam(znam*a.get_znam());
  tmp.set_chisl(chisl*a.get_znam()-a.get_chisl()*znam);
	tmp.cutback();
  return tmp;
}

rational rational::operator*(rational &a){
  rational tmp;
  tmp.set_znam(znam*a.get_znam());
  tmp.set_chisl(chisl*a.get_chisl());
  tmp.cutback();
  return tmp;
}

rational rational::operator/(rational &a){
  rational tmp;
  tmp.set_znam(znam*a.get_chisl());
  tmp.set_chisl(chisl*a.get_znam());
  tmp.cutback();
  return tmp;
}

void rational::set(int a, int b){
	chisl=a;
	znam=b;
	cutback();
}

void rational::set_chisl(int a){
  chisl=a;
  cutback();
}

void rational::set_znam(int b){
  znam=b;
  cutback();
}

void rational::inversy(){
	int tmp;
	tmp=znam;
	znam=chisl;
	chisl=tmp;
}

int rational::get_znam(){
	return znam;
}

int rational::get_chisl(){
	return chisl;
}
double rational::get_val(){
	return val;
}

