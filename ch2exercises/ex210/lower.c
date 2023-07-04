/* take a char and return the lower case version of it */
char lower(char inChar)
{
    return ((inChar >= 'A') && (inChar <= 'Z')) ? inChar + ('a' - 'A') : inChar;
}

