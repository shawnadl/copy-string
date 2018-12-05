/*************************
 *Copy and append string
 *Practice-1 2018/05/12
 ************************/

//This function uses pointer arithmetic to copy string 2 to string 1
void copy_string(char* s1, const char* s2)
{ 
  for( ; (*s1 = *s2) != '\0' ; s1++, s2++){//this header performs the entire copy operation
    ;//do nothing in body
  }
}

//This function uses pointer arithmetic to append string 2 to string 1
void append_string(char* s1, const char* s2)
{
  for( ; *s1 != '\0' ; s1++){//s1 now points to the NULL character in string 1
    ;//do nothing in body
   }
  for( ; (*s1 = *s2) != '\0' ; s1++, s2++){//this header performs the entire copy operation
    ;//do nothing in body
   }
}
/*The first argument to both copy and append must be an array large enough to hold the
string in the second argument. Otherwise, an error may occur when an attempt is made to
write into a memory location that’s not part of the array. Also, the second parameter of
each function is declared as const char * (a constant string)*/
