#include <iostream>

using namespace std;

int main () {
    int x,y,o;
    cout<<"Enter two numbers :";
    cin>>x>>y;
    cout<<"What operation do u want :";
    cout<<"\n1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n";
    cin>>o;
    if (o==1)
    {
        cout<<"Sum : "<<x+y<<endl;
    }
    else if (o==2) {
        cout<<"DIffrence : "<<x-y<<endl;
    }
    if (o==3)
    {
        cout<<"Multiplication : "<<x*y<<endl;
    }
    else if (o==4)
    {
        cout<<"Quotient : "<<x/y<<endl;
    }
    
    return 0;
}