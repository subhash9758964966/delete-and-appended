#include <bits/stdc++.h>

using namespace std;






int main()
{
  char *a = (char *)malloc(512000 * sizeof(char));

  char *b = (char *)malloc(512000 * sizeof(char));
  
  int l;
  
  cin >> a >> b;
  cin >> l;
  int la, lb;
  la = strlen(a);
  lb = strlen(b);
  int i = 0;
  while (a[i] == b[i]) {
    i++;
    
   }
   int min = la - i + lb - i;
   
   if((((la-lb)%2==1)|| ((lb-la)%2==1)) && l%2==0)
    {
        cout<<"No";
    }
   else if(l>=min)
   {
       cout<<"Yes";
   }
   else cout<<"No";
    return 0;
}

