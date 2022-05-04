#include <stdio.h>
#include <string.h>

struct Products
{
   char name[12];
   float price;
};


int main()
{
   struct Products prod1 = {"Bike", 100.00};
   struct Products prod2 = {"TV", 200.00};
   struct Products prod3 = {"Album", 10.00};
   struct Products prod4 = {"Book", 5.00};
   struct Products prod5 = {"Phone", 500.00};
   struct Products prod6 = {"Computer", 1000.00};


   struct Products prod[] = {prod1, prod2, prod3, prod4, prod5, prod6};

   for(int i = 0; i < sizeof(prod)/sizeof(prod[0]); i++)
   {
      printf("name:%-12s\t", prod[i].name);
      printf("price: %.2f\n", prod[i].price);
   }

   return 0;
}
