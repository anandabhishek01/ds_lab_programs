// To perform insert, delete and display function in a Queue

 #include<stdio.h>
  #include<stdlib.h>
  #define MAX 5
  int q[MAX], f=0, r=-1;

  void insertion(int item)
  {
   if(r==MAX-1)
    {
      printf("queue is full\n");
      return;
    }
   q[++r]=item;
   printf("%d is inserted",item);
  }

  void deletion()
  {
    int ele;
    if(f>r) 
    {
      printf("queue is empty\n");
      f=0;
      r=-1;
      return;
    }
   ele=q[f++];
   printf("%d is deleted", ele);
  }

  void display()
  {
    int i;
    if(f<=r)
     {
       printf("queue contains:\n");
       for(i=f; i<=r; i++)
       printf("%d\n", q[i]);
     }
    else
       printf("queue is empty");
  }

  int main()
  {
    int item, ch;
    printf("welcome\n");
    while(1)
    {
      printf("\n1.insert \n 2.delete \n 3.dispay  \n4.quit\n");
      printf("\nEnter your choice\n");
      scanf("%d", &ch);
      switch(ch)
      {
       case 1: printf("\nEnter a item\n");
               scanf("%d", &item);
               insertion(item);
               break;
       case 2: deletion();
               break;
       case 3: display();
               break;
       default:printf("invalid choice");
               exit(0);
      } 
    }
     
  }
 
