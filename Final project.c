#include<stdio.h>
float total=0;
int kr_food();
int nk_food();
int adi_food();
int kr()
{
   printf("\t\t\t\t***KR Restaurant***\n\n");
  printf("No Menu      Price\n");
  printf("0. Dosai     -25\n");
  printf("1. Idly      -15\n");
  printf("2. Parotta   -15\n");
  printf("3. Biriyani  -140\n");
  printf("4. Pongal    -75\n");
  printf("5. Poori     -50\n");
}
int nk()
{
     printf("\t\t\t\t***NK Restaurant***\n\n");
  printf("No Menu           Price\n");
  printf("0. Sambar rice    -10\n");
  printf("1. Tamarind rice  -25\n");
  printf("2. Curd rice      -15\n");
  printf("3. Tomato rice    -40\n");
  printf("4. Bisibellapath  -80\n");
  printf("5. Coconut rice   -20\n");
}
int adi()
{
  printf("\t\t\t\t***Adi Samayal***\n\n");
  printf("No Menu           Price\n");
  printf("0. Keppa kali       -25\n");
  printf("1. Kelvaragu dosa   -15\n");
  printf("2. Kambu soru       -15\n");
  printf("3. Ragi kool        -140\n");
  printf("4. Sweet paniyaram  -75\n");
  printf("5. Karapaniyaram    -50\n");
}

float gst(float n)
{
  float gst=0.18;
  return n+(n*gst);
}
 
int kr_food(){
  int order;
   int q;//quantity
   int c;//count and price multipication
   char d;
   do{
   printf("\nEnter the order number please:");
   scanf("%d",&order);
   switch(order)
  {
    case 0:
         printf("Dosai\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=25*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
    case 1:
         printf("Idly\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=15*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
    case 2:
         printf("Parotta\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=15*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
     case 3:
         printf("Biriyani\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=140*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;     
       case 4:
         printf("Pongal\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=75*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;   
       case 5:
         printf("Poori\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=50*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
        default:
        printf("Enter valid food code");
  }
   printf("\nwould you like to add some more to the order? (yes or no): ");
    scanf(" %c", &d);
    if (d == 'y' || d == 'Y') {
        kr_food();
       // menu(); 
    } else {
        printf("Your bill:%.2f\n\n\n***Nandri Meendum varuga**8",total);
    }
   }while(order<0 &&order>6);
}
             // NK Restaurant 
int nk_food(){
  int order;
   int q;//quantity
   int c;//count and price multipication
   char d;
   do{
   printf("\nEnter the order number please:");
   scanf("%d",&order);
   switch(order)
  {
    case 0:
         printf("Sambar rice\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=10*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
    case 1:
         printf("Tamarind rice\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=25*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
    case 2:
         printf("curd rice\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=15*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
     case 3:
         printf("Tomato rice\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=40*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;     
       case 4:
         printf("Bisibellapath\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=80*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;   
       case 5:
         printf("Coconut rice\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=20*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
        default:
        printf("Enter valid food code");
  }
   printf("\nwould you like to add some more to the order? (yes or no): ");
    scanf(" %c", &d);
    if (d == 'y' || d == 'Y') {
        nk_food();
       // menu(); 
    } else {
        printf("Your bill:%.2f\n\n\n**Nandri Meendum varuga*8",total);
    }
   }while(order<0 &&order>6);
}
//  Adi samayal 
int adi_food(){
  int order;
   int q;//quantity
   int c;//count and price multipication
   char d;
   do{
   printf("\nEnter the order number please:");
   scanf("%d",&order);
   switch(order)
  {
    case 0:
         printf("Keppa kali\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=10*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
    case 1:
         printf("Kelvaragu dosa\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=20*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
    case 2:
         printf("Kambu soru \n");
         printf("Quantity:");
         scanf("%d",&q);
         c=45*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
     case 3:
         printf("Ragi kool \n");
         printf("Quantity:");
         scanf("%d",&q);
         c=35*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;     
       case 4:
         printf("Sweet paniyaram\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=25*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;   
       case 5:
         printf("Karapaniyaram\n");
         printf("Quantity:");
         scanf("%d",&q);
         c=30*q;
         printf("%.2f",gst(c));
         total+=gst(c);
         break;
        default:
        printf("Enter valid food code");
  }
   printf("\nwould you like to add some more to the order? (yes or no): ");
    scanf(" %c", &d);
    if (d == 'y' || d == 'Y') {
        adi_food();
    } else {
        printf("Your bill:%.2f\n\n\n",total);
        printf("\t\t\t\t\t***Nandri Meendum varuga***");
    }
   }while(order<0 &&order>6);
}

int main()
{   
    kr();
    printf("\n");
    nk();
    printf("\n");
    adi();
    printf("\n");
    char h;
    printf("Which hotel you want to select");
    scanf("%c",&h);
    if(h=='k'||h=='K')
    {
    printf("\t\t\t\t***Kalakalappu Restaurant***\n\n");
        kr();
        kr_food();
        //return 0;
    }
    else if(h=='n'||h=='N')
    {
     printf("\t\t\t\t***NK Restaurant***\n\n");
        nk();
       nk_food();
    }
    else if(h=='a'||h=='A')
    {
     printf("\t\t\t\t***Adi samayal***\n\n");
        adi();
        adi_food();
    }
}
