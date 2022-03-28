#include <iostream>

using namespace std;
// product a,b,c,d,e
int main()
{   int product;
    int pa; //product a
    int pb;
    int pc;
    int pd = 0;
    int pe;

    cout << "The retail prices of product a,b,c,d,e are: $2.98, $4.50, $9.98, $4.49, $6.87"  << endl;

    cout << "Enter the product (a,b,c,d,e) sold (enter ctrl+z to get result): " << endl;

    while ( ( product = cin.get() ) !=  EOF )
     {
       switch(product)
       {
         case 'A':
         case 'a':
         pa++;
         break;

         case 'b':
         case 'B':
         pb++;
         break;

         case 'c':
         case 'C':
         pc++;
         break;

         case 'D':
         case 'd':
         pd++;
         break;

         case 'E':
         case 'e':
         pe++;
         break;

         case '\n':
         case '\t':
         case ' ':
         break;

         default:
         cout << "Invalid element entered." << endl;
         break;
       }
     }
     cout << "  " << endl;
     cout << pa << " product a sold, total value: " << pa * 2.98 << endl;
     cout << pb << " product b sold, total value: " << pb * 4.50 << endl;
     cout << pc << " product c sold, total value: " << pc * 9.98 << endl;
     cout << pd << " product d sold, total value: " << pd * 4.49 << endl;
     cout << pe << " product e sold, total value: " << pe * 6.87 << endl;





    return 0;
}
