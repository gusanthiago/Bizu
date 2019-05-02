#include <bits/stdc++.h>

using namespace std;

#define huge unsigned long long

huge mulmod(huge a, huge b, huge c)
{
	huge x = 0, y = a%c;
	while(b>0)
	{
		if(b&1) x = (x+y)%c;
		y = (y<<1)%c;
		b = b>>1;
	}
	return x;
}

huge modulo(huge a, huge b, huge c)
{
	huge x = 1, y = a%c;
	while(b>0)
	{
		if(b&1) x = mulmod(x,y,c);
		y = mulmod(y,y,c);
		b = b>>1;
	}
	return x;
}

bool is_prime(huge p)
{
	if(p<2) return false;
	if(p==2) return true;
	if(!(p&1)) return false;
	huge s = p-1, a, temp, mod;
	while(!(s&1)) s = s>>1;
	for(int i=0; i<1; i++)
	{
		a = rand()%(p-1)+1;
		temp = s;
		mod = modulo(a, temp, p);
		while(temp!=p-1 && mod!=1 && mod!=p-1)
		{
			mod = mulmod(mod, mod, p);
			temp = temp<<1;
		}
		if(mod!=p-1 && !(temp&1)) return false;
	}
	return true;
}

int main  () {
    
    huge n;
    
    // le a bagaceira;
    scanf("%llu", &n);
    
    cout << (is_prime(n) ? "É primo" : "é tio") << endl;
    
    
    
    
    return 0;
}