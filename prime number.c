int x=1,y=10,j,i,c;
printf("\n the first interval is %d",x);
printf("\n the second interval is %d",y);
for(i=x;1<y;++i)
{
 c=0;
for(j=2;j<i/2;++j)
{
if((i%j)==0)
c=1;
}
if(c==0)
{
printf("\n the prime number between two intervals are");
}
}
