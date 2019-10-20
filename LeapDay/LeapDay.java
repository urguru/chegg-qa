package LeapDay;
import LeapDay.*;

public class LeapDay extends classDay

{

private int year;

public LeapDay(int d,int m, int y)

{

super(d,m);

year=7;

}

public int getYear()

{

return year;

}

public int findDayNum()

{

int[]mon= {31,28,31,30,31,30,31,31,30,31,30,31};

int sum=0;

for(int i=0;i<(month-1);i++)

sum=sum+mon[i];

if ((year%400==0||year%4==0)&&(year%100!=0))

{

if(month>2)

return(sum+getDay()+1);

}

return(sum+getDay());

}

}

