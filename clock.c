#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h>
int main()
{
    int  time,hr,min,sec,form,ap,work; char s[3];
    printf("Show Clock format:\n1.12 hours format\n2.24 hours format\n");
    scanf("%d",&form);
    printf("**Set the clock according to your local time**\n");
    printf("Hours  :   \n");
    scanf("%d",&hr);
    printf("Minutes  :    \n");
    scanf("%d",&min);
    printf("Seconds  :     \n");
    scanf("%d",&sec);
if(form==1)
{
    printf("Press\n1.am\n2.pm\n");
    scanf("%d",&ap);
}
if(ap==1 && form==1)
    strcpy(s,"am");

if(ap==2 && form==1)
    strcpy(s,"pm");

if(form==2)
    strcpy(s," ");

    if((form==1&& hr>12) || (form==2 && hr>24 ) )
    {
        printf("\n\t\t\t\t\tInvalid hour format");
        getch();
        exit(0);}






   while(1)
{   printf("\tPress 0 to exit");
if(kbhit())
{
    char ch=getch();
    if(ch=='0')
        exit(0);
}


       if(sec<60)
       {
           sec+=1;
           if(sec<60)
           {
               printf("\n\n\n\t\t\t\t\t\t    ***DIGITAL CLOCK***\n\n\t\t\t\t\t\t\t%02d:%02d:%02d  %s\n",hr,min,sec,s);}

             if(sec==60)
       {
           sec=00;
           min+=1;
           if(min<60)
           {
               printf("\n\n\n\t\t\t\t\t\t    ***DIGITAL CLOCK***\n\n\t\t\t\t\t\t\t%02d:%02d:%02d  %s\n",hr,min,sec,s);}

           if(min==60)
           {
               min=00;
               hr+=1;
if(hr==12 && ap==1)
{
    strcpy(s,"pm");
}
if(hr==12 && ap==2)
{
    strcpy(s,"am");
}

               if(form==1 && hr==13)
                hr=1;
                if(form==2 && hr==24)
                    hr=0;
               printf("\n\n\n\t\t\t\t\t\t    ***DIGITAL CLOCK***\n\n\t\t\t\t\t\t\t%02d:%02d:%02d  %s\n",hr,min,sec,s);

           }

       }

       }

 sleep(1);
system("cls");

   }



}
