#include<stdio.h>
int main(){
    int amount=5000;
    float value;
    


    for(int year=0; year<=10; year++){

        value =amount+amount*0.11;
        printf("%d  %5.2f\n",year,value);
        amount=value;


    }





}