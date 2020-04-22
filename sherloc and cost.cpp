Here are two columns '0' and '1'. '0' column indicates take present ar[i] = 1 while '1' column indicates take present ar[i] = b[i] i.e. the max possible value .

for dp[i][0] (present value = 1) :

either dp[i-1][0] + abs(1 - 1) as previous value=1 and present value=1 or dp[i-1][1] + abs(1 - ar[i-1]) as previous value=max and present value=1

for dp[i][1] ( present value = max i.e. arr[i] ) :

either dp[i-1][0] + abs(1 - ar[i]) as previous value=1 and present value=max or dp[i-1][1] + abs(ar[i]- ar[i-1]) as previous value=max and present value=max

therefore, dp[i][0]=max(dp[i-1][0],dp[i-1][1]+abs(ar[i-1]-1));

dp[i][1]=max(dp[i-1][0]+abs(ar[i]-1),dp[i-1][1]+abs(ar[i-1]-ar[i]));
