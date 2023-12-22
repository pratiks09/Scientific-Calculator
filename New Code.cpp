#include<stdio.h>
#include<math.h>
#include<process.h>
#include<iostream>
using namespace std;
 main ()
 {
int choice, i, a, b, pin;
float s,x, y, result, base, height, length, breadth, side;
for (i=1;i<=choice;i++)
{



/** case 1: // for Right Angled Triangle
                System.out.print("Enter the height of Right Angle Triangle \n");
                height = sc.nextInt();
                System.out.print("Enter the base of Right Angle Triangle \n");
                breadth = sc.nextInt();
                ar = (height * breadth)/2;
                System.out.println("Area of the Right Angle Triangle is " + ar + "\n\n");
                break;
               case 2:               
                System.out.print("Enter the side of an Equilateral Triangle \n");
                side = sc.nextInt();
                ar=(side * side * Math.sqrt(3)) / 4;
                System.out.println("Area of the Equilateral Triangle is " + ar + "\n\n");
                break;**/
cout<<"\nSelect your operation (0 to exit):\n";
cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
cout<<"5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n";
cout<<"9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n";
cout<<"12. 10 ^ X\n13. X!\n14. %\n15. log10(x)\n16. Modulus\n";
cout<<"17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n";
cout<<"21. Cot(X)\n22. Sec(X)\n";
cout<<"23. For solving Quadratic Equations\n";
cout<<"24. For solving Area of Triangle\n";
cout<<"25. For solving Area & Perimeter of a Rectangle\n";
cout<<"26. For solving Area & Perimeter of a Square\n";
cout<<"Choice: "<<endl;
cin>> choice;
if((choice == 0) || (choice>= 27))

exit(1);


	
switch (choice)
	{
	
case 1:
	
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x + y;
printf("\nResult: %f", result);
break;

case 2:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x - y;
printf("\nResult: %f", result);
break;
case 3:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x * y;
printf("\nResult: %f", result);
break;
case 4:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x / y;
printf("\nResult: %f", result);
break;
case 5:
printf("Enter X: ");
scanf("%f", &x);
result = sqrt(x);
printf("\nResult: %f", result);
break;
case 6:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, y);
printf("\nResult: %f", result);
break;
case 7:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 2);
printf("\nResult: %f", result);
break;
case 8:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 3);
printf("\nResult: %f", result);
break;
case 9:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, -1);
printf("\nResult: %f", result);
break;
case 10:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
case 11:
printf("Enter X: ");
scanf("%f", &x);
y = 3;
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
case 12:
printf("Enter X: ");
scanf("%f", &x);
result = pow(10, x);
printf("\nResult: %f", result);
break;
case 13:
printf("Enter X: ");
scanf("%f", &x);
result = 1;

for(i = 1; i <= x; i++) {
result = result * i;
}
printf("\nResult: %.f", result);
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = (x * y) / 100;
printf("\nResult: %.2f", result);
break;
case 15:
printf("Enter X: ");
scanf("%f", &x);
result = log10(x);
printf("\nResult: %.2f", result);
break;
case 16:
printf("Enter X: ");
scanf("%d", &a);
printf("\nEnter Y: ");
scanf("%d", &b);
result = a % b;
printf("\nResult: %d", result);
break;
case 17:
printf("Enter X: ");
scanf("%f", &x);
result = sin(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 18:
printf("Enter X: ");
scanf("%f", &x);
result = cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 19:
printf("Enter X: ");
scanf("%f", &x);
if (x==90){
puts("tan 90 not defined");}
else{
result = tan(x * 3.14159/ 180);
printf("\nResult: %.2f", result);}
break;
case 20:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f", result);
break;
case 21:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 22:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;

case 23:
	double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    discriminant = b*b-4*a*c;

    if (discriminant > 0)
    {
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);

        printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
    }

    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);

        printf("root1 = root2 = %.2lf;", root1);
    }
 
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

case 24:
	cout<<"Please Select the below options:";
	cout<<"\n\t 1. By using Herons Formula \n\t 2. By Using Pythagoras Formula"<<endl;
	cin>> pin;
	switch (pin)
	{
		case 1: 
		cout<<"Enter the sides of the Triangle: \n";
		cout<<"Side A= ";cin>> a;
		cout<<"Side B= ";cin>> b;
		cout<<"Side C= ";cin>> c;
		s = (a+b+c)/2;
		result= sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Area of triangle using Herons Formula is: "<< result;
		break;
		
		case 2 :
		cout<<"Enter the Base of the Rigth Triangle: ";
		cin>> base;
		cout<<"Enter the Height of the Triangle: ";
		cin>> height;
		result=0.5*base*height;
		cout<<"The Area of Right Triangle is: "<<result;
		return 0;
	}
	break;
	
case 25:
	cout<<"Please Select the below options:";
	cout<<"\n\t 1. For Calculating Area \n\t 2. For Calculating Perimeter"<<endl;
	cin>> pin;
	switch (pin){
		case 1: 
	cout<<"Enter the Length of the Rectangle: ";
	cin>>length;
	cout<<"Enter the Breadth of the Rectangle: ";
	cin>>breadth;
	result= length*breadth;
	cout<<"Area of Rectangle is: "<<result;
	break;
	
	case 2: 
	cout<<"Enter the Length of the Rectangle: ";
	cin>>length;
	cout<<"Enter the Breadth of the Rectangle: ";
	cin>>breadth;
	result=2*(length+breadth);
	cout<<"Perimeter of Rectangle is: "<<result;
	return 0;
	}
	break;
	
case 26:
	cout<<"Please Select the below options:";
	cout<<"\n\t 1. For Calculating Area \n\t 2. For Calculating Perimeter"<<endl;
	cin>> pin;
	switch (pin){
		case 1: 
	cout<<"Enter the Side of the Square: ";
	cin>>side;
	result= pow(side,2);
	cout<<"Area of Square is: "<<result<<;
	break;
	
		case 2: 
	cout<<"Enter the Side of the Square: ";
	cin>>side;
	result=4*side;
	cout<<"Perimeter of Square is: "<<result;
	return 0;
	}	
	break;

default:
printf("\nInvalid Choice!");
}
}
return 0;
}
