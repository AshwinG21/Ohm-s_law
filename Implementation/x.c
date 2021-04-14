
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


/* Valid operations */
enum operations{ Total_ser=1, Total_par, Cal_res, Res_val , Unit_con};

/* Display the menu of operations supported */
void calculator_menu(void);

/**
*  find the total resistance when connected in series
* @param[in] r1(resistance 1)
* @param[in] r2(resistance 2)
* @return Total series resistance
*/
float total_ser(float r1, float r2,float r3);

/**
*  find the total resistance when connected in parallel
* @param[in] r1(resistance 1)
* @param[in] r2(resistance 2)
* @return Total parallel resistance
*/
float total_par(float r1, float r2,float r3);



/**
*  Unit conversion(ohm-kiolohm,watt-kilowatt,.....) 
* @param[in] r(any unit)
* @return Converted Result 
*/
double unit_conv1(double r );
double unit_conv2(double r );
double unit_conv3(double r );
double unit_conv4(double r );

/**
*  calculate resistance based on voltage and current(ohms law)
* @param[in] v(volt)
* @param[in] i(current)
* @return Calculated resistance
*/
float  cal_res (float v, float i);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Circuit Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Total Series Resistance\n"
            "2. Total Parallel Resistance\n"
            "3. Resistance value based on voltage and current\n"
            "4. Resistance value based on color code\n"
            "5. Unit conversion\n"
            "6. Exit");
    printf("\n\n\tEnter your choice\n\n");
   
    int calculator_operation;
    float r1,r2,r3;
    scanf("%d", &calculator_operation);

    if(6 == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if((calculator_operation != 1)&&(calculator_operation != 2)&&(calculator_operation !=3)&&(calculator_operation !=4)&&(calculator_operation !=5))
   {
       printf("\n\t---Wrong choice---\n\tEnter valid choice\n");
      return;
   }
    switch(calculator_operation)
    {
        case Total_ser:

            printf("Enter the value of 3 resistors in ohms\n");
            printf("Note:-If less than 3 resistors, fill zero\n");
            scanf("%f%f%f",&r1,&r2,&r3);
            printf("\nTotal series resistance = %f ohms\n", total_ser(r1,r2,r3));
            break;

        case Total_par:

            printf("Enter the value of 3 resistors in ohms\n");
            printf("Note:-If less than 3 resistors, fill zero\n");
            scanf("%f%f%f",&r1,&r2,&r3);
            printf("\nTotal parallel resistance = %f ohms\n", total_par(r1,r2,r3));
            break;

        case Cal_res:

            printf("Enter the value of voltage and current in volts and ampere respectively\n");
            float v,amp;
            scanf("%f%f",&v,&amp);
            if(amp==0)
            printf("Invalid input:ampere");
            else
            printf("\nResistance = %f ohms\n", cal_res(v,amp));
            break;

        case Res_val:

            printf("Enter the value of 3 resistors in ohms\n");
            
            scanf("%f%f%f",&r1,&r2,&r3);
            printf("\nTotal parallel resistance = %f ohms\n", total_par(r1,r2,r3));
            break;
           
        case 5:

            printf("\nAvailable Operations\n");
        L1:  printf("\n1. Kohm--->ohm\n"
            "2. ohm--->Kohm\n"
            "3. Mohm--->ohm\n"
            "4. ohm--->Mohm\n"
            );
            printf("\n\tEnter your choice\n\n"); 
            int i;
            scanf("%d",&i);
            if((i!= 1)&&(i!=2)&&(i!=3)&&(i!=4))
            {printf("\n\t---Wrong choice---\n\tEnter valid choice\n");
             goto L1;}
            float val;
            if(i==1)
            {
                printf("Enter the value in kohm\n");
                scanf("%f",&val);
                printf("\n%f Kohm = %lf ohm\n", val,unit_conv1(val));
                break;}
            if(i==2)
            {
                printf("Enter the value in ohm\n");
                scanf("%f",&val);
                printf("\n%f ohm = %lf Kohm\n",val,unit_conv2(val));
                break;}
            if(i==3)
            {
                printf("Enter the value in Mohm\n");
                scanf("%f",&val);
                printf("\n%f Mohm = %lf ohm\n",val,unit_conv3(val));
                break;}
            if(i==4)
            {
                printf("Enter the value in ohm\n");
                scanf("%f",&val);
                printf("\n%f ohm = %lf Mohm\n",val,unit_conv4(val));
            break;}

    }
}
float total_ser(float r1, float r2,float r3)
{ 
    float b;
    b=r1+r2+r3;
    return b;
}
float total_par(float r1, float r2,float r3)
{
    float c;
    c=((r1*r2*r3)/(r3*r2+r1*r3+r2*r1));
    return c;
}
float  cal_res (float v, float i)
{
    return(v/i);
}
double unit_conv1(double r )
{
   return r*pow(10,3);
}
double unit_conv2(double r )
{
    return r*pow(10,-3);
}
double unit_conv3(double r )
{
    return r*pow(10,6);
}
double unit_conv4(double r )
{
    return r*pow(10,-6);
}