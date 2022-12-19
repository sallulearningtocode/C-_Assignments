#include<iostream>
#include<string.h>
using namespace std;
/*1.Write a C++ Program to Demonstrate the use of try, catch Block
with argument as an integer and string using multiple catch blocks.
int main()
{
    int a,b,c;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>a>>b;
    try{ //Try Block Starts Here
        if(b==0)  //Conditional Statement
        throw "Zero Division Error"; //If b is equal to zero then it'll throw an exception
        c=a/b; //Otherwise the result of a/b will be assigned in c
    }catch(const char *msg)//Catch Block starts here //Here creating a char pointer to hold the address of exception string 
    {
        cout<<msg<<endl; //Printing the exception
    }
    cout<<"Result is "<<c;
    return 0;
}*/

/*2.Write a C++ Program to perform arithmetic operations on two numbers
and thrwo an exception if the dividend is zero or does not
contain an operator
int add(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}
int pro(int a, int b){return a*b;}
int main()
{
    int a,b,c;
    int choice;
    cout<<"Enter two numbers";
    cin>>a>>b;
    fflush(stdin);
    cin>>choice;
    switch(choice)
    {
        case 1:
        printf("%d",add(a,b));
        break;
        case 2:
        printf("%d",sub(a,b));
        break;
        case 3:
        printf("%d",pro(a,b));
        break;
        case 4:
        try{
            if(b==0)
            throw "Zero Division Error";
            cout<<a/b;
        }catch(const char *p)
        {
            cout<<p<<endl;
        }
        break;
        default:
        cout<<"INVALID INPUT";
    }
}*/

/*3.Write a C++ Program to accept an email address and throw an exception if it does not 
contain @ symbol.
int isvalid(char *p)
{
    int i;
    for(i=0;p[i];i++)
    {
        if(*(p+i)=='@')
        return 1;
    }
    return 0;
}
int main()
{
    char email[50];
    fflush(stdin);
    fgets(email,50,stdin);
    try{       
        if(isvalid(email)==0)
        throw "Not a Valid E-Mail";    
        cout<<"It is a Valid E-Mail";
        }catch(const char *p)
        {
            cout<<p;
        }
}*/

/*4.Write a C++ Program to accept a moblie number and throw an exception
if it does not contain 10 digits.
int countDigits(long long int n)
{
    int count=0;
    while(n){count++;n=n/10;}
    return count;
}

int main()
{
    long long int num;
    scanf("%lld",&num);
    try{
        if(countDigits(num)!=10)
        throw "Invalid Number";
        cout<<"Valid Number";
    }catch(const char *p){cout<<p;}
    return 0;
}*/

/*5.Write a C++ Program to accept area pin code and throw an exception if it does not
contain 6 digits. 
int countDigits(int n)
{
    int count=0;
    while(n){count++;n=n/10;}
    return count;
}

int main()
{
    int num;
    scanf("%d",&num);
    try{
        if(countDigits(num)!=6)
        throw "Invalid Number";
        cout<<"Valid Number";
    }catch(const char *p){cout<<p;}
    return 0;
}*/

/*6.Write a C++ Program to accept area pin code and throw an exception
if it does not contain 6 digits. 
int isvalid(char *p)
{
    int i,digit=0,count=0,sc=0;
    for(i=0;p[i];i++)
    {
        if(*(p+i)>47&&*(p+i)<58)
        digit=1;
        if((*(p+i)>31&&*(p+i)<48)||(*(p+i)>57&&*(p+i)<65))
        sc=1;
    }
    --i;
    if(digit&&sc&&i>6)
    return 1;
    return 0;
}
int main()
{
    char a[20];
    fflush(stdin);
    fgets(a,20,stdin);
    try{
        if(isvalid(a)==0)
        throw "Invalid Username";
        cout<<"Valid Username";
    }catch(const char *p)
    {
        cout<<p;
    }
    return 0;
}*/

/*7.Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.
int capletter(char *p)
{
    int i,cl=0;
    for(i=0;p[i];i++)
        if(*(p+i)>='A'&&*(p+i)<='Z')
        {
            cl=1;
            break;
        }
    return cl;
}
int digit(char *p)
{
    int i,d=0;
    for(i=0;p[i];i++)
        if(*(p+i)>47&&*(p+i)<58)
        {   
            d=1;
            break;
        }
    return d;
}

int isvalid(char *p)
{
    int i,sc=0;
    for(i=0;p[i];i++)
    {
        if((*(p+i)>31&&*(p+i)<48)||(*(p+i)>57&&*(p+i)<65))
        {
            sc=1;
            break;
        }
    }
    if(digit(p)&&capletter(p)&&strlen(p)>=6)
    return 1;
    return 0;
}
int main()
{
    char password[20];
    fflush(stdin);
    fgets(password,20,stdin);
    try{
        if(isvalid(password)==0)
        throw "Invalid Username";
        cout<<"Valid Username";
    }catch(const char *p)
    {
        cout<<p;
    }
    return 0;
}*/

/*9.10.Write a C++ Program to accept Gmail id only and throw an exception
if the id does not contain @ and gmail.com.
int main()
{
    string mail;
    fflush(stdin);
    cin>>mail;
    try
    {
        if(mail.find("@gmail.com")==-1)
            throw "Invalid Mail";
        cout<<mail;
    }catch(const char *p)
    {
        cout<<p;
    }
    return 0;

}

/*10.Write a C++ Program to accept Nickname and throw an exception
if it has greater than 8 characters or does contain a digit or special symbol or space.
int isvalid(char *p)
{
    int i;
    for(i=0;p[i];i++)
        if(p[i]<65&&p[i]>90||p[i]<97&&p[i]>122)
        return 0;
    return 1;
}
int main()
{
    int flag=0,i;
    char name[10];
    fflush(stdin);
    fgets(name,10,stdin);
    try{
        if((strlen(name)<9&&isvalid(name))==0)
            throw "Invalid Nickname";
        cout<<name;
    } catch(const char *p){cout<<p;}
    return 0;
}*/


