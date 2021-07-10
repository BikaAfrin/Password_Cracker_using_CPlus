#include<bits/stdc++.h>
#include<chrono>
#include<cstdlib>
#include<windows.h>
#include<unistd.h>

using namespace std;
using namespace std::chrono;

string password = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int passlength = password.length() ,  length = 1;
long long int attempts = 0 ;

void back()
{
    cout<<"\n\n\n" << endl;

    cout << "It's not "<< length << " length password" <<endl<<endl;
    length++;
    cout << "****Cheaking for " << length << "length" <<endl;
     for(int i = 0 ; i<3 ; i++ )
    {
        Sleep(500);
        cout<<" .";
    }
    cout<<"\n";
}
int bruteforce (string pass)
{
    for(int i = 0 ; i<passlength ; i++)
    {
        string temp = "" ;
        attempts++;

        temp += password[i];
        if(temp == pass) return 1;
    }
    back();
    for(int i = 0 ; i<passlength ; i++)
    {
        for(int j = 0 ; j<passlength ; j++)
        {
            string temp = "";
            attempts++;

            temp+=password[i];
            temp+=password[j];

            if(temp == pass) return 1;
        }
    }
    back();
     for(int i = 0 ; i<passlength ; i++)
    {
        for(int j = 0 ; j<passlength ; j++)
        {
            for(int k = 0 ; k<passlength ; k++)
            {
                 string temp = "";
                 attempts++;

                 temp+=password[i];
                 temp+=password[j];
                 temp+=password[k];

                 if(temp == pass) return 1;
            }
        }
    }
    back();
     for(int i = 0 ; i<passlength ; i++)
    {
        for(int j = 0 ; j<passlength ; j++)
        {
            for(int k = 0 ; k<passlength ; k++)
            {
                for(int l = 0 ; l<passlength ; l++)
                {
                     string temp = "";
                     attempts++;

                     temp+=password[i];
                     temp+=password[j];
                     temp+=password[k];
                     temp+=password[l];

                     if(temp == pass) return 1;
                }
            }
        }
    }
    back();
     for(int i = 0 ; i<passlength ; i++)
    {
        for(int j = 0 ; j<passlength ; j++)
        {
            for(int k = 0 ; k<passlength ; k++)
            {
                for(int l = 0 ; l<passlength ; l++)
                {
                    for(int m = 0 ; m<passlength ; m++)
                    {
                         string temp = "";
                         attempts++;

                         temp+=password[i];
                         temp+=password[j];
                         temp+=password[k];
                         temp+=password[l];
                         temp+=password[m];

                         if(temp == pass) return 1;
                    }
                }
            }
        }
    }
    back();
     for(int i = 0 ; i<passlength ; i++)
    {
        for(int j = 0 ; j<passlength ; j++)
        {
            for(int k = 0 ; k<passlength ; k++)
            {
                for(int l = 0 ; l<passlength ; l++)
                {
                    for(int m = 0 ; m<passlength ; m++)
                    {
                        for(int n = 0 ; n<passlength ; n++)
                        {
                             string temp = "";
                             attempts++;

                             temp+=password[i];
                             temp+=password[j];
                             temp+=password[k];
                             temp+=password[l];
                             temp+=password[m];
                             temp+=password[n];

                             if(temp == pass) return 1;
                        }
                    }
                }
            }
        }
    }
    back();
}

int main()
{
    cout<<"\t\t\t\t\t\t@@@@\t\t\t\t"<<endl<<endl;
    string pass1;
    cout << "Enter the password : ";
    cin >> pass1;

    auto start_t = high_resolution_clock::now();
    int process = bruteforce(pass1);
    auto end_t = high_resolution_clock::now();

    if(process = 1)
    {
         cout<<"\nLoading";
        for(int i = 0 ; i<2 ; i++ )
        {
            Sleep(700);
            cout<<" .";
        }
        cout<<"\n";
        cout << "__________________PASSWORD CHEAKED____________________" <<endl<<endl;
    }

    else
    {
         cout<<"\nLoading";
         for(int i = 0 ; i<2 ; i++ )
         {
             Sleep(700);
             cout<<" .";
         }
         cout<<"\n";
         cout << "____________________PASSWORD COULD NOT FOUND_______________________" <<endl<<endl;
    }


    auto duration = duration_cast<seconds>(end_t - start_t);

    cout << "Password            : " << pass1 << endl;
    cout << "Attempts            : " << attempts << endl;
    cout << "Total Execution time: " << duration.count() << " seconds. \n";



}
