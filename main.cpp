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
 while(attemp <= 5)
{
cout<<endl<<"attempts no. :- "<<attemp<<endl;
cout<<"enter the guess between 0 - 100 "<<endl;
// Check if the guess is within the valid range
        if (guess < 0 || guess > 100) {
            cout << "Please enter a number between 0 and 100." << endl;
            continue; // Skip the rest of the loop and ask for input again
        }
        // Check the guess against the answer
        if (guess == ans) {
            cout << "Congratulations! You've guessed the correct number: " << ans << endl;
            break; // Exit the loop since the user has won
        } else if (guess < ans) {
            cout << "Your guess is LOW." << endl;
        } else {
            cout << "Your guess is HIGH." << endl;
        }
attemp++;
}//loop end */
cout<<"\n";
//write your code here..
cout<<"write your code for user after winning or lossing the game"<<endl;
}
