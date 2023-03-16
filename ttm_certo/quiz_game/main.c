#include <stdio.h>

struct Question
{
    char * question;
    int answer; 
    char * alt[4];
};


int main(){
    int i;
    int points = 0;
    int ans;
    struct Question questions[5];
    questions[0].question = "1) Which is the first search engine in internet?";
    questions[0].alt[0] = "1) Google";
    questions[0].alt[1] = "2) Archie";
    questions[0].alt[2] = "3) Wais";
    questions[0].alt[3] = "4) AltaVista";
    questions[0].answer = 2;

    questions[1].question = "2) Which one is the first web browser inveted in 1990?";
    questions[1].alt[0] = "1) Internet Explorer";
    questions[1].alt[1] = "2) Mosaic";
    questions[1].alt[2] = "3) Mozilla";
    questions[1].alt[3] = "4) Nexus";
    questions[1].answer = 4;

    questions[2].question = "3) First computer virus is know as?";
    questions[2].alt[0] = "1) Rabbit";
    questions[2].alt[1] = "2) Creeper Virus";
    questions[2].alt[2] = "3) Elk cloner";
    questions[2].alt[3] = "4) SCA Virus";
    questions[2].answer = 2;

    questions[3].question = "4) Firewakk in computer is used for?";
    questions[3].alt[0] = "1) Security";
    questions[3].alt[1] = "2) Data Transmission";
    questions[3].alt[2] = "3) Monitoring";
    questions[3].alt[3] = "4) Authentication";
    questions[3].answer = 1;
    
    questions[4].question = "5) Which of the following is not a database management software?";
    questions[4].alt[0] = "1) Mysql";
    questions[4].alt[1] = "2) Oracle";
    questions[4].alt[2] = "3) cobal";
    questions[4].alt[3] = "4) Sybase";
    questions[4].answer = 3;


    printf("Welcome to the Game \n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 8 to quit the game\n");

    scanf("%d", &i);
    
    if(i == 7){
        printf("The game has started\n\n");

        for (int index = 0; index < 5; index ++)
        {
            printf("%s\n\n", questions[index]);
            for (int j = 0; j < 4; j++)
            {
                printf("%s\n", questions[index].alt[j]);
            }
            printf("\n");

            scanf("%d", &ans);

            if(ans == questions[index].answer){
                printf("Correct answer\n\n");
                points += 5;
            }
            else{
                printf("Wrong answer\n\n");
            }
        }

        printf("The game has ended\n\n");
        printf("You scored a total of %d points\n\n", points);
    }else if(i == 8){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }

    return 0;
}