#include<iostream>
using namespace std;
main(){
	cout << "Write your Value in Dollars..";
	int dollar;
	cin >> dollar;
	int pkr;
	cout << "Your Value in pkr is..";
	pkr=dollar*200;
	cout <<pkr;
}




#include<iostream>
using namespace std;
main(){
	cout << "Enter your name: ";
	string name;
	cin >> name;
	cout << "Enter your roll number: ";
	int roll;
	cin >> roll;
	cout << "Enter your aggregate: ";
	float aggregiate;
	cin >> aggregiate;
	cout << "Enter your section: ";
	char section;
	cin >> section;
	cout << "Student Information:" << endl; 
	cout << "Name: "<< name << endl;
	cout << "Roll Number: " << roll << endl;
	cout << "Aggregate: " << aggregiate << endl;
	cout << "Section: " << section << endl;
}

	






#include<iostream>
using namespace std;
main(){
	cout << "Enter weight in pounds: ";
	float ibs;
	cin >> ibs;
	float kg;
	kg=(0.45)*ibs;
	cout <<ibs <<" Pounds is equal to " <<kg <<" Kilograms.";
}







#include<iostream>
using namespace std;
main(){
	cout << "Enter the length of the rectangle: ";
	float length;
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	float width;
	cin >> width;
	float area;
	area=length*width;
	cout << "The area of the rectangle is: " << area;
}









#include<iostream>
using namespace std;
main(){
	cout << "Enter the charge (Q) in Coulombs: ";
	float Q;
	cin >> Q;
	cout << "Enter the time (t) in seconds: ";
	float T;
	cin >> T;
	float I;
	I= Q/T;
	cout << "The current (I) is: " << I << " Amperes";
}
	







#include<iostream>
using namespace std;
main(){
	cout << "Enter the student's name: ";
	string name;
	cin >> name;
	cout << "Enter matriculation marks (out of 1100): ";
	float matric;
	cin >> matric;
	cout << "Enter intermediate marks (out of 550): ";
	float intermediate;
	cin >> intermediate;
	cout << "Enter Ecat marks (out of 400): ";
	float ecat;
	cin >> ecat;
	float aggregiate;
	aggregiate=(matric/1100*10)+(intermediate/550*40)+(ecat/400*50);
	cout << "Aggregate score for " << name << " in UET is: " << aggregiate << "%";
}

	





#include<iostream>
using namespace std;
main(){
	cout << "Enter the size in megabytes (MB): ";
	float mb;
	cin >> mb;
	float bit;
	bit=8388608*mb;
	cout << mb << " MB is equivalent to " << bit << " bits.";
}







#include<iostream>
using namespace std;
main(){
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour;
	int sec;
	sec=3600*hour;
	cout <<hour << " hours is equivalent to " <<sec << " seconds.";
}




#include<iostream>
using namespace std;
main(){
	cout << "Enter voltage (in volts): ";
	float volt;
	cin >> volt;
	cout << "Enter current (in amperes): ";
	float amp;
	cin >> amp;
	float power;
	power=volt*amp;
	cout << "The power is "<< power << " watts.";
}






#include<iostream>
using namespace std;
main(){
	cout << "Enter your age in years: ";
	int year;
	cin >> year;
	int days;
	days= 365*year;
	cout << "Your age in days is approximately " << days << " days.";
}





#include<iostream>
using namespace std;
main(){
	cout << "Enter the name of the cricket team: ";
	string name;
	cin >> name;
	cout << "Enter the number of wins: ";
	int wins;
	cin >> wins;
	cout << "Enter the number of draws: ";
	int draws;
	cin >> draws;
	cout << "Enter the number of losses: ";
	int losses;
	cin >> losses;
	int points;
	points=(wins*3)+(draws*1)+(losses*0);
	cout << name << " has obtained " << points << " points in the Asia Cup tournament.";
}





#include<iostream>
using namespace std;
main(){
	cout << "Enter the current world population: ";
	float pop;
	cin >> pop;
	cout << "Enter the monthly birth rate (number of births per month): ";
	float bir;
	cin >> bir;
	float tot;
	tot=(bir*360)+(pop);
	cout << "The population in three decades will be: " << tot;
}






#include<iostream>
using namespace std;
	void calculateFuel(float distance)
	{
	float fuel;
	fuel=distance * 10;
	cout <<"Fuel needed: "<<fuel;}
