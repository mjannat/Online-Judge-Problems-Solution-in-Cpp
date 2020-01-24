#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,pen,book;
  scanf("%d %d %d",&n ,&pen,&book);
  if(pen >= n && book >= n)
  {
      printf("Yes\n");
  }
  else
  {
      printf("No\n");
  }
}
