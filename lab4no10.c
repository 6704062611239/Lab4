#include <stdio.h>
int main()
{
	int score,i;
	int a=0,b=0,c=0,d=0,f=0;
	while(1){
		scanf("%d",&score);
		if(score<=100){
			if(score>=0){
				if(score >= 68){
					if (score >= 85){
						printf("A\n");
						a++;
						
					}
					else if(score >= 75){
						printf("B\n%d to A\n",85-score);
						b++;
					}
					else if(score >= 68){
						printf("C\n%d to B\n",75-score);
						c++;
					}
				}else{
					if (score >= 55){
						printf("D\n%d to C\n",68-score);
						d++;
					}
					else {
						printf("F\n%d to D\n",55-score);
						f++;
					}
				}
			}else{
				printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",a,b,c,d,f);
				break;
			}
		}else{
			printf("error score\n");
		}	
	}
}

