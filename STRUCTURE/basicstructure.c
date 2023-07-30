#include<stdio.h>
int main()
{
    struct football
    {
        int goals;
        float ratings;
        char country;
    };
    struct football messi;
    messi.goals=100;
    messi.ratings=5.0;
    messi.country='a';

    printf("%d",messi.goals);

    struct football ronaldo;
    ronaldo.goals=102;
    ronaldo.ratings=4.9;
    ronaldo.country='p';

    printf("\n%.1f",ronaldo.ratings);
    printf("\n%c",ronaldo.country);

    return 0;
}