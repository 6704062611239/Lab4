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
						printf("A\n");
					}
					else if(score >= 75){
						printf("B\n%d to A\n",85-score);
					}
					else if(score >= 68){
						printf("C\n%d to B\n",75-score);
					}
				}else{
					if (score >= 55){
						printf("D\n%d to C\n",68-score);
					}
					else {
						printf("F\n%d to D\n",55-score);
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

