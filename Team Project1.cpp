#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

//Function Prototype
void Addition(int,int);
void Subtraction(int,int);
void Multiplication(int,int);
void Division(float,float);

int main()
{
    int randomNum1,randomNum2,choice, level;

    //Game Interface
    cout<<"Welcome To The Math Game!"<<endl<<endl;
    cout<<"Game Menu  "
        <<" [Choose 1, 2, 3, 4, 5]"<<endl
        <<"1. Addition Game"<<endl
        <<"2. Subtraction Game"<<endl
        <<"3. Multiplication Game"<<endl
        <<"4. Division Game"<<endl
        <<"5. Guessing Game"<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>choice;

    //Comparing the choices
    //Addition Game Part
    if (choice==1)
        {
            cout<<"Welcome To The Addition Game"<<endl;
            cout<<"Choice Difficulty Level: "<<endl
                <<"1. Easy"<<endl<<"2. Medium"<<endl<<"3. Hard"<<endl;
            cin>>level;
            if (level==1)  //Comparing the levels
            {
                while (1)   //Always true condition
                {
                    randomNum1=rand()% 10 +1;   //Generating random numbers from 0 to 10
                    randomNum2=rand()% 10 +1;
                    Addition(randomNum1,randomNum2);  //Passing parameters
                }
            }
            else if (level==2)   //Comparing the levels
            {
                while (1)   //Always true condition
                {
                    randomNum1=rand()% 100 +1;     //Generating random numbers from 0 to 100
                    randomNum2=rand()% 100 +1;
                    Addition(randomNum1,randomNum2);
                }
            }
            else if (level==3)   //Comparing the levels
            {
                while (1)   //Always true condition
                {
                    randomNum1=rand()% 1000 +1;    //Generating random numbers from 0 to 1000
                    randomNum2=rand()% 1000 +1;
                    Addition(randomNum1,randomNum2);
                }
            }
            else
                cout<<"You Have Entered Wrong Character"<<endl;
        }
    //Subtraction Game Part
    else if (choice==2)  //Comparing the choices
        {
            cout<<"Welcome To The Subtraction Game"<<endl;
            cout<<"Choice Difficulty Level: "<<endl
                <<"1. Easy"<<endl<<"2. Medium"<<endl<<"3. Hard"<<endl;
            cin>>level;
            if (level==1)   //Comparing the levels
            {
                while (1)   //Always true condition
                {
                    randomNum1=rand()% 10 +1;   //Generating random numbers from 0 to 10
                    randomNum2=rand()% 10 +1;
                    Subtraction (randomNum1,randomNum2);
                }
            }
            else if (level==2)   //Comparing the levels
            {
                while (1)    //Always true condition
                {
                    randomNum1=rand()% 100 +1;    //Generating random numbers from 0 to 100
                    randomNum2=rand()% 100 +1;
                    Subtraction(randomNum1,randomNum2);
                }
            }
            else if (level==3)   //Comparing the levels
            {
                while (1)   //Always true condition
                {
                    randomNum1=rand()% 999 +1;     //Generating random numbers from 0 to 1000
                    randomNum2=rand()% 999 +1;
                    Subtraction(randomNum1,randomNum2);
                }
            }
            else
                cout<<"You Have Entered Wrong Character"<<endl;
        }
    //Multiplication Game Part
    else if (choice==3)   //Comparing the choices
        {
            cout<<"Welcome To The Multiplication Game"<<endl;
            cout<<"Choice Difficulty Level: "<<endl
                <<"1. Easy"<<endl<<"2. Medium"<<endl<<"3. Hard"<<endl;
            cin>>level;
            if (level==1)   //Comparing the levels
            {
                while (1)    //Always true condition
                {
                    randomNum1=rand()% 10 +1;   //Generating random numbers from 0 to 10
                    randomNum2=rand()% 10 +1;
                    Multiplication(randomNum1,randomNum2);
                }
            }
            else if (level==2)   //Comparing the levels
            {
                while (1)    //Always true condition
                {
                    randomNum1=rand()% 100 +1;   //Generating random numbers from 0 to 100
                    randomNum2=rand()% 100 +1;
                    Multiplication(randomNum1,randomNum2);
                }
            }
            else if (level==3)    //Comparing the levels
            {
                while (1)    //Always true condition
                {
                    randomNum1=rand()% 999 +1;    //Generating random numbers from 0 to 1000
                    randomNum2=rand()% 999 +1;
                    Multiplication(randomNum1,randomNum2);
                }
            }
            else
                cout<<"You Have Entered Wrong Character"<<endl;
        }
    //Division Game Part
    else if (choice==4)   //Comparing the choices
        {
            cout<<"Welcome To The Division Game"<<endl;
            cout<<"Choice Difficulty Level: "<<endl
                <<"1. Easy"<<endl<<"2. Medium"<<endl<<"3. Hard"<<endl;
            cin>>level;
            if (level==1)    //Comparing the levels
            {
                while (1)    //Always true condition
                {
                    randomNum1=rand()% 10 +1;     //Generating random numbers from 0 to 10
                    randomNum2=rand()% 10 +1;
                    Division(randomNum1,randomNum2);
                }
            }
            else if (level==2)   //Comparing the levels
            {
                while (1)    //Always true condition
                {
                    randomNum1=rand()% 100 +1;    //Generating random numbers from 0 to 100
                    randomNum2=rand()% 100 +1;
                    Division(randomNum1,randomNum2);
                }
            }
            else if (level==3)   //Comparing the levels
            {
                while (1)   //Always true condition
                {
                    randomNum1=rand()% 999 +1;   //Generating random numbers from 0 to 1000
                    randomNum2=rand()% 999 +1;
                    Division(randomNum1,randomNum2);
                }
            }
            else
                cout<<"You Have Entered Wrong Character"<<endl;
        }
    //Guessing Game Part
    else if (choice==5)   //Comparing the choices
    {
        cout<<"Welcome To The Guessing Game"<<endl;
        while(1)   //Always true condition
    {
        int guessNum,randomNum;
    cout<<"Enter A Number Between 1 To 5 "<<endl;
    cin>>guessNum;
    randomNum = rand()%5 + 1;
    if(guessNum==randomNum)
    {
        cout<<"Your Guess Was Right"<<endl;
        cout<<"Try Another One"<<endl<<endl;    }
    else
    {
        cout<<"You Guess Was Wrong"<<endl;
        cout<<"Random Number Was "<<randomNum<<endl<<"Try Again"<<endl;
    }
    }
    }

    else
        cout<<"You Have Entered Wrong Character"<<endl
            <<"Try Again And Enter A Number Between 1 To 5"<<endl;



    getch();
    return 0;
}

