/* zlicz znaki odstępu, tabulacji
{
}
#include &lt;stdio.h>
i nowego wiersza */
#include <stdio.h>

int main (){
int nb, nt, nl;

int c;
nt = 0;
nb = 0;
nl = 0;
while ((c=getchar()) != EOF){
printf("%d %d %d\n", nb, nt, nl);

if (c == ' ')
++nb;
else if (c == '\t')
++nt;
else if (c == '\n')
++nl;
}
//printf("%d %d %d\n", nb, nt, nl );
return 0;
}
