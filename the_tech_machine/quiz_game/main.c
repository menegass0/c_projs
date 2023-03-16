#include <stdio.h>

int main(){
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5; 

    printf("Welcome to the Game \n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 8 to quit the game\n");

    scanf("%d", &i);

    if(i == 7){
        printf("the game has started\n\n");
        printf("1) Which is the first search engine in internet?\n\n");
        printf("1) Google\n");
        printf("2) archie\n");
        printf("3) Wais\n");
        printf("4) AltaVista\n");
        
        printf("Enter your answer: ");
        scanf("%d", &ans1);

        if(ans1 == 2){
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d points\n\n", point1);
        }
        else {
            printf("Wrong answer\n");
            point1 = 0;
            printf("You have scored %d point\n\n", point1);
        }

        printf("2) Which one is the first web browser inveted in 1990?\n\n");
        printf("1) Internet Explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");

        printf("Enter your answer: ");
        scanf("%d", &ans2);
        
        if(ans2 == 4){
            printf("Correct Answer\n");
            point2 = 5;
            printf("you have scored %d points\n\n", point2);
        }
        else{
            printf("Wrong answer\n");
            point2 = 0;
            printf("You have scored %d points\n\n", point2);
        }

        printf("3) First computer virus is know as?\n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper Virus\n");
        printf("3) Elk cloner \n");
        printf("4) SCA Virus\n");

        printf("Enter your answer: ");
        scanf("%d", &ans3);

        if(ans3 == 2){
            printf("Correct Answer\n");
            point3 = 5;
            printf("you have scored %d points\n\n", point3);
        }
        else{
            printf("Wrong answer\n");
            point3 = 0;
            printf("You have scored %d points\n\n", point3);
        }

        printf("4) Firewakk in computer is used for?\n\n");
        printf("1) Security\n");
        printf("2) Data Transmission\n");
        printf("3) Monitoring\n");
        printf("4) Authentication\n");

        printf("Enter your answer: ");
        scanf("%d", &ans4);

        if(ans4 == 1){
            printf("Correct Answer\n");
            point4 = 5;
            printf("you have scored %d points\n\n", point4);
        }
        else{
            printf("Wrong answer\n");
            point4 = 0;
            printf("You have scored %d points\n\n", point4);
        }

        printf("5) Which of the following is not a database management software?\n\n");
        printf("1) Mysql\n");
        printf("2) Oracle\n");
        printf("3) cobal\n");
        printf("4) Sybase\n");

        printf("Enter your answer: ");
        scanf("%d", &ans5);

        if(ans5 == 3){
            printf("Correct Answer\n");
            point5 = 5;
            printf("you have scored %d points\n\n", point4);
        }
        else{
            printf("Wrong answer\n");
            point5 = 0;
            printf("You have scored %d points\n\n", point5);
        }

        printf("the total of points is: %d", (point1+point2+point3+point4+point5));

    }
    else if(i == 8){
        printf("the game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }


    return 0;
}