main(){
	float distance;
	cout << "Enter the distance: ";
	cin>>distance;
	calculateFuel( distance);
	}
	
	



#include<iostream>
using namespace std;
	void inchesToFeet(float inches)
	{
	float feet;
	feet=inches / 12;
	cout << "Equivalent in feet: "<<feet;
	}
main(){
	float inches;
	cout <<"Enter the measurement in inches: ";
	cin >> inches;
	inchesToFeet(inches);
}







#include<iostream>
using namespace std;
	void howManyStickers(int n)
	{
	int stickers;
	stickers=(n*n)*6;
	cout << "Number of stickers needed: "<<stickers;
	}
main(){
	int n;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> n;
	howManyStickers(n);
}

	



#include<iostream>
using namespace std;
	void sum(float num1,float num2)
	{
	float sum;
	sum=num1+num2;
	cout << "Addition: "<<sum;
	}

	void subtraction(float num1,float num2)
	{
	float sub;
	sub=num1-num2;
	cout << "Subtraction: "<< sub;
	}

	void product(float num1,float num2)
	{
	float pro;
	pro=num1*num2;
	cout << "Multiplication: "<<pro;
	}
	
	void division(float num1,float num2)
	{
	float div;
	div=num1/num2;
	cout << "Division: "<< div;
	}
main(){
	float n1,n2;
	char op;
	cout << "Enter 1st number: ";
	cin>> n1;
	cout <<"Enter 2nd number: ";
	cin>>n2;
	cout << "Enter an operator (+,-,*,/): ";
	cin>> op;

	if (op=='+')
	{

	sum(n1,n2);	

	}

	if(op=='-')
	{
	
	subtraction(n1,n2);

	}
	
	if(op=='*')
	{
	
	product(n1,n2);
	
	}
	
	if(op=='/')
	{

	division(n1,n2);

	}
	}







#include<iostream>
using namespace std;
	
	void Vote(int age)
	{
	if (age>=18)
	{
	cout << "You are eligible to vote.";
	}
	if (age<18)
	{
	cout << "You are not eligible to vote.";
	}
	}
main(){
	int age;
	cout << "Enter your age: ";
	cin>> age;
	Vote(age);
	}





#include<iostream>
using namespace std;
	void PF(int num)
	{
	if (num>50)
	{
	cout <<"Pass";
	}
	if (num<=50)
	{
	cout << "Fail";
	}
	}
	
main(){
	int num;
	cout << "Enter your score: ";
	cin  >> num;
	PF(num);
	}





#include<iostream>
using namespace std;
	void evenOrOdd(int num)
	{
	if (num%2==0)
	{
	cout << "Number "<<num<< " is even";
	}
	if (num%2!=0)
	{
	cout << "Number "<<num<<" is odd";
	}
	}
main(){
	int num;
	cout <<"Enter a number: ";
	cin>> num;
	evenOrOdd(num);
	}






#include<iostream>
using namespace std;
	void calculatePayableAmount(string day,float amount)
	{
	float payable;
	if(day=="Sunday")
	{
	payable=amount-(amount*0.1);
	cout<<"Payable Amount: $"<<payable;
	}
	if(day!="Sunday")
	{
	payable=amount;
	cout <<"Payable Amount: $"<<payable;
	}
	}
main(){
	float amount;
	string day;
	cout <<"Enter the day of purchase: ";
	cin >>day;
	cout <<"Enter the total purchase amount: $";
	cin >> amount;
	calculatePayableAmount(day,amount);
}
	




#include<iostream>
using namespace std;
	void calculateFuel(float distance)
	{ 
	float fuel;
	fuel=distance*10;
	if(fuel<=100)
	{
	fuel=100;
	}
	if(fuel!=100)
	{
	fuel=fuel;
	}
	cout<<"Fuel needed: "<<fuel;
	}
main(){
	float distance;
	cout << "Enter the distance: ";
	cin>>distance;
	calculateFuel(distance);
	}




#include<iostream>
using namespace std;
main(){
	string name;
	cout << "Enter your name: ";
	cin>> name;
	while (true)
{	
	cout<<name<<endl;
}
}




#include<iostream>
using namespace std;
	void name(string name)
{
	while (true)
	{
	cout<<name<<endl;
	}
	}

main(){
	string nam;
	cout << "Enter name: ";
	cin>>nam;
	name(nam);
}





