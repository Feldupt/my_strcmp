
int	my_putchar(char c)
{
  write(1, &c, 1);
}


int	my_strlen(char *str)
{
  int count = 0;
  
  while(str[count] != '\0')
    count++;
  return (count);
}

char	*my_strcmp(char *src, char *dest)
{
  int i;
  int c1;
  int c2;

  c1 = my_strlen(src);
  c2 = my_strlen(dest);
  i = 0;
  if(c1 != c2)
    {
      return ("False");
    }
  while(src[i] != '\0' && dest[i] != '\0')
    {
      if(src[i] != dest[i])
	{
	  return ("False");
	}
      else if(src[i] == dest[i])
	{
	  i++;
	}
      
    }
  return ("True");
}


int	main()
{
  char str[] = "Hello";
  char res[] = "Hello Jules";
  printf("%s", my_strcmp(str, res));

  return(0);
}
