#include<bits/stdc++.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
    void input1(int a,int b,int c)
{
    int n,num;
    if(c==1)
    {
        cout<<"WELCOME TO ADDITION GAME\n\n";
        cout<<a<<"+"<<b<<" = ";
        n=a+b;
        cin>>num;
    }
    else if(c==2)
    {
        cout<<"WELCOME TO Substraction GAME\n\n";
        cout<<a<<"-"<<b<<" = ";
        n=a-b;
        cin>>num;
    }
    else if(c==3)
    {
        cout<<"WELCOME TO Multiplication GAME\n\n";
        cout<<a<<"*"<<b<<" = ";
        n=a*b;
        cin>>num;
    }
     else
    {
         cout<<"WELCOME TO Division GAME\n\n";
        cout<<a<<"/"<<b<<" = ";
        n=a/b;
        cin>>num;
    }
    if(n==num)
    {
        cout<<endl;
        cout<<"CONGRATULATION :D"<<endl;
    }
    else
    {
        cout<<"SORRY! YOU'RE ANS IS WRONG"<<endl<<endl;
        cout<<"Correct Ans is: "<<n<<endl;;
    }

}
int main()
{
    {
        int input,randnumber,randnumber1,r,r1,input2;
    cout<<"WELCOME TO MATH GAME :)\n\n"<<"Choose a game to play\n"<<"1. Addition\n"<<"2. Substraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<"You've choosen :";
    cin>>input;
    cout<<"\n\nChoose Difficulty Level\n"<<"1. Easy\n"<<"2. Medium\n"<<"3. Hard\n"<<"You've choosen :";
    cin>>input2;
    system("cls");
    cout<<"Loading";
    for(int i=0;i<3;i++)
    {
        Sleep(1000);
        cout<<".";
    }
    system("cls");
    while(1)
    {
         randnumber=rand();
    randnumber1=rand();
    if(input2==1)
    {
        r=randnumber%10;
        r1=randnumber1%10;
    }
    else if(input2==2)
    {
        r=randnumber%100;
        r1=randnumber1%100;
    }
    else
    {
        r=randnumber%1000;
        r1=randnumber1%1000;
    }
        input1(r,r1,input);

}
}

    }

