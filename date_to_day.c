/*
     aim  : to extrac day from given input
     author : parvatham ram charan 
     github id : ramcharan7251 
*/
#include<stdio.h>
int main()
{
    int date,month,year,result,monthOddDays;
    char deliminator;
    printf("enter the date in format(dd/mm/yyyy):");
    scanf("%d%c%d%c%d",&date,&deliminator,&month,&deliminator,&year);
    if(date <=0 || date >= 32 || month <=0 || month >=13 )
	{
		printf("\nInvalid date or month");
	}
	else
	{
    // 1. year code odd days calculation
    /*
        for every 100 years=> 76*1 +24*2 ==>124=> 5 odd days
        for every 200 years=> 100+100 => 10 odd =>3 odd days
        for every 300 years=>100+100+100=>15 odd=>1 odd days
        for every 400 years=>300(yrs)+75*1+25*2=>1+125=>1+6=>0 odd days 
    */
 
	
    int yearCode,yearOddDays,leap,nonLeap,leapNo;
    year--;
    yearCode=year%400;
    if(yearCode==0)
    {
        yearOddDays=0;
    }
    else if(yearCode > 0 && yearCode <= 100)
    {
        leap=yearCode/4;
        nonLeap=yearCode-leap;
        yearOddDays=(leap*2+nonLeap)%7;

    }
    else if(yearCode > 100 && yearCode <= 200)
    {
        leapNo=yearCode%100;
        leap=leapNo/4;
        nonLeap=leapNo-leap;
        yearOddDays=(5+leap*2+nonLeap)%7;


    }
    else if(yearCode > 200 && yearCode <= 300)
    {
        leapNo=yearCode%200;
        leap=leapNo/4;
        nonLeap=leapNo-leap;
        yearOddDays=(3+leap*2+nonLeap)%7;

    }
    else if(year > 300)
    {
        leapNo=yearCode%300;
        leap=leapNo/4;
        nonLeap=leapNo-leap;
        yearOddDays=(1+leap*2+nonLeap)%7;

    }
     // year odddayscalculation ends

    //2. date code odd days
    int dateOddDays=date%7;
    // date code odd days ends

    // 3. month code odd days calculation
    month--;
    if((year%4==0) && (year%400==0 ||year%100!=0))
    {
        switch(month)
        {
          case 1 : monthOddDays=3; break; // january
          case 2 : monthOddDays=4; break; //febrary
          case 3 : monthOddDays=0; break; // march
          case 4 : monthOddDays=2; break; // april
          case 5 : monthOddDays=5; break; // may
          case 6 : monthOddDays=0; break; // june
          case 7 : monthOddDays=3; break; //july
          case 8 : monthOddDays=6; break; // augest
          case 9 : monthOddDays=1; break;  //september
          case 10 : monthOddDays=4; break; //october
          case 11 : monthOddDays=6; break;  //november
          case 12 : monthOddDays=2; break;  //december
        }
    }
    else  
    {
        switch(month)
        {
        case 1 : monthOddDays=3; break; // january
        case 2 : monthOddDays=3; break; //febrary
        case 3 : monthOddDays=6; break; // march
        case 4 : monthOddDays=1; break; // april
        case 5 : monthOddDays=4; break; // may
        case 6 : monthOddDays=6; break; // june
        case 7 : monthOddDays=2; break; //july
        case 8 : monthOddDays=5; break; // augest
        case 9 : monthOddDays=0; break;  //september
        case 10 : monthOddDays=3; break; //october
        case 11 : monthOddDays=5; break;  //november
        case 12 : monthOddDays=1; break;  //december  
        } 
    }    
    result=dateOddDays+monthOddDays+yearOddDays;
    year++;
    month++;
    if(result>6)
    {
        result=result%7;
    }
    //extracting the date
    switch(result)
    {
        case 0 : printf("\n%.2d/%.2d/%.4d is sunday",date,month,year); break;
        case 1 : printf("\n%.2d/%.2d/%.4d is monday",date,month,year); break;
        case 2 : printf("\n%.2d/%.2d/%.4d is teusday",date,month,year); break;
        case 3 : printf("\n%.2d/%.2d/%.4d is wednesday",date,month,year); break;
        case 4 : printf("\n%.2d/%.2d/%.4d is thrusday",date,month,year); break;
        case 5 : printf("\n%.2d/%.2d/%.4d is friday",date,month,year); break;
        case 6 : printf("\n%.2d/%.2d/%.4d is saturday",date,month,year); break;
    }
   }
    return 0;
}
