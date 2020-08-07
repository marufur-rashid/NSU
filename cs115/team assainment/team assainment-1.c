#include<stdio.h>
int main ()
{
    printf("1. SMS Offer: 50 sms: 5.99 taka, 100 sms: 8.02 taka, 300 sms: 15.00 taka; validity 7 days \n ");
    printf("2. Talk-Time Offer:  50 minutes: 31.95, 300 minutes: 179.89, 1000 minutes: 599.63; validity 15 days  \n ");
    printf("3. Internet Offer: 100 MB: 42.70 taka, 250 MB: 52.37 taka, 1.5 GB: 93.95 taka; validity 30 days    \n ");
    printf("4. Monthly Plan Offer: 500 MB, 200 SMS, 100 minutes Talk-Time: 293.47 taka; validity 30 days      \n ");
    printf("5. Recharge Offer: 250 MB, 20 SMS: on 29 taka recharge; validity 21 days \n");
    printf("6. Star Customer Offer: 3 GB, 100 minutes, 50 sms: 120 taka; validity 45 days \n");
    printf("7. Gold Customer Offer: 5GB, 150 minutes, 100 sms: 130 taka; validity 45 days \n");
    printf("8. Platinum Customer Offer: 9 GB, 200 minutes, 150 sms: 150 taka; validity 45 days \n");
    printf("9. Pay as you Go: .60 taka per second; validity till balance remains \n");

    int choice , x  ;

     printf(" ask the user to choose an offer ");
     scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("SMS Offer: validity 7 days \n 1: 50 sms: 5.99 taka, \n 2: 100 sms:8.02 taka, \n 3: 300 sms: 15.00 taka \n  ");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                printf("5.99 taka");
                break;
            case 2:
                printf("8.02 taka");
                break;
            case 3:
                printf("15.00");
                break;
        }
        break ;
    case 2:
        printf("Talk-Time Offer:validity 15 days \n 1: 50 minutes: 31.95, \n 2: 300 minutes: 179.89, \n 3: 1000 minutes: 599.63\n  ");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                printf("31.95");
                break ;
            case 2:
                printf("179.89");
                break;
            case 3:
                printf("599.63");
                break;

        }
        break ;
    case 3:
        printf("Internet Offer: validity 30 days \n 1. 100 MB: 42.70 taka,\n 2. 250 MB: 52.37 taka,\n 3. 1.5 GB: 93.95 taka\n; ");
        scanf("%d",&x);
            switch(x)
            {
                case 1:
                    printf("42.70 taka ");
                    break;
                case 2:
                    printf("52.37 taka");
                    break ;
                case 3:
                    printf("93.95 taka");
                    break;
            }
    case 4:
                    printf("Monthly Plan Offer: validity 30 days\n 1.500 MB, 200 SMS, 100 minutes Talk-Time: 293.47 taka \n ");
                    scanf("%d",x);
                    switch (x)
                    {
                        case 1:
                        printf("293.47 taka");
                        break ;
                    }
                    break ;
    case 5:
        printf(" Recharge Offer: validity  \n 1. 21 days 250 MB, 20 SMS: on 29 taka recharge \n   ");
        scanf("%d",&x);
            switch (x)
        {
                case 1:
                    printf("29 taka");
                    break ;}
                    break;
    case 6:
         printf("Star Customer Offer:validity 45 days \n 1. 3 GB, 100 minutes, 50 sms: 120 taka \n  ");
         scanf("%d",&x);
          switch (x)
          {
              case 1:
              printf("120 taka");
              break;
          }
            break;
    case 7:
        printf(" Gold Customer Offer:validity 45 days \n 1. 5GB, 150 minutes, 100 sms: 130 taka\n   ");
        scanf("%d",&x);
                switch (x)
                {
                case 1:
                    printf("130 taka ");
                    break;
                }
        break;
    case 8:
        printf(" Platinum Customer Offer: validity 45 days \n 1. 9 GB, 200 minutes, 150 sms: 150 taka\n  ");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("150 taka");
            break;
        }
        break ;
    case 9:
            printf(" Pay as you Go:validity till balance remains \n 1. 60 taka per second \n ");
            scanf("%d",&x);
            switch(x)
            {
            case 1:
                printf("60 taka");
                break;
            }
            break;

    }
 return 0;

}
