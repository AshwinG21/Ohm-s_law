#include<stdio.h>
#include<math.h>
int res_val(int a,int b,int c,int d);
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
    if((e!=10)&&(e!=11))
    {printf("\nInvalid Input\n");
    return 0;}
    if((d==8)||(d==9))
    {printf("\nInvalid Input\n");
    return 0;}
    if((a==10)||(a==11)||(b==10)||(b==11)||(c==10)||(c==11))
    {printf("\nInvalid Input\n");
    return 0;}

    if(e==10)
    printf("Resistor value = %d +/- %d %% ohm\n",res_val(a,b,c,d),e-5);
    if(e==11)
    printf("Resistor value = %d +/- %d %% ohm\n",res_val,e-1);
    return 0;
}
      
int res_val(int a,int b,int c,int d)
    {
        float z;
        z=((a*100)+(b*10)+(c))*pow(10,d);
        return z;
    }