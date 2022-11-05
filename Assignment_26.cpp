#include<iostream>
using namespace std;
/*1.Define a Class Complex to represent a complex number with instance variables a and b store 
and real and imaginary parts. Also define following member functions.

class Complex{
    int real;
    int imag;
    public:
    void setdata(int x,int y)
    {
        real=x;
        imag=y;
    }
    void showdata()
    {
        cout<<real<<"+"<<imag<<"j";
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};

int main()
{
    Complex c1,c2,sum;
    c1.setdata(3,4);
    c2.setdata(5,6);
    // c1.showdata();
    sum=c1.add(c2);
    sum.showdata();
    return 0;

}*/

/*2.Define a Clas Time to represent a time with instance member variables h, m and s to store hour, minute
and second. Also define following member functions.
class Time{
    int h,m,s;
    public:
    void settime(int hour,int min,int sec)
    {
        h=hour;
        m=min;
        s=sec;
    }
    void showtime(){
        cout<<h<<" hr "<<m<<" min "<<s<<" sec"<<endl;
    }
    void normalize();
    Time add(Time t)
    {
        Time temp;
        temp.h=t.h+h;
        temp.m=t.m+m;
        temp.s=t.s+s;
        return temp;
    }
};
void Time :: normalize()
{
    int r;
    r=s%60;
    m=m+s/60;
    s=r;
    r=m%60;
    h=h+m/60;
    m=r;
}
int main()
{
    Time t1,t2,s;
    t1.settime(1,2456,3560);
    t1.showtime();
    t2.settime(2,1450,1110);
    t2.showtime();
    s=t1.add(t2);
    s.normalize();
    s.showtime();

}*/

/*3.Define a Class Cube and Calculate Volume of a Cube and initialise it using Constructor.
class Cube{
    private:
    int s;
    public:
    void findVolume(){
        s=(s*s*s);
    }
    void showVolume()
    {
        cout<<s;
    }
    Cube(){
        s=5;
    }
};
int main()
{
    Cube c1;
    c1.findVolume();
    c1.showVolume();
}*/

/*4.Define a Class Cube and calculate Colume of Cube and initialise it using Constructor.
class Cube{
    int edge,volume;
    public:
    Cube(int x){edge=x;}
    void calcVolume();
    void showVolume(){cout<<"Volume is "<<volume;}
};
void Cube :: calcVolume(){
    volume=(edge*edge*edge);
}
int main()
{
    Cube c(5);
    c.calcVolume();
    c.showVolume();
}

/*5.Define a Class Date and write a program to Display Date and Intialise date object using Constructor
class Date
{
    private:
    int date;
    int month;
    int year;
    public:
    Date(int x, int y, int z){date=x; month=y; year=z;}
    void showdata(){cout<<date<<" "<<month<<" "<<year<<endl;}
};

int main()
{
    Date d1(2,10,2023);
    d1.showdata();
}*/

/*6.Define a class Student and write a program to enter student details using constructor and define
member function to display all the details.
class Students{
    private:
    char name[20];
    int roll,age,standard;
    public:
    Students()
    {
        cout<<"Enter Name";
        fflush(stdin);
        fgets(name,20,stdin);
        cout<<"Enter Roll Number";
        cin>>roll;
        cout<<"Enter Age";
        cin>>age;
        cout<<"Enter Standard";
        cin>>standard;
    }
    void showDetails(){
        fputs(name,stdout);
        cout<<roll<<" "<<age<<" "<<standard<<endl<<endl;
    }
};
int main()
{
    Students s1,s2;
    s1.showDetails();
    s2.showDetails();
}*/

/*7.Define a class Box and Write a program to enter length, breadth and height and initialise
objects using constructor also define member functions to calculate volume of the box.
class Box{
    private:    
    int l,b,h,v;
    public:
    Box() {cin>>l>>b>>h;}
    void calculateVolume() { v=l*b*h; }
    void showVolume(){cout<<"Volume of the Box is "<<v<<endl;}
};

int main()
{
    Box b1;
    b1.calculateVolume();
    b1.showVolume();
}*/

/*8.Define a Class Bank and Define Member Functions to read Principal, rate of Interest and Year.
Another member funcitons to calculate Simple interest  and Display it.
Initialise it all details using Constructor.
class Bank{
    private:
    float p,roi,year,si;
    public:
    void readPrincipal()
    {
        cin>>p;
    }
    void readROi()
    {
        cin>>roi;
    }
    void years()
    {
        cin>>year;
    }
    void calcSI()
    {
        si=p*(roi/100)*year;
    }
    void printSI()
    {
        cout<<si;
    }
    Bank()
    {
        readPrincipal();
        readROi();
        years();
        calcSI();
        printSI();        
    }

};
 int main()
 {
    Bank b1;
 }
*/

/*9.Define a class Bill and Define member function get() to tale detail of customer,
 calculateBill() function to calculate electricity bill using tarriff:
 class Bill{
    private:
    int units,amount;
    public:
    void get(){
        cin>>units;
    };
    void calculateBill(){
        int i,r;
        if(units<=100)
        amount=units*1.20;
        else if(units>100&&units<=200)
        {
            r=units%100;
            amount=r*2.0;
            units=units-r;
            amount=amount+units*1.20;
        }
        else
        {
            r=units-(units-100);
            amount=r*1.20;
            r=units-(units-100);
            amount=amount+r*2.0;
            r=units-200;
            amount=amount+r*3;
        }
    };
    void showbill(){cout<<endl<<amount;}
 };
 int main()
 {
    Bill b1;
    b1.get();
    b1.calculateBill();
    b1.showbill();
 }*/

/*10.Define a class StaticCount and create a static variable. Increment this variable 
in a funciton and call this 3 times and display the result.
class StaticCount{
    public:
    static int s;
    public:
    void incrementS(){s++;};
    void showS(){cout<<"S is "<<s;};
};
int StaticCount :: s=1;
int main()
{
    StaticCount s1;
    for(int i=1;i<=3;i++){s1.incrementS();}
    s1.showS();
}*/

