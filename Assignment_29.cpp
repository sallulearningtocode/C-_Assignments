#include<iostream>
using namespace std;
/*1.Write a C++ Program to convert primitive type to Complex Type.a
class Complex{
    private:
    int real;
    public:
    Complex(){}
    Complex(int x){real=x;}
    void show(){cout<<"Real Part is - "<<real<<endl;}
};

int main()
{

    Complex c1;
    int x=5;
    c1=x;
    c1.show();
    return 0;
}*/

/*2.Write a C++ Program to Convert Complex Type to Primitive Type
class Complex{
    private:
    int real,imag;
    public:
    Complex(){}
    Complex(int x){real=x;}
    void show(){cout<<"Real Part is - "<<real<<endl;}
    void setdata(int x, int y){real=x;imag=y;}
    operator int(){return imag;}
};

int main()
{
    Complex c1;
    c1.setdata(3,4);
    int x;
    x=c1;
    cout<<x<<endl;
    return 0;
}*/

/*3.Create a Product Class and Convert Product Type to Item 
    Type Using Constructor
class Product
{
    private:
    int p1,p2;
    public:
    void setdata(int a, int b){p1=a;p2=b;}
    int getp1(){return p1;}
    int getp2(){return p2;}
};

class Item{
    private:
    int i1,i2;
    public:
    Item(){}
    Item(Product x){
        i1=x.getp1();
        i2=x.getp2();
    }
    void show(){cout<<i1<<" "<<i2;}

};

int main()
{
    Item i1;
    Product p1;
    p1.setdata(3,4);
    i1=p1;
    i1.show();
    return 0;
}*/

/*4.Create Product class and convert Product type to item type using casting operator
class Item{
    public:
    int i1,i2;
    Item(){}
    void show(){cout<<i1<<" "<<i2<<endl;}
};
class Product
{
    private:
    int p1,p2;
    public:
    void setdata(int a, int b){p1=a;p2=b;}
    operator Item()
    {
        Item temp;
        temp.i1=p1;
        temp.i2=p2;
        return temp;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setdata(3,4);
    i1=p1;
    i1.show();
    return 0;
}*/

/*5.Create two classes Invent1 and Invent2 and also add necessary
constructors in it. Now add Functions to support Invent1 and Invent2 type.
class Invent1{
    float a;
    public:
    Invent1(){}
    Invent1(float x){a=x;}
    operator float(){return a;}
    void show(){cout<<a<<endl;}
    float getvalue(){return a;}
};
class Invent2{
    float x;
    public:
    Invent2(){}
    Invent2(Invent1 i){
        x=i.getvalue();
        }
    void show(){cout<<x<<endl;}
};
int main()
{
    Invent1 s1=(6.57);
    Invent2 d1;
    float tv;
    tv=s1;
    s1.show();
    d1=s1;
    d1.show();
    return 0;

}*/

/*6.Create Time Class and Take Duration in Seconds. Now you need to convert
seconds to Time Class.
class Time{
    int dur;
    public:
    Time(){}
    Time(int x){dur=x*60;}
    void display(){cout<<dur<<endl;}
};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes\n";
    cin>>duration;
    Time t1=duration;
    t1.display();
}*/

/*7.Create two class Time and minute and add required getter and setter including
constructors. Now you need to type cast Time object into Minute to fetch the Minute from Time
and display it.
class Minute{
    public:
    int min;
    void display(){cout<<min<<endl;}
};

class Time{
    int hour,minute;
    public:
    Time(){}
    Time(int x,int y){hour=x;minute=y;}
    void set(int x,int y){hour=x;minute=y;}
    int getm(){return minute;}
    void display(){cout<<hour<<" "<<minute<<endl;}
    operator Minute()
    {
        Minute temp;
        temp.min=minute;
        return temp;
    }
};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;
    t1.display();
    m1.display();
    return 0;
}*/

/*8.Create a Rupee Class and Convert it into int. And Display it.
class Rupee{
    int r;
    public:
    Rupee(){}
    Rupee(int a){r=a;}
    operator int()
    {
        return r;
    }
};
int main()
{
    Rupee r=10;
    int x=r;
    cout<<x;
    return 0;
}*/

/*9.Create a Dollar Class and add Neccessary functions to support int to Dollar 
Type Conversion.
class Dollar{
    int d;
    public:
    Dollar(){}
    Dollar(int a){d=a;}
    operator int()
    {
        return d;
    }
    void show(){cout<<d<<endl;}
};
int main()
{
    int x=20;
    Dollar d2,d=x;
    d2=x;
    d2.show();
    return 0;
}*/

/*10.Create Two Classes Rupee and Dollar and add neccessary functions to support
Rupee to Dollar to Rupee Conversion
#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
    float x;

public :

    float getR(){return x;}

    Rupee(){cout<<"DC Called for Rupee"<<endl;}

    Rupee(float n)
    {
        cout<<"PC called for Rupee"<<endl;
        x = n;
    }
    void display(){cout<<"Rupee is "<<x<<endl;}

    operator Dollar();
};
class Dollar
{
    float x;

public :
    Dollar(){cout<<"DC Called for Dollar"<<endl;}

    Dollar(Rupee r)
    {
        cout<<"Dollar(Rupee) for Dollar"<<endl;
        x = r.getR()/80.0;
    }
    Dollar(float n)
    {
        cout<<"PC called for Dollar"<<endl;
        x = n;
    }

    void display(){cout<<"Dollar is "<<x<<endl;}

    operator Rupee()
    {
        cout<<"Rupee(Dollar) called for Dollar"<<endl;
        return x*80.0;
    }

    int getD(){return x;}
    
    operator float(){return x*1.0;}
};

int main()
{
    Rupee r = 80;
    Dollar d = (Dollar)r;

    r.display();
    d.display();

    r = d;
    d.display();
    r.display();
}*/


