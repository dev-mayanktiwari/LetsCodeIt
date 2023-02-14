// Define a structure called cricket with player name, team name, batting average, 
// for 50 players & 5 teams. Print team wise list contains names of player with their 
// batting average.
#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX_PLAYERS 50
#define MAX_TEAMS 5
#define MAX_NAME_LENGTH 50

typedef struct cricket {
    char player[MAX_NAME_LENGTH];
    char team[MAX_NAME_LENGTH];
    float average;
} cric;

int main() {
    int i, j;
    cric players[MAX_PLAYERS];
    int no_players=0, no_teams=0;
    char teams[MAX_PLAYERS][MAX_NAME_LENGTH];
    printf("Please enter the number of players (maximum %d)",MAX_PLAYERS);
    scanf("%d",&no_players);
    for (i=0; i<no_players; i++){    
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter the player name: ");
        scanf("%s", players[i].player);
        printf("Enter the team name: ");
        while(getchar()!='\n');
        scanf("%s", players[i].team);
        printf("Enter the batting average: ");
        scanf("%f", &players[i].average);
        int team_flag=0;
        for (j=0; j<no_teams; j++){
            if (strcmp(players[i].team,teams[j])==0) {
                team_flag=1;
                break;
            }
        }
        if (!team_flag){
            if (no_teams>=MAX_TEAMS) {
                printf("The team limit reached.");
                break;
            }
            strcpy(teams[no_teams],players[i].team);
            no_teams++;
        }

    }
    printf("Printing list of players teamwise!!!\n");
    for (i=0; i<no_teams; i++) {
        printf("\n Team: %s\n", teams[i]);
        for (j=0; j<no_players; j++) {
            if (strcmp(players[j].team,teams[i])==0) {
                printf("%s - Batting average: %.3f\n", players[j].player, players[j].average);
            }
        }

    }
}