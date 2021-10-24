#include<iostream>
using namespace std;

void pattern1()
{   

/*
    1. 
    *****
    *****
    *****
    *****
    *****
*/

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2()
{

/*
-------------------------------------------------
2.  *
    **
    ***
    ****
    *****
*/
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        for(int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern3()
{

/*
--------------------------------------------------

3.  *****
    ****
    ***
    **
    *
*/

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for(int col = 1; col <= n-row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void pattern4()
{

/*
--------------------------------------------------
4.  1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for(int col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}

void pattern5()
{

/*
--------------------------------------------------
5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= (2*n) - 1; ++row)
    {
        int c = row > n ? n - (row - n) : row;
        {
            for (int col = 1; col <= c; ++col)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    
}

void pattern6()
{

/*
--------------------------------------------------
6.       *
        **
       ***
      ****
     *****
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n-row; noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
         cout<<endl;
    
    }

}

void pattern7()
{

/*
--------------------------------------------------
7.   *****
      ****
       ***
        **
         *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n - (n - row + 1); noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= n - row + 1; ++col)
        {
            cout<<"*";
        }
         cout<<endl;
    
    }
    
}

void pattern8()
{

/*
--------------------------------------------------
8.      *
       ***
      *****
     *******
    *********
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n - row; noOfSpace++)
        {
            cout<<" ";
        }
        int a = 2*(row - 1) + 1;
        for (int col = 1; col <= a; ++col)
        {
            cout<<"*";
        }
         cout<<endl;
    
    }
   
}

void pattern9()
{

/*
--------------------------------------------------
9.  *********
     *******
      *****
       ***
        *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n - (n - row + 1); noOfSpace++)
        {
            cout<<" ";
        }
        int a = 2*((n - 1) - row + 1) + 1;
        for (int col = 1; col <= a; ++col)
        {
            cout<<"*";
        }
         cout<<endl;
    
    }
    
}

void pattern10()
{

/*
--------------------------------------------------
10.      *
        * *
       * * *
      * * * *
     * * * * *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n-row; noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            cout<<"* ";
        }
         cout<<endl;
    
    }

}

void pattern11()
{
/*
--------------------------------------------------
11.  * * * * *
      * * * *
       * * *
        * *
         *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n - (n - row + 1); noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= n - row + 1; ++col)
        {
            cout<<"* ";
        }
         cout<<endl;
    
    }
    
}

void pattern12()
{

/*
--------------------------------------------------
12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= 2*n; ++row)
    {
        int noOfcol = row>n ? row - n : n - row + 1;
        for (int noOfSpace = 0; noOfSpace < n - noOfcol; noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= noOfcol; ++col)
        {
            cout<<"* ";
        }
         cout<<endl;
    
    }
    
}

void pattern13()
{

/*
--------------------------------------------------
13.      *
        * *
       *   *
      *     *
     *********
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n - row; noOfSpace++)
        {
            cout<<" ";
        }
        int a = 2*(row - 1) + 1;
        for (int col = 1; col <= a; ++col)
        {
            row == n ? cout<<"*" : col == 1 || col == a ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern14()
{

/*
--------------------------------------------------
14.  *********
      *     *
       *   *
        * *
         *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int noOfSpace = 0; noOfSpace < n - (n - row + 1); noOfSpace++)
        {
            cout<<" ";
        }
        int a = 2*((n - 1) - row + 1) + 1;
        for (int col = 1; col <= a; ++col)
        {
            row == 1 ? cout<<"*" : col == 1 || col == a ? cout<<"*" : cout<<" "; 
        }
        cout<<endl;
    }
    
}

void pattern15()
{

/*
-------------------------------------------------
15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= (2*n) - 1; ++row)
    {
        int noOfcol = row > n ? 2*(n - (row - n)) - 1 : 2*row - 1;
        int a = row > n ? row - n : n - row;
        for (int noOfSpace = 0; noOfSpace < a; noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= noOfcol; ++col)
        {
            col == 1 || col == noOfcol ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern16()
{

/*
--------------------------------------------------
16.           1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1
*/


}

void pattern17()
{

/*-------------------------------------------------
17.      1
        212
       32123
      4321234
       32123
        212
         1

*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int space = 0; space < (n - row); space++){
            cout<<" ";
        }
        for (int col = row; col >= 1; --col){
            cout<<col;
        }
        for (int col = 2; col <= row; ++col){
            cout<<col;
        }
        cout<<endl;
    }
    for(int row = n-1; row >= 1; --row)
    {
        for (int space = 0; space < (n - row); space++){
            cout<<" ";
        }
        for (int col = row; col >= 1; --col){
            cout<<col;
        }
        for (int col = 2; col <= row; ++col){
            cout<<col;
        }
        cout<<endl;
    }
    
}

void pattern18()
{
    
/*
--------------------------------------------------
18.   **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    *** 
      ****  ****
      **********
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n - row + 1; ++col)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*(row - 1); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= n-row+1; ++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row = n; row >= 1; --row)
    {
        for (int col = 1; col <= n - row + 1; ++col)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*row - 2; col++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= n-row+1; ++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}

void pattern19()
{

/*
--------------------------------------------------
19.    *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*(n - row); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row = n-1; row >= 1; --row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*(n - row); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void pattern20()
{

/*
--------------------------------------------------
20.    ****
       *  *
       *  *
       *  *
       ****
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n - 1; ++col)
        {
            col == 1 || col == n - 1 || row == 1 || row == n ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern21()
{

/*
--------------------------------------------------
21.    1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
*/



    int n;

    int AtEveryIndex = 1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout<<AtEveryIndex<<"  ";
            ++AtEveryIndex;
        }
        cout<<endl;
    }
    
}

void pattern22()
{

/*
-------------------------------------------------
22.    1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            row % 2 == 1 && col % 2 == 1 || row % 2 == 0 && col % 2 == 0 ? cout<<"1 " : cout<<"0 ";
        }
        cout<<endl;
    }
    
}

void pattern23()
{

/*
--------------------------------------------------
23.        *      *
         *   *  *   *
       *      *      *
*/

}

void pattern24()
{

/*--------------------------------------------------
24.    *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            col == 1 || col == row ? cout<<"*" : cout<<" ";
        }
        for (int col = 0; col < 2*(n - row); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            col == 1 || col == row ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    for(int row = n; row >= 1; --row)
    {
        for (int col = 1; col <= row; ++col)
        {
            col == 1 || col == row ? cout<<"*" : cout<<" ";
        }
        for (int col = 0; col < 2*(n - row); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            col == 1 || col == row ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern25()
{

/*
--------------------------------------------------
25.       *****
         *   *
        *   *
       *   *
      *****
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int row = 1; row <= n; ++row)
    {
        for(int space = 1; space <= n - row; space++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= n - 1; ++col)
        {
            col == 1 || col == n - 1 || row == 1 || row == n ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern26()
{

/*
--------------------------------------------------
26.   1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6
*/

    int n, a = 1;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n - row + 1; ++col)
        {
            cout<<a<<" ";
        }
        ++a;
        cout<<endl;
    }

}

void pattern27()
{

/*--------------------------------------------------
27.   1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11
*/

}

void pattern28()
{

/*
-------------------------------------------------
28.      *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= (2*n) - 1; ++row)
    {
        int c = row > n ? n - (row - n) : row;
        // int a = row > n ? row - n : n - row;
        int a = n - c;
        for (int noOfSpace = 0; noOfSpace < a; noOfSpace++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= c; ++col)
        {
            cout<<"* ";
        }
         cout<<endl;
    
    }
    
}

void pattern29()
{

/*
--------------------------------------------------
29.      
       *        *
       **      **
       ***    ***
       ****  ****
       **********
       **********
       ****  ****
       ***    ***
       **      **
       *        *
*/


    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*(n - row); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row = n; row >= 1; --row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*(n - row); ++col)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; ++col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void pattern30()
{

/*-------------------------------------------------
30.         1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

*/

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row = 1; row <= n; ++row)
    {
        for(int space = 0; space < n - row; ++space)
        {
            cout<<"  ";
        }
        for (int col = row; col >= 1; --col)
        {
            cout<<col<<" ";
        }
        for(int col = 2; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

}

void pattern31()
{

/*
--------------------------------------------------
31.      4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   
*/

}

void pattern32()
{

/*
--------------------------------------------------
32.    E
       D E
       C D E
       B C D E
       A B C D E
*/

}

void pattern33()
{

/*
--------------------------------------------------
33.    a
       B c
       D e F
       g H i J
       k L m N o
*/

}

void pattern34()
{

/*--------------------------------------------------
     
34.    E D C B A
       D C B A
       C B A
       B A
       A
*/

}

int main()
{
    
    return 0;
}