#include<iostream>
using namespace std;
	void payable(string day,float amount)
{
	float payable;

	if(day=="Sunday")
	{
	payable=amount-(amount*0.1);
	}
	
	if(day!="Sunday")
	{
	payable=amount-(amount*0.05);
	}
	cout << "Payable: $"<<payable<<endl;
}
main(){
	while(true)
{
	float amount;
	string day;
	cout<< "Enter the day: ";
	cin >>day;
	cout <<"Enter the amount: $";
	cin>>amount;
	payable(day,amount);
}
	}	






#include<iostream>
#include<cmath>
using namespace std;
main(){
    float num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The minimum of "<<num1<<" and "<<num2<<" is: "<<min(num1,num2);

}







#include<iostream>
#include<cmath>
using namespace std;
main(){
    float num1,num2;
    cout<<"Enter the base number: ";
    cin>>num1;
    cout<<"Enter the exponent: ";
    cin>>num2;
cout<<num1<<" raised to the power "<<num2<<" is: "<<pow(num1,num2);

}





#include<iostream>
#include<cmath>
using namespace std;
main(){
	float num1;
	cout<<"Enter a number: ";
	cin>>num1;
	cout<<"The square root of "<<num1<<" is: "<<sqrt(num1);	
}






#include<iostream>
#include<cmath>
using namespace std;
float height(float dist,float angl);
main(){
	float dist,angl;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>dist;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angl;
	cout<<"The height of the tree is: "<<height(dist,angl)<<" feet";
	}
	
	float height(float dist,float angl)
{
	float ang;
	ang=angl/57.3;
	float heigh;
	heigh=tan(ang)*dist;
	return(heigh);
}	






#include<iostream>
#include<cmath>
using namespace std;
float sloution(float a,float b,float c);
float a,b,c,sol,sol1,sol2,p;
float dis;
main(){
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	dis=((pow(b,2))-(4*a*c));
	if(dis<0)
	{
	p=-1*dis;
	cout<<"Solution: "<<"x= "<<(-1*b)/(2*a)<<" +"<< sqrt(p) / (2 * a)<<" i";
	}
	else if(dis==0)
	{
	cout<<"Solution: "<<"x= "<<(-1*b)/(2*a);
	}
	else if(dis>0)
	{
	cout<<"Solution: "<<"x= "<<sol1<<" x= "<<sol2;
	}

}
	
	float sloution()
{
	if(dis>0);
	{
	sol1=(-1*b)+(sqrt(dis))/(2*a);
	sol2=(-1*b)-(sqrt(dis))/(2*a);
	}
	if(dis=0);
	{
	sol1=sol2=(-1*b)/(2*a);
	}
	if(dis<0);
	{
	sol1=sqrt(dis)/(2*a);
	sol2=sqrt(dis)/(2*a);
	}
	return(sol1,sol2);
}


	


#include<iostream>
using namespace std;
	void checkAlphabetCase();
main(){
	checkAlphabetCase();
}
	
	void checkAlphabetCase()
{
	char b;
	cout<<"Enter a character (A/a): ";
	cin>>b;
	if(b=='A')
	{
	cout<<"You have entered Capital A";
	}	
	if(b=='a')
	{
	cout<<"You have entered small a";
	}
}
	




#include<iostream>
using namespace std;
	void IsSymmetrical(int a);
main(){
	int a;
	cout <<"Enter a three-digit number: ";
	cin>>a;
	IsSymmetrical(a);
}
	
	void IsSymmetrical(int a)
{
	if((a / 100)==(a % 10))
	{
	cout<<"The number is symmetrical.";
	}
	if((a / 100)!=(a % 10))
	{
	cout<<"The number is not symmetrical.";
	}
}
	




#include<iostream>
using namespace std;
	void OddishOrEvenish(int a);
main(){
	int a;
	cout<<"Enter a five-digit number: ";
	cin>>a;
	OddishOrEvenish(a);
	}
	
	void OddishOrEvenish(int a)
	{
	int x,y;
	x=(a/10000)+((a%10000)/1000)+((a%10000)%1000)/100+((a%10000)%1000)%100/10+(((a%10000)%1000)%100%10);
	y=x%2;
	if(y==0)
	{
	cout<<"Evenish";

	}
	if(y!=0)
	{
	cout<<"Oddish";
	}
	}






#include<iostream>
using namespace std;
	void time(int hour,int min);
