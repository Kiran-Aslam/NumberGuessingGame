#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;
int main(){
	srand(time(0));
	int secretNumber =rand()% 100+1;
	int userGuess , GuessCount=0;
	cout<<"\n\n";
	cout<<"\t\t\t\t\t``````````````````````````````````````````````\n";
	cout<<"\t\t\t\t\t==============================================\n";
	cout<<"\t\t\t\t\t______________________________________________\n";
	cout<<"\t\t\t\t\t\tWELCOME TO NUMBER GUESSING GAME!\n\n";
	cout<<"\t\t\t\t\t\tGUESS THE NUMBER BETWEEN 1 TO 100.\n";
	cout<<"\t\t\t\t\t\tYOU HAVE ONLY 20 sec!\n";
	time_t startTime=time(0);
	time_t endTime=startTime+60;
	time_t currentTime;
	do{
		time_t currentTime=time(0);
		cout<<"\t\t\t\t\t\tENTER YOUR GUESS :";
		cin>>userGuess;
		GuessCount++;
		if(userGuess>secretNumber){
		cout<<"\t\t\t\t\t\tTo High! Try Again.\n";
		}else if(userGuess < secretNumber){
		cout<<"\t\t\t\t\t\tTo Low! Try Again.\n";
		}else{
		cout<<"\t\t\t\t\t\tCongratulations You guessed the Number in " << GuessCount <<"  Guesses.\n";
	    cout<<"\t\t\t\t\t``````````````````````````````````````````````\n";
	    cout<<"\t\t\t\t\t==============================================\n";
	    cout<<"\t\t\t\t\t______________________________________________\n";
		}
		currentTime=time(0);
		if(currentTime>=endTime){
		cout<<"\t\t\t\t\t\t\tTime's Up! You Failed!\n";
		break;
		}
	if(userGuess<1||userGuess>100){
		cout<<"\t\t\t\t\t\tInvalid input! please Enter number between 1 to 100.\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}
	while(userGuess!=secretNumber && currentTime<endTime);
	return 0;
}
