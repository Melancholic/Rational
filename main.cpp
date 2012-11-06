#include"rational.h"
#include<iostream>

void print(rational a){
	if(a.get_chisl()==0)std::cout<<"\n 0 ";else{
		if(a.get_chisl()==a.get_znam())std::cout<<"\n 1";else{
			if(a.get_znam()==1)std::cout<<"\n "<<a.get_chisl();else{
 			 std::cout<<"\n "<<a.get_chisl()<<"/"<<a.get_znam();
			}
		}
	}
}

int main(){
	rational a;
	rational b(4,16);
	rational c;
	print(a);
	print(b);
	a.set(1,2);
	std::cout<<"\nstart";
	print(a);
	c=b-a;
	print(c);
	c=b+a;
	print(c);
	c=b*a;
	print(c);
	print(b/a);
	print(a/b);
	a+=b;
	print(a);
	b-=a;
	print(b);
	c*=a;
	print(c);
	b/=c;
	print(b);
	b.inversy();
	print(b);
	c.set_chisl(c.get_znam());
	print(c);
	std::cout<<"\nend\n";
	return 0;
}
