#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,nguess=1,guess;
    srand(time(0));
    number=rand()%100 + 1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (number>guess)
        {
            printf("Higher number please\n");
        }
        else if(number<guess)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("You guessed it in %d attempts.\n",nguess);
        }
        nguess++;
        
    } while (number!=guess);
    
    return 0;
}