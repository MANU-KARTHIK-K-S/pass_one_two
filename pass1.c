#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char label[10],opc[10],opnd[10],code[10],mnem[10];
	int loc,start,len,f;
	FILE *fp1,*fp2,*fp3,*fp4;
	fp1 = fopen("input.txt","r");
	fp2 = fopen("optab.txt","r");
	fp3 = fopen("symbol.txt","w");
	fp4 = fopen("out.txt","w");

fscan(fp1, "%s\t%s\t%s",label,opc,opnd)'
if (strcmp(opc, "START")==0)
	start =  atoi(opnd);
	loc =start;
	fprint(fp4, "\t%s\t%s\t%s\n",label,opc,opnd);
	fscan(fp1, "%s\t%s\t%s", label,opc,opnd);
	}
	else{
		loc=0;
		}
	while(strcmp(opc, "END")!=0)
		{
			fprintf(fp3,"%s\t%d\n",label,loc);

		}
		
		fscanf(fp2, "%s\t%s",code,mnem);

		while(strcmp(code,"END")!=0){
			
		if(strcmp(opc, code)==0)
		{
			loc+=3;
			break;
                }
 
        fscan(fp2,"%s\t%s",code,mnem);
         }

        if(strcmp(opc ,"WORD")==0)
	{
	    loc+=3;
	}
	else if(strcmp(opc, "RESW")==0)
	{
	  loc+=(3*(atoi(opnd)));
	}
	else if(strcmp(opc, "RESB")==0)
	{
	   ++loc;
	}

	fprintf(fp4, "%s\t%s\t%s\t\n" ,label ,opc ,opnd);
	
	len = loc -start;
	printf("The length of the code : %d\n" ,len);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
}


		
		

	
