#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,n,flag,j;
   char s[100001];
   gets(s);
     for (i=0, n=strlen(s);i<n;i++)
   {
        if (s[i]=='A'&&s[i+1]=='B')
        {
            flag=i+1;
            for (j=strlen(s)-1;j>0;j=j-1)
            {
                if (s[j]=='A'&&s[j-1]=='B')
                {
                    if (j-1>flag)
                    {
                        printf("YES\n");
                        exit(0);
                    }

                else
                    break;
                }
            }

           break;
        }

   }
      for (i=0, n=strlen(s);i<n;i++)
   {
        if (s[i]=='B'&&s[i+1]=='A')
        {
            flag=i+1;
            for (j=strlen(s)-1;j>0;j=j-1)
            {
                if (s[j]=='B'&&s[j-1]=='A')
                {
                    if (j-1>flag)
                    {
                        printf("YES\n");
                        exit(0);
                    }
                    else
                    {

                        break;
                    }

                }
            }

            break;
        }

   }
    printf("NO\n");

}
