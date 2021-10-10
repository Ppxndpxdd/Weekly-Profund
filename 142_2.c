#include <stdio.h>

int checkscore (char* pw)
{
    int len = 0;
    unsigned int score = 0;
    while (*pw != '\0')
    {
        len++;
        if ('a'<=*pw && *pw<='z')
        {
            score=score|1;
        }
        if ('0'<=*pw && *pw<='9')
        {
            score=score|2;
        }
        if ('A'<=*pw && *pw<='Z')
        {
            score=score|4;
        }
        if (*pw=='$' || *pw=='#' || *pw=='@' )
        {
            score=score|8;
        }
        pw++;
    }
    if (6<=len&&len<=12)
    {
        score=score|16;
    }
    return (score & 1)+!!(score & 2)+!!(score & 4)+!!(score & 8)+!!(score & 16);
}

int main()
{
    char kob [20];
    char romtham [20];    
    char jojo [20];
    scanf("%[^,],%[^,],%[^\n]",kob,romtham,jojo);
    int kobscore = checkscore(kob);
    int romthamscore = checkscore(romtham);
    int jojoscore = checkscore(jojo);

    if (kobscore >= romthamscore && kobscore >= jojoscore)
    {
        printf("%s (kob)",kob);
    }
    else if (romthamscore >= jojoscore && romthamscore > kobscore)
    {
        printf("%s (romtham)",romtham);
    }
    else
    {
        printf("%s (jojo)",jojo);
    }
    return 0;
}
