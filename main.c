#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
int key=0;

struct login
{
    char fname[100];
    char lname[100];
    char username[100];
    char password[100];
};

void registe();
void login();
int WelcomeMessage();
int Bus();
int Train();
int Plane();
int Schedule();
int BuyTicket();
int main()
//verifying the user......
{
verification_line:
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############             Please Verify Yourself               ############");
    printf("\n\t\t\t############       Please Register If You're a New User       ############");
    printf("\n\t\t\t############                    Or Login                      ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    int cho;
    printf("\n\n\t\t\tEnter 1 For Register Or Enter 2 For Login: ");
    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        registe();
        system("cls");
        login();
    }
    else if(cho==2)
    {
        system("CLS");
        login();
    }
    else
    {
        system("cls");
        goto verification_line;
    }


    system("cls");
    int scd=0;
    int key;
Welcome_Line:
    system("cls");
    key=WelcomeMessage();
    if(key==1)
    {
        scd= Bus();
    }
    else if(key==2)
    {
        scd= Train();
    }
    else if(key==3)
    {
        scd= Plane();
    }
    else
    {
        goto Welcome_Line;
    }

    Schedule();

    system("cls");
    BuyTicket();



    return 0;

}
void registe()
{
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                  ############");
    printf("\n\t\t\t############             Please Register Yourself             ############");
    printf("\n\t\t\t############                                                  ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    FILE *log;
    log=fopen("login12.txt","w");
    struct login l;

    printf("\n\t\t\tEnter First Name: ");
    scanf("%s",l.fname);
    printf("\n\t\t\tEnter Last Lame: ");
    scanf("%s",l.lname);

    printf("\n\t\t\tEnter Username: ");
    scanf("%s",l.username);

    printf("\n\t\t\tEnter Password: ");
    scanf("%s",l.password);

    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\n\t\t\tRegistration Successful...\n");
    printf("\n\n\t\t\tNow login with userid and password.\n");
    printf("\n\t\t\tPress Any Key To Continue.........");
    getch();
    system("CLS");

}

void login()
{
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                  Please Enter                    ############");
    printf("\n\t\t\t############            Your UserName And Password            ############");
    printf("\n\t\t\t############                    TO Login                      ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    char username[200],password[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("\n\n\t\t\tUserName: ");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword: ");
    scanf("%s",&password);

    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {

            key = WelcomeMessage;

        }
        else
        {
            system("cls");
            printf("Incorrect Username or password. Please Try again..\n\n");
            login();
        }
    }
    fclose(log);

}

int WelcomeMessage()
{

    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =                 AFR Ticket                =");
    printf("\n\t\t\t        =               Booking  System             =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    int TransportTYpe;
    printf("\n\n\n\t\t\t Available Transport Options:\n");
    printf("\n\t\t\t 1. Bus\n");
    printf("\t\t\t 2. Train\n");
    printf("\t\t\t 3. Plane\n");
    printf("\n\n\n\t\t\t Enter How You Want to Travel:");
    scanf("%d", &TransportTYpe);

    system("cls");

    return TransportTYpe;
}

int Bus()
{
DestinationB_Line:
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                   WELCOME                 =");
    printf("\n\t\t\t        =                     To                    =");
    printf("\n\t\t\t        =                   AFR BUS                 =");
    printf("\n\t\t\t        =               Ticket Booking              =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");


    printf("\n\n\n\t\t\tAvailable Buses:");
    printf("\n\t\t\t\t1. Dhaka to Chittagong");
    printf("\n\t\t\t\t2. Dhaka to Cox's Bazar");
    printf("\n\t\t\t\t3. Dhaka to Sylhet");
    printf("\n\t\t\t\t4. Dhaka to Teknaf");
    printf("\n\t\t\t\t5. Dhaka to Rajshahi");
    printf("\n\t\t\t\t6. Dhaka to Khulna");
    printf("\n\t\t\t\t7. Dhaka to Rangpur");
    printf("\n\t\t\t\t8. Dhaka to Barishal");
    printf("\n\t\t\t\t9. Dhaka to Rangamati");

    int dest;
    printf("\n\t\t\tEnter Your Destination or 0 to exit ");
    scanf("%d", &dest);
    system("cls");

    if(dest==0)
    {
        return 0;
    }
    else if(dest==1||dest==2||dest==3|| dest==4||dest==5||dest==6||dest==7||dest==8||dest==9)
    {
        return 1;
    }
    else
    {
        system("cls");
        goto DestinationB_Line;
    }
}
