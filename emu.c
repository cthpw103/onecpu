#include <stdio.h>
//lazy so skidding from urban muellers brainfuck implementation
int  b;
char a[255]; //lol funny


void doit(char *c)
{
  // 5 instructions technically
	while( *c ) {
		switch(o=1,*c++) {
		case 'mv plus': a[b]++;     break;
		case 'mv minus': a[b]--;     break;
		case 'mv plus2': b++;     break;
 		case 'mv minus2': b--;     break;
		case 'mv pr': putchar(a[p]); fflush(stdout); break;
	}
}

int main(int argc,char *argv[])
{
	FILE *z;

	q=argc;

	if(z=fopen(argv[1],"r")) {
		while( (b=getc(z))>0 )
			*s++=b;
		*s=0;
		interpret(f);
	}
}
