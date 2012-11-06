#ifndef RATIONAL_H
#define RATIONAL_H


class rational{
	int znam, chisl;
    double val;
	public:
	rational();
	rational(int a, int b);
	void operator=(rational a);
	void operator=(rational &a);
	rational operator+(rational &a);
	rational operator-(rational &a);
	rational operator*(rational &a);
	rational operator/(rational &a);
	void inversy();
  void operator+=(rational &a);
  void operator-=(rational &a);
  void operator*=(rational &a);
	void operator/=(rational &a);
	void set(int a, int b);
	void set_chisl(int a);
	void set_znam(int b);
	void cutback();
	int get_znam();
	int get_chisl();
    double get_val();
};

#endif
