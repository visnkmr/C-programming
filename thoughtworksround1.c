#include<stdio.h>
#include<string.h>
char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper(*p);
      p++;
  }

  return str;
}


int main(){
	int i,f;
	char a[30];
	scanf("%s",a);
	strupr(a);
	scanf("%d",&f);
	while(a[i]!='\0'){
	if(f==2){
		if(a[i]>64&&a[i]<68){
			a[i]=a[i]+4;
		}
	}
	if(f==4){
		if(a[i]<73&&a[i]>68){
			a[i]=a[i]-4;
		}
	}
	i++;
	}
	puts(a);
	return 0;
}
