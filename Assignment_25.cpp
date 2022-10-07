#include<iostream>
using namespace std;

/*1.Define a class Complex to representa complex number.
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
};

int main()
{
    Complex c1;
    c1.setdata(3,4);
    c1.showdata();
    return 0;

}*/

/*2.Define a Class Time
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
        cout<<h<<" hr "<<m<<" min "<<s<<" sec";
    }
};
int main()
{
    Time t1;
    t1.settime(1,20,30);
    t1.showtime();
}*/

/*3.Define a Class Factorial
class Fact{
    int n;
    public:
    void findfact(int n)
    {
        int i,fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact;
        n=fact
    }
    void showfact()
    {
        cout<<n;
    }
};
int main()
{
    Fact f1;
    f1.findfact(5);
    f1.showfact();
}*/

/*4.Define a Class LargestNumber
class LargestNumber{
    int a;
    public:
    void greater(int x,int y)
    {
        a=x>y?x:y;
    }
    void showGreater()
    {
        cout<<a;
    }
};
int main()
{
    LargestNumber N1;
    N1.greater(255,40);
    N1.showGreater();
}*/

/*5.Define a ReverseNumber and define an instance member function to find the Reverse of a number
class ReverseNumber{
    int n;
    public:
    void input(){
        cin>>n;
    };
    int rev()
{
    int r=0,r1;
    while(n!=0)
    {
        r1=n%10;
        r=r*10;
        n=n/10;
        r=r1+r;
    }
    return r;

   }
};

int main()
{
    ReverseNumber n;
    n.input();
    cout<<n.rev();
}

/*6.Define a class Square to find Square and Write a C++ Program to count number of times a function is called
class Square{
    int sq,n,area;
    public:
    void square(int x)
    {
        n=x;
        sq=n*n;
        cout<<sq<<' ';
    }
};
int main()
{
    Square s1;
    int i=1,a=2;
    
    for(i;i<5;i++,a++)
    {
        s1.square(a);
 }
 cout<<endl<<"Function Was Called "<<--i<<" times";
}*/

/*6.Define a class Square to find the square of a number and write a C++ program to count the number of times a function is called
class Square{
    int a;
    static int count;
    public:
    void input(){cin>>a;}
    void findSquare(){
    cout<<"Square is "<<a*a<<endl;
    cout<<++count<<endl; 
    }
};
int Square::count=0;
int main()
{
    Square n,w;
    n.input();
    n.findSquare();
    w.input();
    w.findSquare();
}*/

/*7.Defina a class greatest and define an instance member function to find largest among 3 numbers 
class Greatest{
    int x;
    public:
    void max(int a, int b, int c)
    {
        if(a>b&&a>c)
            x=a;
        else if(b>c)
            x=b;
        else
            x=c;
    }
    void showmax()
    {
        cout<<x;
    }
};

int main()
{
    Greatest g;
    g.max(5,1,7);
    g.showmax();
}*/

/*8.Define a class Rectangle and define an instance member function to find the area of rectangle
class Rectangle{
    int area;
    public:
    void findarea(int l,int b)
    {
        area=l*b;
    }
    void showarea()
    {
        cout<<"Area of Rectangle is "<<area;
    }
};
int main()
{
    Rectangle r;
    r.findarea(4,7);
    r.showarea();
}*/

/*9.Define a class Circle and Define an instance member function to find area of the circle.
class Circle{
    float area;
    public:
    void findarea(float r)
    {
        area=3.14*r*r;
    }
    void showarea()
    {
        cout<<area;
    }
};

int main()
{
    Circle c;
    c.findarea(5.4);
    c.showarea();
}*/

/*10.Define a Class Area and Calulare Area of Shapes like Square, Rectangle, circle,etc.
class Area{
    float x,y,z,area;
    public:
    void findarea(int s)
    {
        area=s*s;
    }
    void findarea(int l,int b)
    {
        area=l*b;
    }
    void findarea(float r)
    {
        area=3.14*r*r;
    }
    void showarea()
    {
        cout<<"Area is = "<<area;
    }
};
 int main()
 {
    Area A1;
    A1.findarea(14,15);
    A1.showarea();
 }*/

