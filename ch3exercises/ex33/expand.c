/* expand takes a character string and expands it
 * ie a-c becomes abc
 * leading or trailing dashes are taken literally */

/* what would be a good error value for this? */
bool expand(str1, str2) 
{
    bool error = false;
    int i = 0;
    char begin = str1[i];
    char end = str2[i];

    while(str1[i] != '/0')
    {
        /* check if dash
         * check if next char is greater than start
         * if yes, then check if it is greater than the end
         * if yes then it is the new end
         * if not greater or equal to current end, we have an error */

         /* if no error was reported, create str2
          * for (ix = begin; ix < end; ix++)
          *     str2[ix] = ix;
          * null terminate */
     }

     return error;
}


