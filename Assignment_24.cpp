#include<iostream>
using namespace std;
/*1.Define a Function to check whether a given number is a Prime or not.
int isprime(int n)
{
    int i,flag=0;
        if(n==1)
        return -1;
        if(n==2||n==3)
        return 1;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        flag++;
    }
    if(flag==0)
    return 1;
    else 
    return -1;
}
int main()
{
    if(1==isprime(79))
        printf("Prime Number");
    else
    printf("Not a Prime Number");
}*/

/*2.Define a Function to find the highest value digit in a gien number.
int greatestDigit(int n)
{
    int g=0;
    while(n!=0)
    {
        if(g<n%10)
        g=n%10;
        n=n/10;
    }
    return g;
}
int main()
{
    int n;
    cin>>n;
    cout<<greatestDigit(n);
}*/

/*3.Define a Function to calculate x raised to the power y.
int pow(int x,int y)
{
    int pow=1;
    for(int i=0;i<y;i++)
    {
        pow=pow*x;
    }
    return pow;
}
int main()
{
    int x,y;
    cout<<"Enter x and y value";
    cin>>x>>y;
    cout<<pow(x,y);
}*/

/*5.Define a Function to check whther a number is in fibonacci series or not
?/*void fib(int n)
{
    int i,a=0,b=1,c=-1,flag=0;
    while(c<n)
    {
        c=a+b;
        if(n==c)
        {
            cout<<"Number Found";
            flag++;
            break;
        }
        a=b;
        b=c;
    }
    if(flag==0)
    cout<<"Not Found";
}

int main()
{
    int a;
    cin>>a;
    fib(a);
}*/

/*4.Define a Function to print Pascal Triangle up to N lines

    long fact(long n){
   int i, fact = 1;
   for(i = n; i>1; i--)
      fact *= i;
   return fact;//factorial of given number
}
long nCr(long n, long r){
   long nume = 1, i;
   for(i = n; i>r; i--)
      nume *= i;
   return long(nume/fact(n-r));//generate result of nCr
}
void genPascalsTriangle(long n){
   for(int i = 0; i<n; i++){
      for(int j = 0; j<(n-i-1); j++)
         cout <<setw(3)<< " ";//printing space to show triangular form
      for(int j = 0; j<(i+1); j++)
         cout <<setw(3)<< nCr(i, j) <<setw(3)<< " ";
      cout << endl;
   }
}
int main(){
   int n;
   cout << "Enter Number of lines: "; cin >> n;
   genPascalsTriangle(n);
   return 0;
}
*/

/*6.Define a Program to Swap values of two numbers using call by reference
void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers";
    cin>>a>>b;
    cout<<"Before Swapping"<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping"<<a<<" "<<b;
    return 0;
}*/

/*7.Write a function using the default argument that is able to add 2 or 3 numbers.
int sum(int a,int b,int c=0)
{
    int sum;
    sum=a+b+c;
    return sum;
}
int main()
{
    cout<<sum(2,3);
}*/

/*8.Define Overloaded Functions to calculate the area of circle, area of rectangle and area of triangle

void area(int l,int b)
{
    int area = l*b;
    cout<<"Area of Rectangle is "<<area;
}

void area(float r)
{
    int area=3.14*r*r;
    cout<<"Area of Triangle is "<<area;
}

void area(int a,int b,int c)
{
    int area=(a*b*c);
    cout<<"Area of Triangle is "<<area;
}

int main()
{
    int a,b,c;
    area(2.0);
}*/

/*9.Write functions using overloading to find a maximum of two numbers and both the numbers can be integer or real.
/*int max(int a, int b)
{
    if(a>b)
    return a;
    return b;
}
float max(float a, float b)
{
    if(a>b)
    return a;
    return b;
}
int main()
{
    cout<<max(2.5,4.5);
}*/

/*10.Write Functions using function overloading to add two numbers having different data types.
int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}
int main()
{
    float a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}*/

