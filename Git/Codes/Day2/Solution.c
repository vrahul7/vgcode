int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float totalcost=0;
    float mealcost,tip,tax;
    scanf("%f%f%f",&mealcost,&tip,&tax);
    tip=tip*mealcost/100;
    tax=tax*mealcost/100;
    totalcost=mealcost+tip+tax;
   printf("The total meal cost is %d dollars.", (int)round(totalcost));
    return 0;
}
