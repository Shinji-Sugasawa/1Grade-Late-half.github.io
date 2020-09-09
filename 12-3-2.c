#include <stdio.h>
 int check (int, int, int, int); //0:false,else:true
 void draw (int, int, int, int);
 
 int main (void)
 {
	 int i,j,k,m;
	 
	 for(i=1;i<=4;i++)
	 {
		 for(j=1;j<=4;j++)
		 {
			 for(k=1;k<=4;k++)
			 {
				 for(m=1;m<=4;m++)
				 {
					 if(check(i,j,k,m)!=0)
					 {
						 draw(i,j,k,m);
					 }
				 }
			 }
		 }
	 }
	 return 0;
 }
 int check(int r1,int r2,int r3, int r4)
 {
	 int judge=0;
	 
	 if(r1==2 && r2==4 && r3==1 && r4==3)
		 judge=1;
	 return judge;
 }
 void draw(int r1, int r2, int r3, int r4)
 {
	 printf("- Q - -\n");
	 printf("- - - Q\n");
	 printf("Q - - -\n");
	 printf("- - Q -\n");
 }