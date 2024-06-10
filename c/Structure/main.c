#include<stdio.h>
#include<stdlib.h>

struct person
{
  char name[15];
  char address[100];
  char mail[20];
  long int mob;
};
int main ()
{

  struct person *p;
  struct person *p1;
  p = malloc (sizeof (struct person));
  p1 = malloc (sizeof (struct person));
  scanf ("%ld", &p->mob);
  scanf ("%ld", &p1->mob);
  printf ("%s", p->name);
  if (p->mob == p1->mob)
    printf ("valid");
  else
    printf ("invalid");

}

