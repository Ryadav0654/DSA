
 //--------------------------------- Pattern Questions ------------------------------------//
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // pattern Questions

    // Question - 1
    /*
    1 2 3
    4 5 6
    7 8 9
    */

    /*
    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n){
        int j = 1;
        while(j <= n){
            cout << count;
            j++;
            count++;
        }
        cout << endl;
        i++;

    }
    */

    // Question - 2
    /*
     *
     * *
     * * *
     */

    /*
    int n;
    cin  >> n;

    int i = 1;

    while( i <= n) {
        int j = 1;
        while(j <= i) {
            cout << '*' << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    */

    // Question - 4
    /*
     1
     2 3
     3 4 5
     4 5 6 7
    */

    /*
    int n;
      cin >> n;

      int row = 1;
      while (row <= n)
      {
          int col = 1;
          while (col <= row)
          {
              cout << row + col - 1 << " ";
              col++;
          }

          cout << endl;
          row++;
      }
    */
    // Question -5
    // reverse the upper pattern
    /*
    int n;
       cin >> n;

       int i = 1;
       while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
       }
    */

    // Question - 5
    /*
    D
    C D
    B C D
    A B C D
    */

    /*
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
      int j = 1;
      char ch = 'A' + n - i;
      while(j <= i) {
          cout << ch << " ";
          ch++;
          j++;
      }
      cout << endl;
      i++;
    }
    */

    // Question - 7

    /*
    A B C
    B C D
    C D E
    */
    /*
    int n;
     cin >> n;

     int row = 1;
     while (row <= n) {
        int col = 1;
        char start = 'A' + row -1;
        while (col <= n) {
            cout << start << " ";
            start++;
            col++;
        }
        cout << endl;
        row++;
     }
    */

   // Question - 8
   /*
         *
       * *
     * * * 
   * * * *
   */

  /*
  int n;
  cin >> n;

  int row = 1;
  while(row <= n) {
    // for spaces 
    
    int space = n - row;
    while(space != 0) {
        cout << " ";
        space--;
    }
    // for * printing 

    int col = 1;

    while(col <= row) {
        cout << '*';
        col++;
    }
    
    cout << endl;
    row++;
  }
  */


 // Question - 9
 /*
  * * * *
  * * *
  * *
  * 
 */


/*
     int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;
        while(col <= n - row +1) {
            cout << '*' ;
            col++;
        }
        cout << endl;
        row++;
    }
*/

        // Homework questions 
    // Question - 1;
/*
  * * * *
    * * *
      * * 
        *

      int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        // spaces 
        int space = i - 1;

        while(space) {
            cout << " ";
            space--;
        }

        int start = n - i + 1;
        int col = 1;
        while(col <= start){
            cout << '*';
            col++;
        }

        cout << endl;
        i++;
    }   

*/
   

    // Question - 2

    int a;
    cin >> a;

    int i = 1;
    while(i <= a){
        // for space 
        int space =i - 1;

        while(space) {
            cout << " ";
            space--;
        }

        int value = i;

        int col = 1;

        int start = a - i + 1;

        while (col <= start)
        {
            cout << value;
            value++;
            col++;
        }

        cout << endl;
        i++;
        
    }
   

    return 0;
}
