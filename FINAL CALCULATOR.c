#include<stdio.h>
#include<math.h>
double sin(double);
double cos(double);
void main()
{   
	printf("\t \t\t\t\t\t   ----------WELCOME TO THE ADVANCED CALCULATOR----------");
    printf("\n \n \t \t\t\t\t\t\t          PRESS ENTER TO CONTINUE");
    char che;
    che=fgetc(stdin);
    int io;
    for(io=0;io<100;io++)
    {
    printf("\n \n \t \t\t\t\t\t\t          SELECT FROM THE OPTIONS");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("1-ADDITION  2-SUBTRACTION  3-DIVISION  4-MULTIPLICATION  5-REMAINDER   6-SQUARE ROOT  7-EXPONENTIAL  8-PERCENTAGE  9-TRIGONOMETRIC FUNCTION  10-PROGRESSIONS");
	printf("\n11-QUADRATIC SOLVER  12-POLYNOMIAL DIFFERENTIATION   13-BINARY CONVERTER  14-ABSOLUTE  15-UNIT CONVERTER   16-GST CALCULATOR  17-SEVERAL MATHEMATICAL SERIES\n18-STANDARD DEVIATION  19-VARIANCE  20-LOGARITHM  21-CURRENCY CONVERTER  22-BMI CALCULATOR");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf(" \n \t \t\t\t\t\t\t       SELECT AND ENTER THE CHOICE:");
    int select;
    scanf("%d",&select);
    if(select==1) //ADDTION
    {
    	int n,i,sum=0;
    	printf("\n\n\n\nEnter the number of numbers to be added:");
    	scanf("%d",&n);
    	int a[n];
    	printf("\n\nEnter all the %d numbers\n",n);
    	for(i=0;i<n;i++)
    	{
    		scanf("\n%d",&a[i]);
    		sum+=a[i];
		}
		printf("\nThe Result is: %d",sum);
    	
	}
	if(select==2) //SUBTRACTION
    {
    	int n,i,sum=0;
    	printf("\n\n\n\nEnter the number of numbers to be subtracted:");
    	scanf("%d",&n);
    	int a[n];
    	printf("\n\nEnter all the %d numbers\n",n);
    	for(i=0;i<n;i++)
    	{
    		scanf("\n%d",&a[i]);
    		if(i==0)
    		{
    			sum+=a[i];
			}
			else
			{
				sum-=a[i];
			}
		}
		printf("\nThe Result is: %d",sum);
    	
	}
	
	if(select==3) //DIVISION
    {
    	int n,i;
    	printf("\n\n\n\nEnter the number of numbers to be divided:");
    	scanf("%d",&n);
    	float a[n],sum=0.0;
    	printf("\n\nEnter all the %d numbers\n",n);
    	for(i=0;i<n;i++)
    	{
    		scanf("\n%f",&a[i]);
    		if(i==0)
    		{
    			sum=a[i];
			}
			else
			{
				sum/=a[i];
			}
		}
		printf("\nThe Result is: %f",sum);
    	
	}
	if(select==4) //MULTIPLICATION
    {
    	int n,i,sum=1;
    	printf("\n\n\n\nEnter the number of numbers to be multiplied:");
    	scanf("%d",&n);
    	int a[n];
    	printf("\n\nEnter all the %d numbers\n",n);
    	for(i=0;i<n;i++)
    	{
    		scanf("\n%d",&a[i]);
    		sum*=a[i];
		}
		printf("\nThe Result is: %d",sum);
    	
	}
	if(select==5)//MODULUS
	{   int a,b;
		printf("\n\n\n\nEnter the two numbers to find the modulus(remainder) of:");
		scanf("%d ",&a);
		scanf("%d",&b);
		int mod=a%b;
		printf("\nThe Result is: %d",mod);
		
	}
	if(select==6)//SQUARE ROOT
	{  
	    float i,n;
	    printf("\n\n\n\nEnter the number to find the square root of:");
	    scanf("%f",&n);
	    for(i=0.01;i*i<n;i=i+0.01){}
	    printf("\nThe Result is: %.5f",i);
	}
	if(select==7)//POWER
	{ int a,b;
	  printf("\n\n\n\nEnter the two numbers a raised to the power b:");
	  scanf("%d ",&a);
	  scanf("%d",&b);
	  int power=pow(a,b);
	  printf("\nThe Result is: %d",power);
    }
    if(select==8)//PERCENTAGE
	{   double a,b;
	    printf("\n\n\n\nEnter the two numbers a percent of b:"); 
	    scanf("%lf ",&a);
	    scanf("%lf",&b);
	    double per=(a/100)*b;
	    printf("\nThe Result is: %lf",per);
    }	
	
	if(select==9)//TRIGONOMETRIC CALCULATOR
	{
	printf("\n\n\n\t\t\t\t\t----------------WELCOME TO THE TRIGONOMETRIC CALCULATOR-----------------"); 
	printf("\n \n \t \t\t\t\t\t\t      SELECT FROM THE OPTIONS\n");	
	printf("\n\t      \t\t---------------------------------------------------------------------------------------------------------------");
	printf("\n\t\t\t1-SIN   2-COS   3-TAN   4-COT  5-SEC   6-COSEC  7-ARCSIN  8-ARCCOS  9-ARCTAN  10-ARCCOT  11-ARCSEC  12-ARCCOSEC");
	printf("\n\t      \t\t---------------------------------------------------------------------------------------------------------------");
    printf(" \n \t \t\t\t\t\t\t    SELECT AND ENTER THE CHOICE:");
    int select1;
    scanf("%d",&select1);
    if(select1==1)
    { 
	 int a;
     double m;
     double x;
     printf("\n\n\n\nEnter the angle in degrees:"); 
     scanf("%lf", &m);
     x = (3.1415926535897931*m)/180.0; 
     a=sin(x); 
    printf("\nsin(%0.2lf):%lf\n",m,sin(x));
    }
    if(select1==2)
    {
    int b;
    double m;
    double x;
    printf("\n\n\n\nEnter the angle in degrees:"); 
    scanf("%lf", &m);
    x = (3.1415926535897931*m)/180.0; 
    b=cos(x);
    printf("\ncos(%0.2lf):%lf\n",m,cos(x));
    }
    if(select1==3)
    {
    double c;
    double m;
    double x;
    printf("\n\n\n\nEnter the angle in degrees:"); 
    scanf("%lf", &m);
    x = (3.1415926535897931*m)/180.0; 
    c=sin(x)/cos(x);
    printf("\ntan(%0.2lf):%lf\n",m,c);
	}
	if(select1==4)
    {
    double c;
    double m;
    double x;
    printf("\n\n\n\nEnter the angle in degrees:"); 
    scanf("%lf", &m);
    x = (3.1415926535897931*m)/180.0; 
    c=cos(x)/sin(x);
    printf("\ncot(%0.2lf):%lf\n",m,c);
	}
	if(select1==5)
    {
    double c;
    double m;
    double x;
    printf("\n\n\n\nEnter the angle in degrees:"); 
    scanf("%lf", &m);
    x = (3.1415926535897931*m)/180.0; 
    c=1/cos(x);
    printf("\nsec(%0.2lf):%lf\n",m,c);
	}
	if(select1==6)
    {
    double c;
    double m;
    double x;
    printf("\n\n\n\nEnter the angle in degrees:"); 
    scanf("%lf", &m);
    x = (3.1415926535897931*m)/180.0; 
    c=1/sin(x);
    printf("\ncosec(%0.2lf):%lf\n",m,c);
	}
	if(select1==7)
    { double m,c;
     printf("\n\n\n\nEnter the Value:"); 
     scanf("%lf", &m); 
     c=asin(m);
     c=(c*180)/(3.1415926535897931);
     printf("\narcsin(%0.2lf):%lf\n",m,c);
	}
	if(select1==8)
    { double m,c;
     printf("\n\n\n\nEnter the Value:"); 
     scanf("%lf", &m); 
     c=acos(m);
     c=(c*180)/(3.1415926535897931);
     printf("\narccos(%0.2lf):%lf\n",m,c);
	}
	if(select1==9)
    { double m,c;
     printf("\n\n\n\nEnter the Value:"); 
     scanf("%lf", &m); 
     c=atan(m);
     c=(c*180)/(3.1415926535897931);
     printf("\narctan(%0.2lf):%lf\n",m,c);
	}
	if(select1==10)
    { double m,c,n;
     printf("\n\n\n\nEnter the Value:"); 
     scanf("%lf", &m); 
     n=m;
     m=1/m;
     c=atan(m);
     c=(c*180)/(3.1415926535897931);
     printf("\narccot(%0.4lf):%lf\n",n,c);
	}
	if(select1==11)
    { 
	 double m,c,n;
     printf("\n\n\n\nEnter the Value:"); 
     scanf("%lf", &m); 
     n=m;
     m=1/m;
     c=acos(m);
     c=(c*180)/(3.1415926535897931);
     printf("\narcsec(%0.4lf):%lf\n",n,c);
	}
	if(select1==12)
    { 
	 double m,c,n;
     printf("\n\n\n\nEnter the Value:"); 
     scanf("%lf", &m); 
     n=m;
     m=1/m;
     c=asin(m);
     c=(c*180)/(3.1415926535897931);
     printf("\narccosec(%0.4lf):%lf\n",n,c);
	}
}
if(select==10)
{
	printf("\n\n\n\t\t\t\t\t----------------WELCOME TO THE PROGRESSIONS CALCULATOR-----------------");
    printf("\n \n \t \t\t\t\t\t\t       SELECT FROM THE OPTIONS\n");
    printf("\n\t\t\t\t\t\t-------------------------------------------------");
	printf("\n \t \t\t\t\t\t1-ARITHMETIC PROGRESSION  2-GEOMETRIC PROGRESSION\n");
    printf("\t\t\t\t\t\t-------------------------------------------------");
	printf(" \n\n \t \t\t\t\t\t\t    SELECT AND ENTER THE CHOICE:");
    int select2;
    scanf("%d",&select2);
    if(select2==1)
    {   
    	printf("\n\n\n\nEnter what to calculate:"); 
    	printf("\n1-First term (A)  2-Nth Term (An)  3-Sum of N terms(Sn)  4-Number of Terms (n)  5-Common Difference(d):");
    	int select3;
    	scanf("%d",&select3);
    	if(select3==1)
    	{
    		printf("\nEnter the common difference:");
    		float di;
    		scanf("%f",&di);
    		printf("\nChoose either 1-Sum of series(Sn) or  2-Nth term(An):");
    		int insel;
    		scanf("%d",&insel);
    		if(insel==1)
    		{   
    		    printf("\nEnter the number of terms:");
    		    int n;
    		    scanf("%d",&n);
    			printf("\nEnter the Sum of series upto %d terms(Sn):",n);
    			float sn;
    			scanf("%f",&sn);
    			float a=((2*sn)-((n*n)-n)*di)/(2*n);
    			printf("\nThe First Term (a) is: %f",a);
			}
			if(insel==2)
    		{   printf("\nEnter N for the Nth term:");
    		    int n;
    		    scanf("%d",&n);
    			printf("\nEnter the %d th Term :",n);
    			float an;
    			scanf("%f",&an);
    			float a=an-((n-1)*di);
    			printf("\nThe First Term (a) is: %.3f",a);
			}
		}
		if(select3==2)
		{
			printf("\nEnter The First Term (a):");
			float a;
			scanf("%f",&a);
			printf("\nEnter N in Nth Term (n):");
			int n;
			scanf("%d",&n);
			printf("\nEnter the common difference (d):");
			float di;
			scanf("%f",&di);
			float an=a+((n-1)*di);
			printf("\nThe %dth Term of the series is: %f",n,an);
		}
		if(select3==3)
		{   
		    printf("\nEnter The First Term (a):");
			float a;
			scanf("%f",&a);
			printf("\nEnter the number of terms to find the sum of (n):");
			int n;
			scanf("%d",&n);
			printf("\nEnter the common difference (d):");
			float di;
			scanf("%f",&di);
			float sn=((a*n)+((((n*n)-n)*di)/2));
			printf("\nThe Result is: %f",sn);
		}
		if(select3==4)
		{
		   printf("\nEnter The First Term (a):");
		   float a;
		   scanf("%f",&a);	
		   printf("\nChoose either 1-Sum of series(Sn) or  2-Nth term(An):");
		   int insel1;
		   scanf("%d",&insel1);
		   if(insel1==1)
		   {
		   	 printf("\nEnter The Sum of the series (Sn):");
		     float sn;
		     scanf("%f",&sn);
		     printf("\nEnter The Last term (l):");
		     float l;
		     scanf("%f",&l);
		     float n=((2*sn)/(a+l));
		     printf("\nThe Number of terms (n) is: %f",n);
		   }
		   if(insel1==2)
		   { 
		     printf("\nEnter The Nth Term (An):");
		     float an;
		     scanf("%f",&an);
		     printf("\nEnter The Common Difference (d):");
		     float di;
		     scanf("%f",&di);
		     float n=((an-a)/di)+1.0;
		     printf("\nThe Number of Terms (n) is: %f",n);		   	
		   }
		}
		if(select3==5)
		{
			printf("\nEnter The First Term (a):");
		   float a;
		   scanf("%f",&a);
		   printf("\nEnter N for the Nth term or the Number of terms (n):");
    		    int n;
    		    scanf("%d",&n);
		   
		     printf("\nChoose either 1-Sum of series(Sn) or  2-Nth term(An):");
		   int insel2;
		   scanf("%d",&insel2);
		   if(insel2==1)
		   {
		   	printf("\nEnter The Sum of the series (Sn):");
		     float sn;
		     scanf("%f",&sn);
		     float di=((2*sn)/((n*n)-n))-((2*a)/(n-1));
		     printf("\nThe Common Difference (d) is: %f",di);
		   }
		   if(insel2==2)
		   {
		   	printf("\nEnter The %dth Term (An):",n);
		     float an;
		     scanf("%f",&an);
		     float di=(an-a)/(n-1);
		     printf("\nThe Common Difference (d) is: %f",di);
		   }
		     
		   
		}
    	
	}
if(select2==2)
	{
		printf("\n\n\n\nEnter what to calculate(G.P):"); 
    	printf("\n1-First term (A)  2-Nth Term (Tn)  3-Sum of N terms(Sn)  4-Number of Terms (n)  5-Common Ratio(r)  6-Sum Of infinite terms (S):");
    	int select4;
    	scanf("%d",&select4);
    	if(select4==1)
    	{
    		
    		printf("\nEnter the common ratio (r):");
    		float r;
    		scanf("%f",&r);
    		printf("\nChoose either 1-Sum of series(Sn) or  2-Nth term(Tn):");
		   int in2sel;
		   scanf("%d",&in2sel);
		   if(in2sel==1)
		   { 
		    printf("\nEnter N in Nth term or Number of Terms (n):");
    		int n;
    		scanf("%d",&n);
		     printf("\nEnter the Sum of %d terms in the series (Sn):",n);
    		 float sn;
    		scanf("%f",&sn);
		   	if(r>1)
		   	{
		   		float a=(sn*(r-1))/(pow(r,n)-1);
		   		printf("\nThe First Term (a) is: %f",a);
			}
			if(r==1)
			{
				float a=sn/n;
				printf("\nThe First Term (a) is: %f",a);
			}
			if(r<1)
			{
				float a=(sn*(1-r))/(1-pow(r,n));
		   		printf("\nThe First Term (a) is: %f",a);
			}
		   }
		   if(in2sel==2)
		   { 
		   printf("\nEnter N in Nth term (n):");
    		int n;
    		scanf("%d",&n);
		   	printf("\nEnter the %dth Term (Tn):",n);
    		 float tn;
    		scanf("%f",&tn);
    		float a=tn/(pow(r,(n-1)));
    		printf("\nThe First Term (a) is: %f",a);
		   }
    		
		} 
		else if(select4==2)
		{
			printf("\nEnter the common ratio (r):");
    		float r;
    		scanf("%f",&r);
    		printf("\nEnter the First Term (a):");
    		float a;
    		scanf("%f",&a);
    		 printf("\nEnter N in Nth term (n):");
    		int n;
    		scanf("%d",&n);
    		float tn=a*pow(r,(n-1));
    		printf("\nThe %dth Term (Tn) is: %f",n,tn);
		}
		else if(select4==3)
		{
			printf("\nEnter the common ratio (r):");
    		float r;
    		scanf("%f",&r);
    		printf("\nEnter the First Term (a):");
    		float a;
    		scanf("%f",&a);
    		 printf("\nEnter N in Nth term (n):");
    		int n;
    		scanf("%d",&n);
    		if(r>1)
    		{
    			float sn=a*((pow(r,n)-1)/(r-1));
    			printf("\nThe Sum Of the series upto %d Terms is: %f",n,sn);
			}
		   else	if(r<1)
    		{
    			float sn=a*(1-pow(r,n))/(1-r);
    			printf("\nThe Sum Of the series upto %d Terms is: %f",n,sn);
			}
		}
		else if(select4== 4)
		{
			printf("\nEnter the common ratio (r):");
    		float r;
    		scanf("%f",&r);
    		printf("\nEnter the First Term (a):");
    		float a;
    		scanf("%f",&a);
    			printf("\nChoose either 1-Sum of series(Sn) or  2-Nth term(Tn):");
		   int in2sel1;
		   scanf("%d",&in2sel1);
		   if(in2sel1==1)
		   {
		   	printf("\nEnter the Sum of N terms in the Series:");
		   	float sn;
		   	scanf("%f",&sn);
		   	if(r>1)
		   	{
			float temp=((sn*(r-1))/a)+1;
		   	float temp1=log(temp);
		   	float n=temp1/log(r);
		   	printf("\nThe Number Of Terms (n): %.0f",n);
		   }
		   if(r<1)
		   	{
			float temp=(-1*(sn*(1-r))/a)+1;
		   	float temp1=log(temp);
		   	float n=temp1/log(r);
		   	printf("\nThe Number Of Terms (n): %.0f",n);
		   }
		   	
		   }
		   if(in2sel1==2)
		   {
		   	printf("\nEnter the nth Term (Tn):");
    		float tn;
    		scanf("%f",&tn);
    		float temp1=tn/a;
    		float temp2=log(temp1);
    		float n=(temp2/log(r))+1;
    		printf("\nThe Number Of Terms (n): %.0f",n);
    		
		   }
		}
		else if(select4==5)
		{   
			printf("\nEnter the First Term (a):");
    		float a;
    		scanf("%f",&a);
			printf("\nEnter the nth Term (Tn):");
    		float tn;
    		scanf("%f",&tn);
    		printf("\nEnter N in Nth term (n):");
    		float n;
    		scanf("%f",&n);
    		float nrev=(1/(n-1));
    		float temp=(tn/a);
    		float r=pow(temp,nrev);
    		printf("\nThe Common Ratio (r) is: %f",r);
		}
		else if(select4==6)
		{
			printf("\nEnter the First Term (a):");
    		float a;
    		scanf("%f",&a);
    			printf("\nEnter the common ratio (r):");
    		float r;
    		scanf("%f",&r);
    		if(r<1)
    		{
    		float sinf=a/(1-r);
    		printf("\nThe Sum Upto Infinite Series is: %f",sinf);
    	    }
    	    else if(r>1)
    	    {
    	      float sinf=a/(r-1);
    		printf("\nThe Sum Upto Infinite Series is: %f",sinf);	
			}
			
		}
		
	} 
	
}
if(select==11)
{
	float a,b,c;
	
	printf("\n\n\n\nCompare Your Quadratic with ax^2+bx+c=0 \n");
	printf("And Enter |a| |b| and |c|\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a!=0)
	{
		float d=(b*b)-(4.0*a*c);
		if(d>0)
		{
			printf("\nRoots are real and distinct \n");
			float dis=sqrt(d);
			float r1=((-b)+dis)/(2*a);
			float r2=((-b)-dis)/(2*a);
			printf("\nRoots of the equation are %f  and   %f",r1,r2);
		}
		else if(d==0)
		{
			printf("\nRoots are Real and Equal\n");
			float dis=sqrt(d);
		    float root=((-b)+dis)/(2*a);
		    printf("\nCommon root is %f",root);
		}
		else if(d<0)
		{
			printf("\nRoots are Imaginary");
		}
	}
	else
	{
		printf("Invalid input the expression is not Quadratic");
	}
	
}
if(select==12)
{
int n;
	printf("\n\n\n\nEnter The Number Of terms in your Polynomial:");
	scanf("%d",&n);
	float c[n],p[n];
	int i;
	for(i=0;i<n;i++)
	{
		int count=i+1;
		printf("\nEnter the %d Term in Polynomial",count);
		printf("\nEnter The Coefficient:");
		scanf("%f",&c[i]);
		printf("Enter The Power:");
		scanf("%f",&p[i]);
	}
	printf("\n");
	printf("\nThe Polynomial Is:");
	int j;
	for(j=0;j<n;j++)
    {   
	if(c[j]>0)
    {
      printf("+");
	  printf("%.0f",c[j]);
    }
    else
    {
    	printf("%.0f",c[j]);
	}
    	printf("x^");
	  printf("%.0f",p[j]);
   
	}
	for(i=0;i<n;i++)
{
	c[i]*=p[i];
	p[i]=p[i]-1;
}
printf("\n");
	printf("\nThe Differentiated Polynomial Is:");
	for(j=0;j<n;j++)
    {   
	if(c[j]>0)
    {
      printf("+");
	  printf("%.0f",c[j]);
    }
    else
    {
    	printf("%.0f",c[j]);
	}
    	printf("x^");
	  printf("%.0f",p[j]);
   
	}	
}
if(select==13)
{
	printf("\nEnter the Number to find the Binary Equivalent Of:");
	unsigned int num,a,i,sum=0;
	scanf("%d",&num);
	a=num;
	for(i=8;i>=1;i--)
	{
		sum=sum+(a%2)*pow(10,(8-i));
		if(a==1)
		{
			break;
		}
		a=a/2;
	}
	printf("\nThe Binary Equivalent is: %d",sum);

}
if(select==14)
{
	float n;
	printf("\nEnter the Number To Find The Absolute Of:");
	
	scanf("%f",&n);
	if(n<0)
	{
		n=n*(-1);
	}
	printf("\nThe Absolute is: %.1f",n);
}
else if(select==15)
{
		 printf("\n\n\n\n \t\t\t\t\t\t\t      WELCOME TO THE UNIT CONVERTER");
    printf("\n\n \t\t\t\t\t\t\t         SELECT FORM THE OPTIONS:");
    printf("\n\n\t\t\t    ------------------------------------------------------------------------------------------------");
    printf("\n\t\t\t    1-Distance Related Conversions   2-Temperature Related Conversions  3-Weight Related Conversions");
    printf("\n\t\t\t    ------------------------------------------------------------------------------------------------");
    int in3sel;
    printf("\n\n \t\t\t\t\t\t\t           ENTER YOUR CHOICE:");
    scanf("%d",&in3sel);
    if(in3sel==1)
    {
	int fromUnit,toUnit;
    double fromValue,meterValue,toValue;
    int power=0;
    printf("\n\n\n\n");
    printf("Ell: 1\n");
    printf("Femi: 2\n");
    printf("Foot: 3\n");
    printf("Inch: 4\n");
    printf("Light year: 5\n");
    printf("Metre: 6\n");
    printf("Mile: 7\n");
    printf("Nano meter: 8\n");
    printf("Pace: 9\n");
    printf("Point: 10\n");
    printf("Yard: 11\n");
    printf("Mili meter: 12\n");
    printf("Centi meter: 13\n");
    printf("Deci meter: 14\n");
    printf("Deca meter: 15\n");
    printf("Hecto meter: 16\n");
    printf("Kilo meter: 17");
    printf("\nEnter From Unit As Number:");
    scanf("%d",&fromUnit);
    printf("\nEnter To Unit As Number:");
    scanf("%d",&toUnit);
    printf("\nEnter The Value To Be Converted:");
    scanf("%lf",&fromValue);
    
	switch(fromUnit)
	{
         case 1: meterValue = fromValue * 1.143; break;
         case 2: meterValue = fromValue ; power = -15; break;
         case 3: meterValue = fromValue * 0.3048; break;
         case 4: meterValue = fromValue * 0.0254; break;
         case 5: meterValue = fromValue * 9.4607304725808; power =15; break;
         case 6: meterValue = fromValue;break;
         case 7: meterValue = fromValue * 1609.344; ; break;
         case 8: meterValue = fromValue;  power=-9; break;
         case 9: meterValue = fromValue * 0.762 ; break;
         case 10: meterValue = fromValue * 0.000351450; break;
         case 11: meterValue = fromValue * 0.9144; break;
         case 12: meterValue = fromValue * 0.001; break;
         case 13: meterValue = fromValue * 0.01; break;
         case 14: meterValue = fromValue * 0.1; break;
         case 15: meterValue = fromValue * 10; break;
         case 16: meterValue = fromValue * 100; break;
         case 17: meterValue = fromValue * 1000; break;
         default:printf("Invalid input");break;
    }

 switch(toUnit){
         case 1: toValue = meterValue/1.143; break;
         case 2: toValue = meterValue; break;
         case 3: toValue = meterValue/0.3048; break;
         case 4: toValue = meterValue/0.0254; break;
         case 5: toValue = meterValue/9.4607304725808; break;
         case 6: toValue = meterValue;break;
         case 7: toValue = meterValue/1609.344; break;
         case 8: toValue = meterValue;power=9; break;
         case 9: toValue = meterValue/0.762; break;
         case 10: toValue = meterValue/0.000351450; break;
         case 11: toValue = meterValue/0.9144; break;
         case 12: toValue = meterValue/0.001; break;
         case 13: toValue = meterValue/0.01; break;
         case 14: toValue = meterValue/0.1; break;
         case 15: toValue = meterValue/10; break;
         case 16: toValue = meterValue/100;  break;
         case 17: toValue = meterValue/1000;  break;
         default:printf("Invalid input");break;
    }
   
    if(power==0)
         printf("\nThe Result is: %.4lf ",toValue);
    else{
        
         printf("\nThe Result Is: %.4lf * 10^%d",toValue,power);
    } 
}
else if(in3sel==2)
{   
 printf("\n\n\n\n");
	int f,t;
	double kel,fv,tv;
	printf("Kelvin: 1");
	printf("\nDegree Celcius: 2");
	printf("\nFarenheit: 3");
	printf("\nEnter From Unit As Number:");
    scanf("%d",&f);
    printf("\nEnter To Unit As Number:");
    scanf("%d",&t);
    printf("\nEnter The Value To Be Converted:");
    scanf("%lf",&fv);
    switch(f)
    {
    	case 1:kel=fv;break;
    	case 2:kel=fv+273.15;break;
    	case 3:kel=((fv-32)*0.555555)+273.15;break;
    	 default:printf("Invalid input");break;
	}
	switch(t)
	{
		case 1:tv=kel;break;
		case 2:tv=kel-273.15;break;
		case 3:tv=((kel-273.15)/0.5555)+32;break;
		 default:printf("Invalid input");break;
	}
	  printf("\nThe Result is: %.4lf ",tv);
	
}
else if(in3sel==3)
{
	 printf("\n\n\n\n");
	int f,t;
	double kg,fv,tv;
	printf("Kilogram: 1");
	printf("\nPound: 2");
	printf("\nGrams: 3");
	printf("\nEnter From Unit As Number:");
    scanf("%d",&f);
    printf("\nEnter To Unit As Number:");
    scanf("%d",&t);
    printf("\nEnter The Value To Be Converted:");
    scanf("%lf",&fv);
    switch(f)
    {
    	case 1:kg=fv;break;
    	case 2:kg=fv/2.205;break;
    	case 3:kg=fv/1000;break;
    	 default:printf("Invalid input");break;
	}
	switch(t)
	{
		case 1:tv=kg;break;
		case 2:tv=kg*2.205;break;
		case 3:tv=kg*1000;break;
		 default:printf("Invalid input");break;
	}
	  printf("\nThe Result is: %.4lf ",tv);
	
}
}
if(select==16)
{ 
   printf("\n\nEnter The Base Amount:");
   float b;
   scanf("%f",&b);
   printf("\nEnter The GST Percentage:");
   float p;
   scanf("%f",&p);
   float xt=(p/100)*b;
   float ig=xt/2;
   float cg=ig;
   float fp=b+xt;
   printf("\nThe Final Amount To Be Paid Is: %.3f",fp);
   printf("\nThe IGST: %.3f  and  SGST: %.3f",ig,cg);
	
}
if(select==17)
{
	printf("\n\n\n\t\t\t\t\t----------------WELCOME TO THE SERIES CALCULATOR-----------------");
    printf("\n \n \t \t\t\t\t\t\t     SELECT FROM THE OPTIONS\n");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------------");
	printf("\n \t \t\t\t1-SUM OF(1+2+3+4...+N)  2-SUM OF(1^2+2^2+3^2+...+N^2)  3-SUM OF(1^3+2^3+3^3+....+N^3)\n");
    printf("\t\t\t\t-------------------------------------------------------------------------------------");
	printf(" \n\n \t \t\t\t\t\t\t   SELECT AND ENTER THE CHOICE:");
    int select5;
    scanf("%d",&select5);
    if(select5==1)
    {
    	printf("\nEnter the Upto which term do you want the sum:");
    	int n;
    	scanf("%d",&n);
    	float sum=(n*(n+1))/2;
    	printf("\nThe Sum is: %f",sum);
	}
	else if(select5==2)
    {
    	printf("\nEnter the Upto which term do you want the sum:");
    	int n;
    	scanf("%d",&n);
    	float sum=(n*(n+1)*((2*n)+1))/6;
    	printf("\nThe Sum is: %f",sum);
	}
	if(select5==3)
    {
    	printf("\nEnter the Upto which term do you want the sum:");
    	int n;
    	scanf("%d",&n);
    	float sum=(n*(n+1))/2;
    	sum=pow(sum,2);
    	printf("\nThe Sum is: %f",sum);
	}
} 
else if(select==18)
{   
    int n;
    printf("\nEnter The Number Of Data Entries:");
    scanf("%d",&n);
    float a[n];
	float s[n];
	float num,a1=0;
	float s1=0.0,m1;
	int i,j;
	printf("Enter the Data");
	for(i=0;i<n;i++)
	{   
		scanf("%f",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	    s1+=a[i];
	}
	m1=s1/n;
	for(i=0;i<n;i++)
	{  num=m1-a[i];
	    s[i]=num*num;
	    
	}
	
	for(i=0;i<n;i++)
	{
		a1=a1+s[i];
	}
	a1=a1/n;
	a1=sqrt(a1);
	printf("\nThe Standard Deviation is: %f",a1);
}
else if(select==19)
{   
    int n;
    printf("\nEnter The Number Of Data Entries:");
    scanf("%d",&n);
    float a[n];
	float s[n];
	float num,a1=0;
	float s1=0.0,m1;
	int i,j;
	printf("Enter the Data");
	for(i=0;i<n;i++)
	{   
		scanf("%f",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	    s1+=a[i];
	}
	m1=s1/n;
	for(i=0;i<n;i++)
	{  num=m1-a[i];
	    s[i]=num*num;
	    
	}
	
	for(i=0;i<n;i++)
	{
		a1=a1+s[i];
	}
	a1=a1/n;
	printf("\nThe Variance is: %f",a1);
}
else if(select==20)
{
	printf("\n\nEnter The Value to find Logarithm of:");
	float n;
	scanf("%f",&n);
	float l=log(n);
	printf("\nThe Log Value is: %.5f",l);
}

else if(select==21)
    {
    	float amount;
  float rupee, dollar, pound, euro;
  int choice;
 
  printf("\n\n\nFollowing are the Choices:");
  printf("\nEnter 1: Ruppe");
  printf("\nEnter 2: Dollar");
  printf("\nEnter 3: Pound");
  printf("\nEnter 4: Euro");
 
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
 
  printf("Enter the amount you want to convert?\n");
  scanf("%f", &amount);
 
  switch (choice)
  {
    case 1: // Ruppe Conversion
        dollar = amount / 80;
        printf("%.2f Rupee =  %.2f dollar", amount, dollar);
 
        pound = amount / 100.15;
        printf("\n%.2f Rupee =  %.2f pound", amount, pound);
 
        euro = amount / 85.80;
        printf("\n%.2f Rupee =  %.2f euro", amount, euro);
        break;
 
    case 2: // Dollar Conversion
        rupee = amount * 80;
        printf("\n%.2f Dollar =  %.2f rupee", amount, rupee);
 
        pound = amount *0.81;
        printf("\n%.2f Dollar =  %.2f pound", amount, pound);
 
        euro = amount *0.95;
        printf("\n%.2f Dollar =  %.2f euro", amount, euro);
        break;
 
    case 3: // Pound Conversion
        rupee = amount * 100.15;
        printf("\n%.2f Pound =  %.2f rupee", amount, rupee);
 
        dollar = amount *1.23;
        printf("\n%.2f Pound =  %.2f dollar", amount, dollar);
 
        euro = amount *1.17;
        printf("\n%.2f Pound =  %.2f euro", amount, euro);
        break;
 
    case 4: // Euro Conversion
        rupee = amount*85.40;
        printf("\n%.2f Euro =  %.2f rupee", amount, rupee);
 
        dollar = amount *1.05;
        printf("\n%.2f Euro =  %.2f dollar", amount, dollar);
 
        pound = amount *0.86;
        printf("\n%.2f Euro =  %.2f pound", amount, pound);
        break;
 
     //Default case
    default:
        printf("\nInvalid Input");
  }
	}
	else if(select==22)
	{
		float height, weight, bmi;  
  	 printf("\n\n\n \t\t\t\t\t\t\t        WELCOME TO THE BMI CALCULATOR");
    printf("\n\n\n\nEnter height in meter:");  
    scanf("%f", &height);  
  
    printf("\nEnter weight in kg:");  
    scanf("%f", &weight);  
  
    bmi = weight / (height * height);  
  
    printf("\nYour Body Mass Index(BMI) is: %f\n", bmi);  
  
    if(bmi < 15)  
    {  
        printf("Your BMI category is: Starvation\n");  
    }  
    else if(bmi >= 15.1 && bmi <= 17.5)  
    {  
        printf("Your BMI category is: Anorexic\n");  
    }  
    else if(bmi >= 17.6 && bmi <= 18.5)  
    {  
        printf("Your BMI category is: Underweight\n");  
    }  
    else if(bmi >= 18.6 && bmi <= 24.9)  
    {  
        printf("Your BMI category is: Ideal\n");  
    }  
    else if(bmi >= 25 && bmi <= 25.9)  
    {  
        printf("Your BMI category is: Overweight\n");  
    }  
    else if(bmi >= 30 && bmi <= 30.9)  
    {  
        printf("Your BMI category is: Obese\n");  
    }  
    else if(bmi >= 40)  
    {  
        printf("Your BMI category is: Morbidly Obese\n");  
    }  
    else  
    {  
        printf("Wrong entry\n");  
    }  
	}
	
	printf("\n\n\n     \t\t\t\t\t     \t\tDO YOU WANT TO REPEAT(Enter Y or N):");
	char che;
	scanf("%c",&che);
	scanf("%c",&che);
	if(che=='N'||che=='n')
	{
		break;
	}
	else if(che=='Y'||che=='y')
	{
		continue;
	}
	else
	{
		printf("\n\n\t\t\t\t\tInvalid Input");
		break;
	}
}
   
    
     printf("\n\n\n\t       \t\t\t\t\t\t------------THANK YOU-------------");
}



double sin(double x) 
{
double sum;
double fa;
double pow;
sum = 0.0;
int i;
for(i = 0; i <=20; i++)
{
fa = 1.0;
pow = 1.0;
int j;
for(j = 1; j <= 2*i+1; j++)
{
fa *= j;
pow *= x;
}
sum += ((i%2?-1.0:1.0)/fa)*pow;
}
return sum;
}
double cos(double x) 
{
double sum;
double fa;
double pow;
sum = 0.0;
int i;
for(i = 0; i <=20; i++)
{
fa = 1.0;
pow = 1.0;
int j;
for(j = 1; j <= 2*i; j++)
{
fa *= j;
pow *= x;
}
sum += ((i%2?-1.0:1.0)/fa)*pow;
}
return sum;
}