main(){
	int hour,min;
	cout<<"Enter Hours: ";
	cin>>hour;
	cout<<"Enter Minutes: ";
	cin>>min;
	time(hour,min);
	}
	
	void time(int hour,int min)
	{
	int minutes,totalmin,totalhour;
	minutes=(hour*60)+min+15;
	totalhour=minutes/60;
	totalmin=minutes%60;
	cout<<totalhour<<":"<<totalmin;
	}





#include<iostream>
using namespace std;
	void numtoEng(int a);
main(){
	int a;
	cout<<"Enter a number (1-99): ";
	cin>>a;
	numtoEng(a);
	}
	
	void numtoEng(int a)
	{	
	if(a>=20)
	{
	if(a/10==1)
	{
	cout<<"Ten";
	}
	
	if(a/10==2)
	{
	cout<<"Twenty";
	}
		
	if(a/10==3)
	{
	cout<<"Thirty";
	}	
	if(a/10==4)
	{
	cout<<"Forty";
	}	
	if(a/10==5)
	{
	cout<<"Fifty";
	}
	if(a/10==6)
	{
	cout<<"Sixty";
	}
		
	if(a/10==7)
	{
	cout<<"Seventy";
	}
		
	if(a/10==8)
	{
	cout<<"Eighty";
	}
		
	if(a/10==9)
	{
	cout<<"Ninty";
	}

	if(a%10==1)
	{
	cout<<"One";
	}
		
	if(a%10==2)
	{
	cout<<"Two";
	}
	
	if(a%10==3)
	{
	cout<<"Three";
	}
		
	if(a%10==4)
	{
	cout<<"Four";
	}
		
	if(a%10==5)
	{
	cout<<"Five";
	}
		
	if(a%10==6)
	{
	cout<<"Six";
	}
		
	if(a%10==7)
	{
	cout<<"Seven";
	}
		
	if(a%10==8)
	{
	cout<<"Eight";
	}
		
	if(a%10==9)
	{
	cout<<"Nine";
	}}
	else if(10<a<20)
	{
	if(a==11)
	{
	cout<<"Eleven";
	}
	if(a==12)
	{
	cout<<"Twelve";
	}
	if(a==13)
	{
	cout<<"Thirteen";
	}
	if(a==14)
	{
	cout<<"Fourteen";
	}
	if(a==15)
	{
	cout<<"Fifteen";
	}
	if(a==16)
	{
	cout<<"Sixteen";
	}	
	if(a==17)
	{
	cout<<"Seventeen";
	}
	if(a==18)
	{
	cout<<"Eighteen";
	}
	if(a==19)
	{
	cout<<"Ninteen";
	}
	}
	}








#include<iostream>
using namespace std;
	void calculatePoolState(int V,int P1,int P2,float H);
main(){
	int V,P1,P2;
	int H;
	cout<<"Enter volume of the pool in liters: ";
	cin>>V;
	cout<<"Enter flow rate of the first pipe per hour: ";
	cin>>P1;
	cout<<"Enter flow rate of the second pipe per hour: ";
	cin>>P2;
	cout<<"Enter hours that the worker is absent: ";
	cin>>H;
	calculatePoolState(V,P1,P2,H);
	}
	
	void calculatePoolState(int V,int P1,int P2,float H)
	{
	float totV,P1per,P2per;
	float per,per2;
	totV=(P1*H)+(P2*H);
	per=(totV / V);
	per2=per*100;
	P1per=((P1*H)/totV)*100;
	P2per=((P2*H)/totV)*100;
	if(totV<=V)
	{
	cout<<"The pool is "<<per2<<" % full. "<<"Pipe 1: "<<P1per<<"%."<<" Pipe 2: "<<P2per<< "%.";
	}
	if(totV>V)
	{
	cout<<"For "<<H<<" hours, the pool overflows with "<<totV<< " liters.";
	}
	}






#include<iostream>
using namespace std;
main(){
	cout << "Enter the number of sides of the polygon: ";
	int nofpolygon;
	cin >> nofpolygon;
	int sumofangles;
	sumofangles=(nofpolygon-2)*180;
	cout << "The sum of internal angles of a "<<nofpolygon<< "-sided polygon is: "<<sumofangles<< " degrees";
}
	






