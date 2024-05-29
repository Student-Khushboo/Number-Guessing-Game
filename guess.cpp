#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\n\t\t Welcome to Guess The Number Game!"<<endl;
    cout<<"you have to guess a number between 1 and 100.You'll have limited choices based on the level you choose.Good Luck!"<<endl;
    while(true){
        cout<<"\n Enter the difficulty level:\n";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game!\t"<<endl;

        int difficultyChoice;
        cout<<"Enter the number:";
        cin>>difficultyChoice;

        srand(time(0));
        int secretnumber=1+(rand()%100);
        int playerChoice;

        if(difficultyChoice==1){
            cout<<"\n You have 10 choices for finding the secret number between 1 and 100.";
            int choiceLeft=10;
            for(int i=1;i<=10;i++){
                cout<<"\n\n Enter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretnumber){
                    cout<<"Well Played! You Won,"<<playerChoice<<" is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playin..."<<endl;
                    cout<<"play game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout<<"Nope, "<<playerChoice<<"is not the right number\n";
                    if(playerChoice>secretnumber){
                        cout<<"the secert number is smaller then the number you have chosen"<<endl;
                    }
                    else{
                        cout<<"The secert number is greather than the number you have chosen"<<endl;
                    }
                    choiceLeft--;
                    cout<<choiceLeft<<"choices left."<<endl;
                    if(choiceLeft==0){
                        cout<<"You couldn't find the secert number,it was"<<secretnumber<<",you lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                    }

                }
    
            }
            else if(difficultyChoice==2){
                cout<<"\nYou have 7 choices for finding the secret number between 1 and 100.";
                int choicesLeft=7;
                for(int i=1;i<=7;i++){
                     cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretnumber){
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                    }else{
                        cout<<"Nope,"<< playerChoice << " is not the right number\n";
                    if(playerChoice>secretnumber){
                        cout << "The secret number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "The secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<secretnumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                    
                }
            }
        }
    else if(difficultyChoice==0){
        exit(0);
    }
    else{
        cout<<"Wrong choice,Enter valid choice to play the game!(0,1,2,3)"<<endl;
    }

    }
    return 0;
}   
