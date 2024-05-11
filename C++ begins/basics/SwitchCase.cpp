//Program to print hello in different language
#include<iostream>
using namespace std;
int main()
{
   char button;
    cout<<"Which language do you prefer?"<<endl;
    cin>>button;
    switch(button){
        case 'a':
        cout<<"Hello!";
        break;

        case 'b':
        cout<<"bonjour";
        break;

        case 'h':
        cout<<"Hola!";
        break;
        
        case 'c':
        cout<<"Salve";
        break;

        case 'd':
        cout<<"Zdravstvuyte";
        break;

        case 'e':
        cout<<"Yassas";
        break;

        case 'f':
        cout<<"Selamat siang";
        break;

        case 'g':
        cout<<"Guten tag";
        break;

        case 'i':
        cout<<"Anyoung haseyo";
        break;

        case 'j':
        cout<<"Goedendag";
        break;

        case 'k':
        cout<<"Namaste";
        break;

        default:
        cout<<"I am still learning";
        break;
    }
    return 0;
}