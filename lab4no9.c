#include <stdio.h>
int main()
{
	int score,i;
	while(1){
		scanf("%d",&score);
		if(score<=100){
			if(score>=0){
				if(score >= 68){
					if (score >= 85){
						printf("%d(A)\n",score);
						
					}
					else if(score >= 75){
						printf("%d(B)\n",score);
					}
					else if(score >= 68){
						printf("%d(C)\n",score);
					}
				}else{
					if (score >= 55){
						printf("%d(D)\n",score);
					}
					else {
						printf("%d(F)\n",score);
					}
				}
			}else{
				break;
			}
		}else{
			printf("error score\n");
		}	
	}
}

