#include <iostream>
#include <windows.h>

using namespace std;

void OddEvenSortSeq(int *a, int length)
 {
     int n = length;
     int m = n/2;
     double temp = 0;
     for (int k = 0; k < n; k++)
     {
         if (k % 2 == 0)
             for (int j = n - 1; j > 0; j -= 2)
             {
                 if (a[j] < a[j - 1])
                 {
                     temp = a[j];
                     a[j] = a[j - 1];
                     a[j - 1] = temp;
                 }
             }
         else
             for (int j = n - 2; j > 0; j -= 2)
             {
                 if (a[j] < a[j - 1])
                 {
                     temp = a[j];
                     a[j] = a[j - 1];
                     a[j - 1] = temp;
                 }
             }
     }
 }

int main()
{
    int num, i;
    cin >> num;
    int *a = new int [num];

    for(int i = 0; i < num; i++) cin >> a[i];
    OddEvenSortSeq(a, num);
    for(int i = 0; i < num; i++) cout << a[i] << " ";
}
