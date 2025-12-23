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
						printf("%d(A)\n",score);
						a++;
						
					}
					else if(score >= 75){
						printf("%d(B)\n",score);
						b++;
					}
					else if(score >= 68){
						printf("%d(C)\n",score);
						c++;
					}
				}else{
					if (score >= 55){
						printf("%d(D)\n",score);
						d++;
					}
					else {
						printf("%d(F)\n",score);
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

