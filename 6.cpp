#include <stdio.h>
main()
{
int n,r,t;
printf( "nhap so hoc sinh:\n" );
scanf( "%d", &n); 
t=n/7;
r=n%7;
printf( " 1,hs lop it nhat: %d\n ", t );
printf( " 2,hs lop dong nhat: %d\n ", t+r );
printf( " 3,hs trung binh : %.2f\n ",n/7.0  );
printf( " 4,so lop lon hon tb: %d\n ", r );
printf( " 5,so lop bang tb: %d\n ", 7-r  );
printf( " 6,hs cac lop dong: %d\n ", r*(t+1)  );
printf( " 7,so cac lop bang tb: %d\n ", (r == 0) ? 7:0  );
return 0;
}
