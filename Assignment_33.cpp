#include<iostream>
#include<math.h>
#include<typeinfo>
using namespace std;

/*1.
class shape{
    protected:
    double x,y,area;
    public:
    void get_data(int a, int b=0){x=a;y=b;}
    virtual void display_area()=0;
};
class Rectangle:public shape{
    public:
    void display_area(){cout<<x*y<<endl;}
};
class Triangle:public shape{
    public:
    void display_area(){cout<<(x*y)/2<<endl;}
};
int main()
{
    Rectangle r1;
    r1.get_data(10,20);
    r1.display_area();
    Triangle t1;
    t1.get_data(10,20);
    t1.display_area();
}
*/

/*2.
class shape{
    protected:
    double x,y,area;
    public:
    void get_data(int a, int b=0){x=a;y=b;}
    virtual void display_area()=0;
};
class Rectangle:public shape{
    public:
    void display_area(){cout<<x*y<<endl;}
};
class Triangle:public shape{
    public:
    void display_area(){cout<<(x*y)/2<<endl;}
};
class circle:public shape{
    public:
    void display_area(){cout<<3.14*x*x;}
};
int main()
{
    Rectangle r1;
    Triangle t1;
    circle c1;
    r1.get_data(10,20);
    t1.get_data(10,20);
    c1.get_data(5);
    r1.display_area();
    t1.display_area();
    c1.display_area();
}
*/

/*3.
class A{
    int x;
    public:
    A(){}
    A(int a){x=a;}
    void show(){cout<<x<<endl;}
    friend void swap(A&,A&);
};
void swap(A *a1,A *a2){
    A temp;
    temp=*a1;
    *a1=*a2;
    *a2=temp;
    }
int main()
{
    A a1(10),a2(20);
    a1.show();
    a2.show();
    swap(&a1,&a2);
    a1.show();
    a2.show();
    
}*/

/*4.
class shape{
    protected:
    double x,y;
    public:
    void get_data(int a, int b=0){x=a;y=b;}
    virtual void display_area()=0;
};
class Rectangle:public shape{
    public:
    void display_area(){cout<<x*y<<endl;}
};
class Triangle:public shape{
    public:
    void display_area(){cout<<(x*y)/2<<endl;}
};
int main()
{
    Rectangle r1;
    r1.get_data(10,20);
    r1.display_area();
    Triangle t1;
    t1.get_data(10,20);
    t1.display_area();
}*/

/*5.
class Photon{
    protected:
    double wavelength;
    Photon(double wavelength){
        this->wavelength = wavelength/pow(10,-10);
    }
};
class Calculate_photonEnergy:public Photon{
    private:
    double E;
    public:
    Calculate_photonEnergy(double value_in_angstrom):Photon(value_in_angstrom)
    void calcphoton(){
    E=(6.626*pow(10,-34))*3*(pow(10,8)))/wavelength;
    cout<<"Value of Photon Energy is : "<<E<<endl;
    }
};
int main()
{
    Calculate_photonEnergy p1=231.145;
    p1.calcphoton();    
}*/

/*6.
class shape{
    protected:
    double x,y,area;
    public:
    void get_data(int a, int b=0){x=a;y=b;}
    virtual void display_area()=0;
};
class Rectangle:public shape{
    public:
    void display_area(){cout<<x*y<<endl;}
};
class Triangle:public shape{
    public:
    void display_area(){cout<<(x*y)/2<<endl;}
};
class circle:public shape{
    public:
    void display_area(){cout<<3.14*x*x;}
};
int main()
{
    Rectangle r1;
    Triangle t1;
    circle c1;
    r1.get_data(10,20);
    t1.get_data(10,20);
    c1.get_data(5);
    r1.display_area();
    t1.display_area();
    c1.display_area();
}*/

/*7.
class Matrix{
    protected:
    int a,b,c,d;
    public:
    void inputMatrix()
    {cin>>a>>b>>c>>d;}
};
class Determinant:public Matrix{
    public:
    void calculate()
    {cout<<"Determinant is : "(a*d-b*c)<<endl;}
};
int main()
{
    Determinant d1;
    d1.inputMatrix();
    d1.calculate();
}*/

/*8.
class Proof{
    protected:
    int a,b;
    public:
    void getdata()
    {cin>>a>>b;}
};
class compute:public Proof{
    double x;
    public:
    void display()
    {
        x=sqrt(pow(a,2)+pow(b,2));
        if(x == (int)x)
        cout<<"Right-Angled Triangle";
        else
        cout<<"Not a Right Angled Triangle";
    }
    
};

int main()
{
    compute c1;
    c1.getdata();
    c1.display();
}*/

/*9.
class Volume{
    protected:
    double x,y;
    public:
    void getdata(int a,int b=0){x=a;y=b;}
    virtual void display_volume()=0;
};
class Cube:public Volume{
    public:
    void display_volume()
    {cout<<(6*x*x)<<endl;}
};
class Sphere:public Volume
{
    public:
    void display_volume()
    {cout<<(4*3.14*x*x)<<endl;}
};
int main()
{
    Sphere s1;
    s1.getdata(3);
    s1.display_volume();
}*/

/*10.
class shape{
    protected:
    double x,y,area;
    public:
    void get_data(int a, int b=0){x=a;y=b;}
    virtual void display_area()=0;
};
class Square:public shape{
    public:
    void display_area()
    {cout<<x*x*x*x<<endl;}
};
class Rectangle:public shape{
    public:
    void display_area
    {cout<<"Area of Rectangle is "<<x*y<<endl;}
};
int main()
{
    Square s1;
    s1.get_data(3);
    s1.display_area();
}*/