#include<iostream>
using namespace std;
main(){
	cout << "Number of Minutes: ";
	int min;
	cin >> min;
	cout << "Frames per Second: ";
	int frame;
	cin >> frame;
	int totframe;
	totframe=(frame * 60)*min;
	cout << "Total Number of Frames: "<< totframe;
}
	




#include<iostream>
using namespace std;
main(){
	cout << "Enter Initial Velocity (m/s): ";
	float invel;
	cin >> invel;
	cout << "Enter Acceleration (m/s^2): ";
	float acc;
	cin >> acc;
	cout << "Enter Time (s): ";
	int tim;
	cin >> tim;
	int fivel;
	fivel=(acc*tim)+invel;
	cout << "Final Velocity (m/s): "<<fivel;
}




#include<iostream>
using namespace std;
main(){
	cout << "Enter Imposter Count: ";
	float i;
	cin >> i;
	cout << "Enter Player Count: ";
	float p;
	cin >> p;
	int impchance;
	impchance=(i/p)*100;
	cout << "Chance of being an imposter: "<<impchance<<"%";
}







#include<iostream>
using namespace std;
main(){
	cout << "Enter the Name of the Person: ";
	string name;
	cin >> name;
	cout << "Enter the target weight loss in kilograms: ";
	float kg;
	cin >> kg;
	float day;
	day=kg*15;
	cout <<name << " will need "<<day << " days to lose "<<kg << " kg of weight by following the doctor's suggestions";
}








#include<iostream>
using namespace std;
main(){
	cout << "Enter the size of the fertilizer bag in pounds: ";
	int size;
	cin >> size;
	cout << "Enter the cost of the bag: $";
	int cost;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin >> area;
	int costpound;
	int costfeet;
	costpound=cost/size;
	costfeet=cost/area;
	cout << "Cost of fertilizer per pound: $"<<costpound<<endl;
	cout << "Cost of fertilizing per square foot: $"<<costfeet;
}
	







#include<iostream>
using namespace std;
main(){
	cout << "Enter the movie name: ";
	string name;
	cin >> name;
	cout << "Enter the adult ticket price: $";
	float adult;
	cin >> adult;
	cout << "Enter the child ticket price: $";
	float child;
	cin >> child;
	cout << "Enter the number of adult tickets sold: ";
	int adultsold;
	cin >> adultsold;
	cout << "Enter the number of child tickets sold: ";
	int childsold;
	cin >> childsold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	float charity;
	cin >> charity;
	float amountgen;
	amountgen=(adult*adultsold)+(child*childsold);
	cout << "              "<<endl;
	cout << "Movie: "<<name<<endl;
	cout << "Total amount generated from ticket sales: $"<<amountgen<<endl;
	float donation;
	donation=((charity) * amountgen)/100;
	cout << "Donation to charity ("<<charity<< "%): $"<< donation<<endl;
	float remain;
	remain=amountgen-donation;
	cout << "Remaining amount after donation: $"<<remain;

}
	






#include<iostream>
using namespace std;
main(){
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegprice;
	cin >> vegprice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruprice;
	cin >> fruprice;
	cout << "Enter total kilograms of vegetables: ";
	float vegkg;
	cin >> vegkg;
	cout << "Enter total kilograms of fruits: ";
	float frukg;
	cin >> frukg;
	float earncoin;
	earncoin=(vegkg*vegprice)+(frukg*fruprice);
	float earnrps;
	earnrps=(1/1.94)*earncoin;
	cout << "Total earnings in Rupees (Rps): "<< earnrps;
}






#include<iostream>
using namespace std;
main(){
	cout << "Enter a 4-digit number: ";
	int num;
	cin  >> num;
	int n01;
	n01=num/1000;
	int n2;
	n2=num%1000;
	int n03;
	n03=n2/100;
	int n4;
	n4=n2%100;
	int n05;
	n05=n4/10;
	int n6;
	n6=n4%10;
	int n07;
	n07=n6/1;
	int sum;
	sum=n01+n03+n05+n07;
	cout << "Sum of the individual digits: "<<sum;
}






