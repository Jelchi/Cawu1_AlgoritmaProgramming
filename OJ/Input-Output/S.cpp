#include <stdio.h>

int main ()
{
	char S[101]; 
	scanf("%[^\n]s", S); 
	
	printf("#include <stdio.h>\n"); 
	printf("int main()\n"); 
	printf("{\n"); 
	printf("    printf(\"%%s\\n\",\"%s\");\n", S);
	printf("    return 0;\n"); 
	printf("}\n");
	
	return 0;
}