//User defined function for adding numbers
void Addition(int Num1,int Num2)
{
    int guessNum,result;
    cout<<Num1<<" + "<<Num2<<" = ?"<<endl;
    cin>>guessNum;
    result = Num1 + Num2;
    if (guessNum==result)
    {
        cout<<"You're right"<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
    else
    {
        cout<<"You're wrong"<<endl;
        cout<<Num1<<" + "<<Num2<<" = "<<result<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
}


void Subtraction(int Num1,int Num2)
{
    int guessNum,result;
    cout<<Num1<<" - "<<Num2<<" = ?"<<endl;
    cin>>guessNum;
    result = Num1 - Num2;
    if (guessNum==result)
    {
        cout<<"You're right"<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
    else
    {
        cout<<"You're wrong"<<endl;
        cout<<Num1<<" - "<<Num2<<" = "<<result<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
}


void Multiplication(int Num1,int Num2)
{
    int guessNum,result;
    cout<<Num1<<" * "<<Num2<<" = ?"<<endl;
    cin>>guessNum;
    result = Num1 * Num2;
    if (guessNum==result)
    {
        cout<<"You're right"<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
    else
    {
        cout<<"You're wrong"<<endl;
        cout<<Num1<<" * "<<Num2<<" = "<<result<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
}

void Division(float Num1,float Num2)
{
    float guessNum,result;
    cout<<Num1<<" / "<<Num2<<" = ?"<<endl;
    cin>>guessNum;
    result = Num1 / Num2;
    if (guessNum==result)
    {
        cout<<"You're right"<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
    else
    {
        cout<<"You're wrong"<<endl;
        cout<<Num1<<" / "<<Num2<<" = "<<result<<endl;
        cout<<"Try Another One"<<endl<<endl;
    }
}

