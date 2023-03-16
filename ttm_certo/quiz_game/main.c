#include <stdio.h>

struct Question
{
    char * question;
    int answer; 
};


int main(){
    int i, points;
    struct Question q1;
    q1.question = "1) Which is the first search engine in internet?\n\n";

    printf("Welcome to the Game \n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 8 to quit the game\n");

    scanf("%d", &i);
    
    if(i == 7){
        printf("The game has started\n\n");
        


    }else if(i == 8){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }

    return 0;
}