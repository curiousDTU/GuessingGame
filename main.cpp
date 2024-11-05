#include <iostream>
using namespace std;
int main()
{
    int attemp = 1,ans,guess=0,_won=0,h=100,l=0;
    srand(time(0));
    ans = rand() % 100;
    cout<<"**** PLEASE READ INSTRUCTION ****"<<endl<<endl;
    cout << "This Game will generate"<<endl<<"any random number between 0-100"<<endl;
    cout<<"you have to guess the number"<<endl<<"you have 5 attempts / chances to guess"<<endl<<endl;
    cout<<"After each wrong guess Game will tell you"<<endl<<"Your guess is HIGH or LOW"<<endl;
    cout<<" BEST OF LUCK"<<endl;
    cout<<"Implement gessing game here";
    while (attemp <= 5) {
        cout << endl << "Attempt no. : " << attemp << endl;
        cout << "Enter your guess between 0 - 100: ";
        cin >> guess;
/* while(attemp <= 5)
{
cout<<endl<<"attempts no. :- "<<attemp<<endl;
cout<<"enter the guess between 0 - 100 "<<endl;
//Implement game here
attemp++;
}//loop end */
cout<<"\n";
//write your code here..
cout<<"write your code for user after winning or lossing the game"<<endl;
}
