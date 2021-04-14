#include<stdio.h>
int main()
{
    printf("\nEnter the 5-character color description of the resistor:\n\n ");
    printf("0 = black\n"
            "1 = brown\n"
            "2 = red\n"
            "3 = orange\n"
            "4 = yellow\n"
            "5 = green\n"
            "6 = blue\n"
            "7 = violet\n"
            "8 = grey\n"
            "9 = white\n"
            "10 = gold\n"
            "11 = silver\n\n");
    
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     
    
     
      
    char* res_val(a,b,c,d,e)
    {
        float z;
        z=(a*100)+(b*10)+(c)*pow(10,d);
        printf("Resistor value=%f +/- ")
        char val[20]="";








      int a[5],i;
      a[0]=a;
      a[1]=b;
      a[2]=c;
      a[3]=d;
      a[4]=e;


      for(i=0;i<5;i++)
      {
      switch ( a[i] ) 
      {
        case 0:
          return 0;
        case 2:
          return 1;
     case 3:
          return 2;
     case 'O':
          return 3;
     case 'Y':
          return 4;
     case 'G':
          return 5;
     case 'E':
          return 6;
     case 'V':
          return 7;
     case 'A':
          return 8;
     case 'W':
          return 9;
     default:
          return -999.0;     /* illegal code */
     }


 



  
}