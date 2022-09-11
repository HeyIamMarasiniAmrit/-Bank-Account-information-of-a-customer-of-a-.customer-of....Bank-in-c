#include <stdio.h>
#include <string.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc;
 int main(){

    acc acco1 = {123, "Amrit"};

    acc acco2 = {124, "Harry"};

    acc acco3 = {125, "Pradip"};


    printf("acc n0 = %d", acco1.accountNo);
    printf("name = %s", acco1.name);

    return 0;

 }