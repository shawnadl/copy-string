//- copy and append string
//- practice-1 2018/05/12

//This function uses pointer arithmetic to copy string 2 to string 1
void copy_string(char* s1, char* s2)
{ 
  for( ; (*s1 = *s2) != '\0' ; s1++, s2++){
    ;//do nothing in body
  }
}

//This function uses pointer arithmetic to append string 2 to string 1
void append_string(char* s1, char* s2)
{
  for( ; *s1 != '\0' ; s1++){
    ;//do nothing in body
   }
  for( ; (*s1 = *s2) != '\0' ; s1++, s2++){
    ;//do nothing in body
   }
}
