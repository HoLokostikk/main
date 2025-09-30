#include <stdio.h>
#include <cmath>

double calculateIncome(double startCap, float anualRate, int payout, int time)
{
  double result = startCap * pow(1 + anualRate / payout, payout * time);
  return result;
}


int main(){
    double startCap, finalCap, diff, temp;
    float annualRate;
    int time, payout;

    printf("Введіть основну суму інвестиції:\n");
    scanf("%lf", &startCap);
    printf("Введіть річну ставку у %%:\n");
    scanf("%f", &annualRate);
    annualRate /= 100;
    do{
        printf("Введіть частоту виплат(1 4 або 12 місяців:)\n");
        scanf("%d", &payout);
    }while(payout != 4 and payout != 1 and payout !=12);
    printf("Введіть час інвестиції в роках:\n");
    scanf("%d", &time);
    finalCap = calculateIncome(startCap, annualRate, payout, time);
    diff = finalCap - startCap;
    annualRate *= 100;
    printf("Ви внесли %.2lf з %.2f%% річною ставкою і виплатами кожні %d місяців.\n Загальна сума %.2lf.\n Ви отримали %.2lf після %d років.", startCap, annualRate, payout, finalCap, diff, time);
    return 0;
}
