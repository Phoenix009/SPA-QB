// members: Player name, team name, batting
// average. Create array of objects, store information about players, sort and display
// information of players in descending order of batting average.


#include<stdio.h>

struct Player
{
	char name[30];
	char team[30];
	float avg;
};

void main()
{
	int n;
	printf("\nHow many players data to be collected : ");
	scanf("%d", &n);
	struct Player player[n];
	struct Player temp;
	printf("\nEnter the data : ");
	for(int i = 0; i<n; i++)
	{
		printf("\nEnter the name of player %d : ", i+1);
		scanf("%s", player[i].name);
		printf("\nEnter the team name of the player %d : ", i+1);
		scanf("%s", player[i].team);
		printf("\nEnter the batting average of player %d : ", i+1);
		scanf("%f", &player[i].avg);
	}

	for(int i =0; i<n; i++)
	{
		for(int j =0; j<n-1; j++)
		{
			if(player[j].avg<player[j+1].avg)
			{
				temp = player[j];
				player[j] = player[j+1];
				player[j+1] = temp;
			}
		}
	}

	printf("\nName\tTeam\tAverage");
	printf("\n---------------------");

	for(int i =0; i<n; i++)
	{
		printf("\n%s\t%s\t%.2f", player[i].name, player[i].team, player[i].avg);
	}


}