#include<iostream>
using namespace std;
main(){
	cout << "Number 1: ";
	int num1;
	cin >> num1;
	cout << "Number 2: ";
	int num2;
	cin >> num2;
	cout << "Number 3: ";
	int num3;
	cin >> num3;
	cout << "Number 4: ";
	int num4;
	cin >> num4;
	cout << "Number 5: ";
	int num5;
	cin >> num5;	
	cout << "Number 6: ";
	int num6;
	cin >> num6;
	cout << "Number 7: ";
	int num7;
	cin >> num7;	
	cout << "Number 8: ";
	int num8;
	cin >> num8;
	cout << "Number 9: ";
	int num9;
	cin >> num9;
	cout << "Number 10: ";
	int num10;
	cin >> num10;	
	cout << "Number 11: ";
	int num11;
	cin >> num11;	
	cout << "Number 12: ";
	int num12;
	cin >> num12;
	cout << "Number 13: ";
	int num13;
	cin >> num13;	
	cout << "Number 14: ";
	int num14;
	cin >> num14;
	cout << "Number 15: ";
	int num15;
	cin >> num15;
	int p1;
	p1=num1+num2+num3+num4+num5;
	int p2;
	p2=num6*num7*num8*num9*num10;
	int p3;
	p3=num11-num12-num13-num14-num15;
	int p4;
	p4=p1+p2;
	int final;
	final=p4-p3;
	cout << "The final result is: "<<final;
}
	
	
	
	



#include<iostream>
using namespace std;
main(){
	cout << "Enter the person's age: ";
	int age;
	cin >> age;
	cout << "Enter the number of times they've moved: ";
	int move;
	cin >> move;
	int samehouse;
	samehouse=(age)/(move+1);
	cout << "Average number of years lived in the same house: "<<samehouse;
}





#include<iostream>
using namespace std;
main(){
	cout << "Number of square meters you can paint: ";
	int paint;
	cin >> paint;
	cout << "Width of the single wall (in meters): ";
	int w;
	cin >> w;
	cout << "Height of the single wall (in meters): ";
	int h;
	cin >> h;
	int walls;
	walls=paint/(w*h);
	cout << "Number of walls you can paint: "<< walls;
}
	
	


	

#include<iostream>
using namespace std;
main(){
	cout << "Enter Number 1: ";
	int n1;
	cin >> n1;
	cout << "Enter Number 2: ";
	int n2;
	cin >> n2;
	n1=n1+n2;
	cout << "Enter Number 3: ";
	cin >> n2;
	n1=n1+n2;
	cout << "Enter Number 4: ";
	cin >> n2;
	n1=n1+n2;
	cout << "Enter Number 5: ";
	cin >> n2;
	n1=n1+n2;
	cout << "Sum of Numbers: "<< n1;
}

	
	
	

#include<iostream>
using namespace std;
	void IsEqual(int num1,int num2);
main(){
	int num1,num2;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	IsEqual(num1,num2);
	}
	
	void IsEqual(int num1,int num2)
	{
	if(num1==num2)
	{
	cout<<"true";
	}
	if(num1!=num2)
	{
	cout<<"false";
	}
}






#include<iostream>
using namespace std;
	void Reverse(string input);
main(){
	string input;
	cout<<"Enter 'true' or 'false': ";
	cin>>input;
	Reverse(input);
	}
	
	void Reverse(string input)
	{
	if(input=="true")
	{
	cout<<"false";
	}
	if(input=="false")
	{ 
	cout<<"true";
	}
}





#include<iostream>
using namespace std;
	void discount(string name,float price);
main(){
	string name;
	float price;	
	cout<<"Enter the country's name: ";
	cin>>name;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	discount(name,price);
	}
	
	void discount(string name,float price)
	{
	float final;
	if(name=="Pakistan")
	{
	final=price-(price*0.05);
	}
	if(name=="Ireland")
	{	
	final=price-(price*0.1);
	}
	if(name=="India")
	{	
	final=price-(price*0.2);
	}
	if(name=="England")
	{	
	final=price-(price*0.3);
	}
	if(name=="Canada")
	{	
	final=price-(price*0.45);
	}
	cout<<"Final ticket price after discount: $"<<final;
}






#include<iostream>
using namespace std;
	void discount(string name,float price);
main(){
	string name;
	float price;
	while(true)	
{
	cout<<"Enter the country's name: "<<endl;
	cin>>name;
	cout<<"Enter the ticket price in dollars: $"<<endl;
	cin>>price;
	discount(name,price);
	}
}
	
	void discount(string name,float price)
	{
	float final;
	if(name=="Pakistan")
	{
	final=price-(price*0.05);
	}
	if(name=="Ireland")
	{	
	final=price-(price*0.1);
	}
	if(name=="India")
	{	
	final=price-(price*0.2);
	}
	if(name=="England")
	{	
	final=price-(price*0.3);
	}
	if(name=="Canada")
	{	
	final=price-(price*0.45);
	}
	cout<<"Final ticket price after discount: $"<<final<<endl;
}






