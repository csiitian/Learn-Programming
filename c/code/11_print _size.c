// print size of int, char,
// float and double data types
#include <stdio.h>
int main()
{

       char charType;
       short shortType;
       int intType;
       long longType;
       long long longlongType;
       float floatType;
       double doubleType;

       printf("Size of char is: %d\n",
              sizeof(charType));

       printf("Size of short is: %d\n",
              sizeof(shortType));

       printf("Size of int is: %d\n",
              sizeof(intType)); 

       printf("Size of long is: %d\n",
              sizeof(longType)); 

       printf("Size of long long is: %d\n",
              sizeof(longlongType));   

       printf("Size of float is: %d\n",
              sizeof(floatType));

       printf("Size of double is: %d\n",
              sizeof(doubleType));
  
       return 0;

}

/*

Output :-
Size of char is: 1
Size of short is: 2
Size of int is: 4
Size of long is: 4
Size of long long is: 8
Size of float is: 4
Size of double is: 8

*/