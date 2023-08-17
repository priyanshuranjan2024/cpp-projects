//if rock v/s scissor -->rock wins
//rock v/s paper -->paper wins
//paper v/s scissor -->scissor wins
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace  std;
//create function to get the computer's choice
int computerGuess(){
    srand(time(0));
    int num=rand()%3+1;
    if(num==1){
        return 1;
    }
    else if(num==2){
        return 2;
    }
    else if(num==3){
        return 3;
    }
    return 0;
    

}

//winner printing function
void winner(int computer_choice,int user_choice){
    if(computer_choice==1 && user_choice==2){
        cout<<"computer wins! rock crushes scissor"<<endl;
    }
    else if(computer_choice==3 && user_choice==1){
        cout<<"computer win! paper wraps rock"<<endl;

    }
    else if(computer_choice==2 && user_choice==3){
        cout<<"computer wins! scissor cuts paper"<<endl;
    }
    if(computer_choice==2 && user_choice==1){
        cout<<"User wins! rock crushes scissor"<<endl;
    }
    else if(computer_choice==1 && user_choice==3){
        cout<<"User win! paper wraps rock"<<endl;

    }
    else if(computer_choice==3 && user_choice==2){
        cout<<"User wins! scissor cuts paper"<<endl;
    }
    else{
        cout<<"Tie! Both have the same thing"<<endl;
    }
    return;

}


int main(){
    while (true)
    {
        cout<<"Choose one of the following(1-3):"<<endl;
        cout<<"1.Rock"<<endl;
        cout<<"2.Scissor"<<endl;
        cout<<"3.Paper"<<endl;
        cout<<"4.Exit"<<endl;
        int user_choice;
        cout<<"Input your choice in numbers ";
        cin>>user_choice;
        if(user_choice==4){
            cout<<"Exit"<<endl;
            return 0;
        }else if(user_choice==1 || user_choice==2 || user_choice==3){
            int computer_choice=computerGuess();
            winner(computer_choice,user_choice);
            


        }
        else{
            cout<<"Invalid choice pls try again"<<endl;
        }
        
    } 
}
