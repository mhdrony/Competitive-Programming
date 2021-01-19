#include<bits/stdc++.h>
#include<string>
using namespace std;

int main ()
{
     char str[200000],str1[200000] ;
     int i , p ,op ,j ,x ;

    while (gets (str))
    {
        op=0 ;
         x = strcmp (str , "DONE" ) ;
         if (x == 0) break ;

         for (i=0 ,p=0 ;  i<strlen (str) ;  i++)
         {
              if (str[i] >= 'A' && str[i] <= 'Z')
                   str[i] = 97 + (str[i] - 'A') ;

              if (str[i] >='a' && str[i] <= 'z' )
                   {
                        str1[p] = str [i] ;
                         p ++ ;
                   }

         }
          for (i=0 ,j = p-1 ; i <j ; i++,j-- )
          {
                if (str1[i] != str1[j])
               {
                    op=1 ;
                    printf ("Uh oh..\n") ;
                    break ;
               }
            else op=0 ;
          }

     if (op==0) printf ("You won't be eaten!\n") ;

     }
return 0 ;
}
