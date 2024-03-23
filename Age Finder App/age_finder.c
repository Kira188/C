#include<stdio.h>
#include<math.h>
#include<stdalign.h>
#include<stdio.h>
#include<time.h>
int main(void)
{

    unsigned int birthyear;
    unsigned int birthday;
    unsigned int birthmonth;
    unsigned int curryear;
    unsigned int currday;
    unsigned int currmonth;
    unsigned int age;
    unsigned int monage;
    unsigned int dayage;
    int i;
    char Ok[1];
    int leapyear;
    time_t current_time = time(NULL);
    struct tm *tm = localtime(&current_time);
    printf("Current Date and Time :\n");
    printf("%s\n\n\n\n\n", asctime(tm));
    printf("\ntype what is your birth day\n");
    scanf("%d",&birthday);
    printf("\ntype what is your birth month\n");
    scanf("%d",&birthmonth);
    printf("\ntype what is your birth year\n");
    scanf("%d",&birthyear);
    printf("\ntype what is your current day \n");
    scanf("%d",&currday);
    printf("\ntype what is your current month\n");
    scanf("%d",&currmonth);
    printf("\ntype what is your current year\n");
    scanf("%d",&curryear);
    dayage=currday-birthday;
    monage=currmonth-birthmonth;
    leapyear=birthyear%4;
    if(birthyear<=999)
    {
        printf("Error the year is to less");
        return 0;
    }
    else if(birthyear>=9999)
    {
        printf("Error the year is to much");
        return 0;
    }
    else if(curryear<=999)
    {
        printf("Error the year is to less");
        return 0;
    }
    else if(curryear>=9999)
    {
        printf("Error the year is to much");
        return 0;
    }
    else if (birthmonth>12)
    {
        printf("Error this month is not valid");
        return 0;
    }
    else if (currmonth>12)
    {
        printf("Error this month is not valid");
        return 0;
    }
    else if (curryear<=birthyear)
    {
        printf("Error this year is not valid");
        return 0;
    }
    else if (curryear>birthyear)
    {
        if (leapyear!=4)
        {
            if (birthmonth==1)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==2)
            {
                age=(curryear-birthyear);

                printf("birthyear :%d\n",age);
                if (currmonth<birthmonth)
                {
                    printf("month :%d\n",monage+12);
                    if (currday<birthday)
                    {
                        printf("\nday :%d\n",dayage+28);

                    }
                    else if(currday>birthday)
                    {
                        printf("\nday :%d\n",dayage);
                    }
                    else if(currday==birthday)
                    {
                        printf("\nday :0\n");
                    }
                }
                else if(currmonth>birthmonth)
                {
                    if (currmonth==3)
                    {
                        printf("month :0");
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }

                    else
                    {
                        printf("month :%d\n",monage);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }

                }
                else if(currmonth==birthmonth)
                {

                    if (currday<birthday)
                    {
                        printf("month :%d",monage+11);
                        printf("\nday :%d\n",dayage+28);

                    }
                    else if (currday>birthday)
                    {
                        printf("month :%d\n",monage);
                        printf("\nday :%d\n",dayage);
                    }
                    else if (currday==birthday)
                    {
                        printf("month :0\n");
                        printf("day :0\n");
                        printf("happy birthday");
                    }
                }


                else if (birthmonth<currmonth)
                {
                    age=(curryear-birthyear);

                    printf("birthyear :%d\n",age);
                    if (currmonth<birthmonth)
                    {
                        printf("month :%d\n",monage+12);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth>birthmonth)
                    {
                        printf("happy birthday");
                        printf("month :%d/n",monage);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth==birthmonth)
                    {

                        if (currday<birthday)
                        {
                            printf("month :%d",monage+11);
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if (currday>birthday)
                        {
                            printf("month :%d\n",monage);
                            printf("\nday :%d\n",dayage);
                        }
                        else if (currday==birthday)
                        {
                            printf("month :0\n");
                            printf("\nday :0\n");
                        }
                    }

                }
                else if (currmonth<birthmonth)
                {
                    age=(curryear-birthyear)-1;
                    printf("birthyear :%d\n",age);
                    if (currmonth<birthmonth)
                    {
                        printf("month :%d\n",monage+12);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth>birthmonth)
                    {
                        printf("month :%d\n",monage);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth==birthmonth)
                    {

                        if (currday<birthday)
                        {
                            printf("month :%d",monage+11);
                            printf("\nday :%d\n",dayage+28);

                        }
                        else if (currday>birthday)
                        {
                            printf("month :%d\n",monage);
                            printf("\nday :%d\n",dayage);
                        }
                        else if (currday==birthday)
                        {
                            printf("month :0\n");
                            printf("\nday :0\n");
                        }
                    }
                }

                else if (currmonth==birthmonth)
                {
                    if (currday==birthday)
                    {
                        printf("happy birthday\n");
                        age=(curryear-birthyear);
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }
                    else if (currday>birthday)
                    {
                        age=(curryear-birthyear);
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);

                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }
                    else if (currday<birthday)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+28);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                }


            }
            if (birthmonth==3)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==4)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==5)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==6)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }

            if (birthmonth==7)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==8)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==9)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==10)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==11)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==12)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }

        }
        else if (leapyear==4)
        {
            if (birthmonth==1)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==2)
            {
                age=(curryear-birthyear);

                printf("birthyear :%d\n",age);
                if (currmonth<birthmonth)
                {
                    printf("month :%d\n",monage+12);
                    if (currday<birthday)
                    {
                        printf("\nday :%d\n",dayage+29);

                    }
                    else if(currday>birthday)
                    {
                        printf("\nday :%d\n",dayage);
                    }
                    else if(currday==birthday)
                    {
                        printf("\nday :0\n");
                    }
                }
                else if(currmonth>birthmonth)
                {
                    if (currmonth==3)
                    {
                        printf("month :0");
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }

                    else
                    {
                        printf("month :%d\n",monage);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }

                }
                else if(currmonth==birthmonth)
                {

                    if (currday<birthday)
                    {
                        printf("month :%d",monage+11);
                        printf("\nday :%d\n",dayage+29);

                    }
                    else if (currday>birthday)
                    {
                        printf("month :%d\n",monage);
                        printf("\nday :%d\n",dayage);
                    }
                    else if (currday==birthday)
                    {
                        printf("month :0\n");
                        printf("day :0\n");
                        printf("happy birthday");
                    }
                }


                else if (birthmonth<currmonth)
                {
                    age=(curryear-birthyear);

                    printf("birthyear :%d\n",age);
                    if (currmonth<birthmonth)
                    {
                        printf("month :%d\n",monage+12);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth>birthmonth)
                    {
                        printf("happy birthday");
                        printf("month :%d/n",monage);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth==birthmonth)
                    {

                        if (currday<birthday)
                        {
                            printf("month :%d",monage+11);
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if (currday>birthday)
                        {
                            printf("month :%d\n",monage);
                            printf("\nday :%d\n",dayage);
                        }
                        else if (currday==birthday)
                        {
                            printf("month :0\n");
                            printf("\nday :0\n");
                        }
                    }

                }
                else if (currmonth<birthmonth)
                {
                    age=(curryear-birthyear)-1;
                    printf("birthyear :%d\n",age);
                    if (currmonth<birthmonth)
                    {
                        printf("month :%d\n",monage+12);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth>birthmonth)
                    {
                        printf("month :%d\n",monage);
                        if (currday<birthday)
                        {
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if(currday>birthday)
                        {
                            printf("\nday :%d\n",dayage);
                        }
                        else if(currday==birthday)
                        {
                            printf("\nday :0\n");
                        }
                    }
                    else if(currmonth==birthmonth)
                    {

                        if (currday<birthday)
                        {
                            printf("month :%d",monage+11);
                            printf("\nday :%d\n",dayage+29);

                        }
                        else if (currday>birthday)
                        {
                            printf("month :%d\n",monage);
                            printf("\nday :%d\n",dayage);
                        }
                        else if (currday==birthday)
                        {
                            printf("month :0\n");
                            printf("\nday :0\n");
                        }
                    }
                }

                else if (currmonth==birthmonth)
                {
                    if (currday==birthday)
                    {
                        printf("happy birthday\n");
                        age=(curryear-birthyear);
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }
                    else if (currday>birthday)
                    {
                        age=(curryear-birthyear);
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);

                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }
                    else if (currday<birthday)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+29);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                }


            }

            if (birthmonth==3)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==4)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==5)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==6)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }

            if (birthmonth==7)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==8)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==9)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==10)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==11)
            {
                if(birthday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>30)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+30);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+30);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }
            if (birthmonth==12)
            {
                if(birthday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else if (currday>31)
                {
                    printf("the day is not valid");
                    return 0;
                }
                else
                {

                    if (birthmonth<currmonth)
                    {
                        age=(curryear-birthyear);

                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }

                    }
                    else if (currmonth<birthmonth)
                    {
                        age=(curryear-birthyear)-1;
                        printf("birthyear :%d\n",age);
                        if (currmonth<birthmonth)
                        {
                            printf("month :%d\n",monage+12);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth>birthmonth)
                        {
                            printf("month :%d\n",monage);
                            if (currday<birthday)
                            {
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if(currday>birthday)
                            {
                                printf("\nday :%d\n",dayage);
                            }
                            else if(currday==birthday)
                            {
                                printf("\nday :0\n");
                            }
                        }
                        else if(currmonth==birthmonth)
                        {

                            if (currday<birthday)
                            {
                                printf("month :%d",monage+11);
                                printf("\nday :%d\n",dayage+31);

                            }
                            else if (currday>birthday)
                            {
                                printf("month :%d\n",monage);
                                printf("\nday :%d\n",dayage);
                            }
                            else if (currday==birthday)
                            {
                                printf("month :0\n");
                                printf("\nday :0\n");
                            }
                        }
                    }

                    else if (currmonth==birthmonth)
                    {
                        if (currday==birthday)
                        {
                            printf("happy birthday\n");
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday>birthday)
                        {
                            age=(curryear-birthyear);
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);

                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }
                        }
                        else if (currday<birthday)
                        {
                            age=(curryear-birthyear)-1;
                            printf("birthyear :%d\n",age);
                            if (currmonth<birthmonth)
                            {
                                printf("month :%d\n",monage+12);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth>birthmonth)
                            {
                                printf("month :%d\n",monage);
                                if (currday<birthday)
                                {
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if(currday>birthday)
                                {
                                    printf("\nday :%d\n",dayage);
                                }
                                else if(currday==birthday)
                                {
                                    printf("\nday :0\n");
                                }
                            }
                            else if(currmonth==birthmonth)
                            {

                                if (currday<birthday)
                                {
                                    printf("month :%d",monage+11);
                                    printf("\nday :%d\n",dayage+31);

                                }
                                else if (currday>birthday)
                                {
                                    printf("month :%d\n",monage);
                                    printf("\nday :%d\n",dayage);
                                }
                                else if (currday==birthday)
                                {
                                    printf("month :0\n");
                                    printf("\nday :0\n");
                                }
                            }

                        }
                    }


                }
            }

        }


    }

    printf("\nplease enter Ok:  ");
    scanf("%s",Ok);
    for (i=0; i<10000; i++)
    {
        printf("%c\t",i);
    }
    printf("bye");
    return 0;
}