#include<iostream>
using namespace std;
	void checkSpeed(int speed);
main(){
	int speed;
	cout<<"Speed: ";
	cin>>speed;
	checkSpeed(speed);
}

	void checkSpeed(int speed)
	{
	if(speed<=120)
	{
	cout<<"Perfect! You're going good.";
	}
	if(speed>120)
	{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
}
	





#include<iostream>
using namespace std;
	void possibleBonus(int a,int b);
main(){
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout <<"Enter your friend's position: ";
	cin>>b;
	possibleBonus(a,b);
	}
	
	void possibleBonus(int a,int b)
	{
	if(a+6>=b)
	{
	cout<<"true";
	}
	if(a+6<b)
	{
	cout<<"false";
	}
	}






#include<iostream>
using namespace std;
	void longestTime(int a,int b);
main (){
	int a,b;
	cout<<"Enter the number of hours: ";
	cin>>a;
	cout<<"Enter the number of minutes: ";
	cin>>b;
	longestTime(a,b);
	}
	
	void longestTime(int a,int b)
	{
	int c=a*60;
	if(c>b)
	{
	cout<<a;
	}	
	if(c<b)
	{
	cout<<b;
	}
	}






#include<iostream>
using namespace std;
	void flowerShop(int redRose,int whiteRose,int tulip);
main(){	
	int a,b,c;
	cout<<"Red Rose: ";
	cin>>a;
	cout<<"White Rose: ";
	cin>>b;
	cout<<"Tulips: ";
	cin>>c;
	flowerShop(a,b,c);
	}
	
	void flowerShop(int redRose,int whiteRose,int tulip)
	{	
	float original,discounted;
	original=(2*redRose)+(4.10*whiteRose)+(2.50*tulip);
	if(original>200)
	{
	discounted=original-(original*0.2);
	}
	if(original<=200)
	{
	discounted=original;
	}
	cout<<"Original Price: $"<<original<<endl;
	if(original>200)
	{
	cout<<"Price after Discount: $"<<discounted<<endl;
	}
	if(original<=200)
	{	
	cout<<"No discount applied."<<endl;
	}
	}
	




#include<iostream>
using namespace std;
	void pet(int holidays);
main(){
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
	}
	
	void pet(int holidays)
	{
	int time,difference,hours,minutes;
	time=(holidays*127)+((365-holidays)*63);
	difference=30000-time;	
	hours=difference/60;
	minutes=difference%60;
	if(difference>=0)
	{
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";
	}	
	if(difference<0)
	{
	cout<<"Tom will run away"<<endl;
	cout<<hours*-1<<" hours and "<<minutes*-1<<" minutes for play";
	}
	}




#include<iostream>
using namespace std;
	void tpChecker(int people,int tp);
main(){
	int people,tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);
	}	
	
	void tpChecker(int people,int tp)
	{
	int days;
	days=(tp*500)/(people*57);
	if(days>=14)
	{	
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}
	if(days<14)
	{	
	cout<<"Your TP will only last "<<days<<" days, buy more!";
	}
	}







#include<iostream>
#include<windows.h>
using namespace std;
	void gotoxy(int x,int y);
main(){
	system("cls");
	cout<<"Test";
	gotoxy(15,15);
	cout<<"My name is Abdul Azeem.";
	}
	
	void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







#include<iostream>
#include<windows.h>
using namespace std;
	void gotoxy(int x,int y);
	void printmaze();
main(){
	system("cls");
	printmaze();
}
	
	
	void printmaze()
	{
	cout<<"########################################"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"########################################"<<endl;
	}






#include<iostream>
#include<windows.h>
using namespace std;
	void gotoxy(int x,int y);
	void printmaze();
	
