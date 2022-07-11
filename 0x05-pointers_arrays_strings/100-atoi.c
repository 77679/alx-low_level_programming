#include "main.h"
/**
* _atoi - Convert a string to an integer.
*
s: The pointer to convert
*
* eturn: A integer
*/int _toi(char *s){
nt c = 0;
ned int ni = 0;
it min = 1;
int isi = 0;
wile (s[c])
{		(s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= )		{
isi = 1;
ni = (ni * 10) + (s[c] - '0');
++;
}
if (isi == 1)
{
break;
}
c++;
}
ni *= min;
return (ni);
}

