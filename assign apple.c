#include <stdio.h>
int calculateCost(int kg, int rate) {
    return kg * rate;
}
float applyDiscount(float totalCost) {
    if (totalCost > 300) {
        return totalCost - (0.20 * totalCost);
    }
    return totalCost;
}
int main() {
    int appleRate = 100;
    int bananaRate = 60;
    int pomegranateRate = 150;
    int appleQty = 5;
    int bananaQty = 3;
    int pomegranateQty = 7;
    int appleCost = calculateCost(appleQty, appleRate);
    int bananaCost = calculateCost(bananaQty, bananaRate);
    int pomegranateCost = calculateCost(pomegranateQty, pomegranateRate);
    float TotalCost = appleCost + bananaCost + pomegranateCost;
    float totalcost = appleCost+ bananaCost+ pomegranateCost;
    TotalCost = applyDiscount(TotalCost);
    printf("Cost of apples: %d rupees\n", appleCost);
    printf("Cost of bananas: %d rupees\n", bananaCost);
    printf("Cost of pomegranates: %d rupees\n", pomegranateCost);
    printf("Total cost before discount: %0.2f ruppees\n ",totalcost);
    printf("Total cost after discount: %.2f rupees\n", TotalCost);
    printf("Today Saving : %.2f\n",totalcost-TotalCost);

    return 0;
}