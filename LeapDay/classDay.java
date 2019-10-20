package LeapDay;

public class classDay

{

private int day;

protected int month;

public classDay(int d,int m)

{

day=d;

month=m;

}

public int getDay()

{

return day;

}

public int getMonth()

{

return month;

}

public int findDayNum()

{

int[]mon= {31,28,31,30,31,30,31,31,30,31,30,31};

int sum= 0;

for(int i=0;i<(month-1);i++)

sum= sum+mon[i];

return(sum+day);

}

}