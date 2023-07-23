#include<stdio.h>
#include<ctype.h>
void f();
int n,k,l,i,j,s;
int spc;
char alph, choice;
int main()
{ printf("                                             PATTERN PRINTING FOR ALPHABETS\n \n");

    do{
           printf("Enter the number:");

    scanf("%d", &n);
getchar();
    printf("Enter the letter");
    scanf("%c", &alph);
    getchar();
    alph = toupper(alph);

    printf("Enter your choice to continue (y/Y):");
    scanf("%c", &choice);
    getchar();
     f();

}

while ( choice=='Y'|| choice=='y');

                        return 0;


}
void f()
{
    switch (alph){

 case 'A':
     for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)

        if(i==j||i==-j ||(i==(n/2) && j==0)  )
             printf("*");
        else
            printf(" ");
        printf("\n");
    }  break;


     case 'B':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i==1 || i==n || j==1 || j==n ||i==(n/2)+1 )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }
break;
         case 'C':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i==1 ||  j==1 || i==n )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }
break;
             case 'D':

    for(i=1;i<=n+2;i++)
    {
        for(j=1;j<=n+2;j++)
        if(i==1 ||  j==1 || i==n+2 || j==n+2 )
        printf("*");
        else
            printf(" ");
        printf("\n");

    }
break;
case 'E':
for (i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
        if(i==1 || i==n || j==1 || i==n/2)
             printf("*");
        else
            printf(" ");
        printf("\n");

}break;
                 case 'F':

    for(i=1;i<=n+4;i++)
    {
        for(j=1;j<=n;j++)
        if(i==1 ||  j==1 ||  i==(n/2)+1 )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;

                     case 'G':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i==1 ||  j==1 || i==n || (j==n && i==n-1 ) || (j==n && i==n-2 ) || (j==n-1 && i==n-2 ) )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
     case 'H':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(j==2 || j==n-1 || (i==(n/2 )) )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
       case 'I':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i==1 || i==n || j==n/2 )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
        case 'J':

    for(i=1;i<=n;i++)
    {k=(n/2)+1;
        for(j=1;j<=n;j++)
        if(i==1 || j==(n/2)+1 || k>=j && i==n )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;

    case 'K':
        k=n/2;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                if (j==1 || k>=i && n-i==j || k<=i && i==j )
                     printf("*");
        else
            printf(" ");
        printf("\n");
    }break;


     case 'L':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(j==1 || i==n )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
     case 'M':
         k=(n/2);
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=n+1;j++)

             if( j==0 || j==n+1 || k>=i && i==j  ||k>=i && n-i==j  )
                printf("*");
           else
            printf(" ");
            printf("\n");
        }break;
     case 'N':
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                if(j==1|| j==n || i==j)
                printf("*");
            else
                printf(" ");
            printf("\n");

        }break;
     case 'O':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+2;j++)
        if(j==1 || i==n || j==n+2 || i==1 )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
       case 'P':

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-2;j++)
        if(j==1 || i==1 || i==n/2 )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
       case 'Q':
k=n+4;
    for(i=1;i<=n+2;i++)
    {
        for(j=1;j<=n+2;j++)
        if(i==1 || j==1|| j==k+2 || i==k+2  || i==(n+2)-1 && j==(n+2)-1||i==(n+2)-2 && j==(n+2)-2  )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
       case 'R':


    for(i=1;i<=n;i++)
    {k=n/2;
        for(j=1;j<=n;j++)
            if (j==1 || k>=i && j==n || i==1 || i==k || k<=i && i==j)
            printf("*");
        else
            printf(" ");
        printf("\n");
        //k++;
    }break;
        case 'S':

    for(i=1;i<=n;i++)
    {k=n/2;
        for(j=1;j<=n;j++)
        if(i==1 || i==k || k>=i && j==1 || k<=i && j==n || i==n) // j==1 && (i=n/2 ))//|| i==n/2) && j==n )
        printf("*");
        else
            printf(" ");
        printf("\n");
        k++;
    }break;
    case 'T':

    for(i=1;i<=n+4;i++)
    {
        for(j=-n;j<=n;j++)
        if(j==0 || i==1  )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;
    case 'U':

    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n;j++)
        if(j==1 || i==n-2 || j==n )
        printf("*");
        else
            printf(" ");
        printf("\n");
    }break;

case 'V':

spc=n;
l=1;
    for(i=1;i<=n;i++)
    { for (k=1;k<=l;k++)
         printf(" ");
        printf("*");
        l++;
        for(j=1;j<=spc;j++)
        printf(" ");
        printf("*");
        printf("\n");
        spc--;
    }break;
     case 'W':
         k=(n/2);
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=n+1;j++)

             if( j==0 || j==n+1 || k<=i && i==j  ||k<=i && n-i==j  )
                printf("*");
           else
            printf(" ");
            printf("\n");
        }break;
    case 'X':
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)

             if(i==j || n-i==j)
                printf("*");
           else
            printf(" ");
            printf("\n");
        }break;


    case 'Y':

for(i=1;i<=n;i++)
{
    k=(n/2);
    for(j=1;j<=n;j++)
        if(i==i && j==i && k>=i || k>=i && n-i==j|| k==k && j==k &&  k<=i )
        printf("*");
           else
            printf(" ");
            printf("\n");
           // k--;
        }break;

    case 'Z':
        k=n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                if(i==1||i==n|| i==i && j==k)
                 printf("*");
           else
            printf(" ");
            printf("\n");
            k--;
        }break;
default:
printf("enter valid data please ");
break;
}
}

