main(){
	system("cls");
	printmaze();
	gotoxy(5,5);
	cout<<"p";
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
	
	
	void printmaze()
	{
	cout<<"########################################"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"#                                      #"<<endl;
	cout<<"########################################"<<endl;
	}







#include<iostream>
#include<windows.h>
using namespace std;
	void printMaze();
	void gotoxy(int x, int y);
	void playerMove(int x,int y);		


main(){
	int x=1;
	int y=1;
	system("cls");
	printMaze();
	while(true)
{
	
	playerMove(x,y);
	x=x+1;
	if(x==50)
{
	x=1;
	y=y+1;
}
}
}

	void playerMove(int x,int y)
{
	
	gotoxy(x,y);
	cout<<"p";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";
	
	
}
	


	void printMaze()
	{
	cout<<"#########################################################"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#########################################################"<<endl;
	}

	void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}






#include<iostream>
#include<windows.h>
using namespace std;

	void gotoxy(int x, int y);
main(){
	system("cls");
	gotoxy(75,22);
	cout<<"ABDUL-AZEEM";

}


	void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







#include<iostream>
#include<windows.h>
using namespace std;
	void H();
	void A();
	void S();
	void N();
	void gotoxy(int x,int y);
main(){
	gotoxy(7,7);
	H();
	gotoxy(7,8);
	A();
	gotoxy(7,9);
	S();
	gotoxy(7,10);
	S();
	gotoxy(7,11);
	A();
	gotoxy(7,12);
	N();
	}
	
	void H()
	{
	cout<<"H";
	}
	void A()
	{
	cout<<"A";
	}
	void S()
	{
	cout<<"S";
	}
	void N()
	{
	cout<<"N";
	}
	void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}






#include<iostream>
#include<windows.h>
using namespace std;
	void printMaze();
	void gotoxy(int x, int y);
	void playerMove(int x,int y);		


main(){
	int x=17;
	int y=2;
	system("cls");
	printMaze();
	while(true)
{
	if(y==17)
	{
	y=2;
}
	playerMove(x,y);
	y=y+1;
	
}
}
	void playerMove(int x,int y)
{
	
	gotoxy(x,y);
	cout<<"p";
	Sleep(300);
	gotoxy(x,y);
	cout<<" ";
	
	
}
	


	void printMaze()
	{
	cout<<"#########################################################"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#                                                       #"<<endl;
	cout<<"#########################################################"<<endl;
	}

	void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}





#include<iostream>
using namespace std;
	float hours;
	void projectTimeCalculation(float days,float workers);
main(){
	float days,workers;
	cout<<"Enter the needed hours: ";
	cin>>hours;
	cout<<"Enter the days that the firm has: ";
	cin>>days;
	cout<<"Enter the number of all workers: ";
	cin>>workers;
	projectTimeCalculation(days,workers);
	}
	
	void projectTimeCalculation(float days,float workers)
	{
	float time,left;
	time=(days-(days*0.1))*workers*10;
	left=time-hours;
	if(time<hours)
	{
	cout<<"Not enough time! "<<(-1*left)<<" hours needed.";
	}	
	if(time>=hours)
	{
	cout<<"Yes!"<<left<<" hours left.";
	}
	}






#include<iostream>
#include<cmath>
using namespace std;
	float taxCalculator(char type,float price);
main(){
	char type;
	float price;
	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;
	cout<<"Enter the price of the vehicle: $";
	cin>>price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<taxCalculator(type,price);

	}
	
	float taxCalculator(char type,float price)
	{
	float totprice;
	if(type=='M')
	{
	totprice=(price)+(price*(.06));
	}
	
	if(type=='E')
	{
	totprice=(price)+(price*(.08));
	}
	
	if(type=='S')
	{
	totprice=(price)+(price*(.1));
	}
	
	if(type=='V')
	{
	totprice=(price)+(price*(.12));
	}
	
	if(type=='T')
	{
	totprice=(price)+(price*(.15));
	}
	return totprice;
	}
	





#include<iostream>
#include<cmath>
using namespace std;
	string op;
	void pyramidVolume(float a,float b,float c);
main(){
	float a,b,c;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>a;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>b;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>c;
	cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
	cin>>op;
	pyramidVolume(a,b,c);
	}
	
	void pyramidVolume(float a,float b,float c)
	{
	float V;
	V=(a*b*c)/3;
	if(op=="millimeters")
	{
	V=V*(pow(10,9));
	}
	if(op=="centimeters")
	{
	V=V*(pow(10,6));
	}
	if(op=="meters")
	{
	V=V;
	}
	if(op=="kilometers")
	{
	V=V*(pow(10,-9));
	}
	cout<<"The volume of the pyramis is: "<<V<<" cubic "<<op;
	}














































	