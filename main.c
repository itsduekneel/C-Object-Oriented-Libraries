#include <stdio.h>
#include "stringlib.h"

int main(void)
{
    //String Data Type
    String name = "Hello World";

    printf("%s\n", name);
    
    //===============
    //
    // String Comparison
    //
    //===============
    String a = "Hello";
    String b = "hello";

   //Integer True or False
   printf("%d\n", Equals(a, b));
   
   //String True or False
   printf("%s\n", Equals(a,b) ? "True" : "False");
   
    //===============
    //
    // String Contains
    //
    //===============
    
   //Integer True or False
   printf("%d\n", Contains(name, "World"));
   
   //String True or False
   printf("%s\n", Contains(name, "Nell") ? "True" : "False");
   
    //===============
    //
    // String StartsWith
    //
    //===============
   
   //Integer True or False
   printf("%d\n", StartsWith(name, "World"));
   
   //String True or False
   printf("%s\n", StartsWith(name, "Hello") ? "True" : "False");
   
    //===============
    //
    // String EndsWith
    //
    //===============
    //Integer True or False
   printf("%d\n", EndsWith(name, "World"));
   
   //String True or False
   printf("%s\n", EndsWith(name, "Hello") ? "True" : "False");
   
    return 0;
}