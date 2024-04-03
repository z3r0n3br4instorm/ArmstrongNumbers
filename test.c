#include <stdio.h>


int armstrongGet(int _num) {
    int getLastVal, i =0, finalSum = 0, tempSum = 1, userIn;
    int numberBreakDownArray[256];
    userIn = _num;
    while (_num != 0) {
            getLastVal = _num % 10;
            _num -= getLastVal;
            _num = _num/10;
            numberBreakDownArray[i] = getLastVal;
            i++;
    }
    for (int j = 0; j < i; j++){
            for (int k = 0; k < i; k ++){
                    tempSum *= numberBreakDownArray[j];
            }
            finalSum +=tempSum;
            tempSum = 1;
    }
    if (userIn == finalSum) {
        return 10;
    } else {
        return 1;
    }
}

int main() {
    int i = 1;
    int num;
    // while ( i > 0) {
    //     printf("Enter Value to Test :");
    //     scanf("%d", &num);
    //     if(armstrongGet(num) == 10) {
    //         printf("\nThe Number you Entered is an armstrong Number !\n");
    //     } else {
    //         printf("\nThe Number you Entered is not an armstrong Number !\n");
    //     }
    // }
    printf("\nArmstrong Numbers Between 0 And 10000\n");
    for (int i = 0 ; i <= 100000; i++) {
        if (armstrongGet(i) == 10) {
            printf("%d\n", i);
        }
    }

}