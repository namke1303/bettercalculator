#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int q;
    cout<<"What do you want to do : \n1. Operations with numbers \n2. Square numbers \n3. Square Root \n";
    cin>>q;
    if (q==2)
    {
        int n,m;
        cout<<"Enter one number you want to square : \n";
        cin>>n;
        cout<<"Enter the degree with which you want to square the number : \n";
        cin>>m;
        cout<<"Square : \n"<<pow(n,m);
    }
    else if (q==3)
    {
        int n;
        cout<<"Enter one number you want to square root : \n";
        cin>>n;
        cout<<"Square root : \n"<<sqrt(n);
    }
    if (q==1)
    {
    int p;
    cout<<"Select with which numbers you want to perform operations : \n1. Integers \n2. Decimals \n";
    cin>>p;
    if (p==1)
    {
    int x,y,o;
    cout<<"Enter two numbers : \n";
    cin>>x>>y;
    cout<<"What operation do u want : \n";
    cout<<"\n1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n";
    cin>>o;
    if (o==1)
    {
        cout<<"Sum : \n"<<x+y<<endl;
    }
    else if (o==2) {
        cout<<"DIffrence : \n"<<x-y<<endl;
    }
    if (o==3)
    {
        cout<<"Multiplication : \n"<<x*y<<endl;
    }
    else if (o==4)
    {
        cout<<"Quotient : \n"<<x/y<<endl;
    }
    }
    else if (p==2)
    {
    float x,y,o;
    cout<<"Enter two numbers : \n";
    cin>>x>>y;
    cout<<"What operation do u want : \n";
    cout<<"\n1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n";
    cin>>o;
    if (o==1)
    {
        cout<<"Sum : \n"<<x+y<<endl;
    }
    else if (o==2) {
        cout<<"DIffrence : \n"<<x-y<<endl;
    }
    if (o==3)
    {
        cout<<"Multiplication : \n"<<x*y<<endl;
    }
    else if (o==4)
    {
        cout<<"Quotient : \n"<<x/y<<endl;
    }
    } 
    }
    system("pause");
    return 0;
}