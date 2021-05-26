  #include<stdio.h>
  #include<stdlib.h>
  #include<conio.h>
  #define MAX 5
   void push(int item,int *top,int S[])
   {
     if(*top==MAX-1)
      {
	printf("stack overflow\n");
	return;
      }
      (*top)++;
      S[*top]=item;
      printf("%d is succesfully inserted\n", item);
   }

   int pop(int *top,int S[])
   {
      int ele;
      if(*top==-1)
	{
	  printf("stack is empty\n");
	  return 0;
	}
	ele=S[*top];
	(*top)--;
	return ele;
    }

    void display(int top,int S[])
    {
      int i;
      if(top!=-1)
       {
	 printf("stack contains :\n");
	 for (i=0;i<=top;i++)
	  printf("%d\n", S[i]);
       }
      else
	printf("stack is empty\n");
    }

     int main()
     {
       int item,top=-1,S[MAX],choice;
       for(;;)
       {
       printf("1.push \n  2.pop\n  3.display\n  4.exit\n");
       printf("\nEnter your choice:");
       scanf("%d",&choice);
       switch(choice)
	  {
	   case 1: printf("\nEnter an item:");
		   scanf("%d",&item);
		   push(item,&top,S);
		   break;
	   case 2: item=pop(&top,S);
		   printf("%d element is deleted",item);
		   break;
	   case 3: display(top,S);
		   break;
	   default:printf("\n invaild choice\n");
		   exit(0);
	  }
     }
}
