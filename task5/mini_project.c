#include <stdio.h>

void print_details(float total_fee,float discount ,int chargingcost ){

printf("the total price is %f",total_fee);
printf("the discount is %f", discount);
printf("the chargingcost is %d ",chargingcost);
}
int main ()
{
    // scan inputs from user 
char name[100] ;
char overnight_shipping ;
char cont ;
   int chargingcost=0, number_of_item ;
    float price , discount=0, total_fee=0 ;
    
    
printf("welcome to our supermarket :)\n ");
printf("please enter the number of items you want\n");
do{
scanf("%d",& number_of_item);
if (number_of_item>2){  
    for(int i=0 ;i<number_of_item;i++){
        printf("please enter the item name");
        getchar();
fgets(name ,sizeof(name),stdin);
printf("please enter the price of this item $ ");
scanf("%f" ,& price );
printf("are you want overnight shipping if you want please enter 'y' of not enter ' n'");
scanf(" %c", &overnight_shipping);

//shipping cost 
if (overnight_shipping == 'y' || overnight_shipping == 'Y') {
    if (price < 10) {
        chargingcost += 2;
    } else {
        chargingcost += 3;
    }
    chargingcost += 5; 
} else if (overnight_shipping == 'n' || overnight_shipping == 'N') {
    if (price < 10) {
        chargingcost += 2;
    } else {
        chargingcost += 3;
    }
}
total_fee+=price;
total_fee+=chargingcost;
}


//discount
if (number_of_item>5){
discount=total_fee*0.2;
total_fee-=discount;
}

//if user want to continue

    printf("do you want to continue? (y/n): ");
 scanf(" %c",& cont);


}

else if(number_of_item<2){
    printf("the order invalid");
    return 0;
}
}while (cont=='y'||cont=='Y');

//print details
print_details(total_fee,discount,chargingcost);

    return 0;
}