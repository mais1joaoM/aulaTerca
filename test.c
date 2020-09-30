#include <unistd.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 7
#define MAX 7
#define MAX_SIZE 7
#define tam



int main (){
    
    int grade;
    int valueTest;
    int vetor[TAM], x = 0, y = 0, aux = 0;
    int arr_sort[MAX], i;
    int j, a, t;
    int br_sort[MAX_SIZE], p;
    int temp;
    int meio, pivo, fim, inicio;
    
    
    

    printf("######################## \n");
    printf("###### ATIVIDADE ####### \n");
    printf("######################## \n");
    printf("## 1 - Bubble Sort ##### \n");
    printf("## 2 - Selection Sort ## \n");
    printf("## 3 - Insertion Sort ## \n");
    printf("## 4 - Quick Sort ## \n");
    printf("## Escolha uma opcao: ## \n");
    printf("######################## \n");
    scanf("%d", &grade);

    switch(grade){

        case 1:
            
            for (x = 0; x < TAM; x++ ){
                printf("\nEntre com um inteiro para o vetor: ");
                scanf("%d", &aux);
                vetor[x] = aux;
            }
            for (x = 0; x < TAM; x++){
                for( y = x + 1; y < TAM; y++ ){
                    if( vetor[x] > vetor[y]){
                    aux = vetor[x];
                    vetor[x] = vetor[y];
                    vetor[y] = aux;
                    }
                }
                
            }

            printf("\n\n Elementos ordenados em ordem crescente: ");
            for( x = 0; x < TAM; x++ ){
                printf("\n\n vetor[%d] = %d \n\n", x ,vetor[x]);
            }
            for( x = 0; x < TAM; x++ ){
                for( y = x + 1; y < TAM; y++ ){
                    if ( vetor[y] > vetor[x] ){
                        aux = vetor[y];
                        vetor[y] = vetor[x];
                        vetor[x] = aux;
                    }
                }
            }

            printf("\n\n Elementos ordenados (Decrescente): \n\n");
            for( x = 0; x < TAM; x++ ){
                printf("\n vetor[%d] = %d \n\n" , x ,vetor[x]);
            } 

            double time_spent = 0.0;

	        clock_t begin = clock();

	        sleep(3);

	        clock_t end = clock();

	        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	        printf("\n\nTime elpased is %f seconds", time_spent);


            printf("\n\nPress 0 to exit");
            scanf("%d", &valueTest);

            if (valueTest == 0){
                return main();
            }



            break;













        
        case 2:

            printf("Simple Selection Sort Example - Array\n");
            printf("\nEnter %d Elements for Sorting\n", MAX_SIZE);
            for (i = 0; i < MAX_SIZE; i++)
                scanf("%d", &br_sort[i]);
            
            printf("\nYour Data   :");
            for (i = 0; i < MAX_SIZE; i++){
                printf("\t%d", br_sort[i]);
            }
            for (i = 0; i < MAX_SIZE; i++) {
                p = i;
                for (j = i; j < MAX_SIZE; j++){
                    if (br_sort[p] > br_sort[j]){
                         p = j;
                    }
                }

                if (p != 1){
                    t = br_sort[i];
                    br_sort[i] = br_sort[p];
                    br_sort[p] = t;
                }
                printf("\nIteration %d : ", i);
                for (a = 0; a < MAX_SIZE; a++){
                    printf("\t%d", br_sort[a]);
                }
            }
            printf("\n\nSorted Data :");
            for (i = 0; i < MAX_SIZE; i++){
                printf("\t%d", br_sort[i]);
            }

            double time_spent4 = 0.0;

	        clock_t begin4 = clock();

	        sleep(3);

	        clock_t end4 = clock();

	        time_spent4 += (double)(end4 - begin4) / CLOCKS_PER_SEC;

	        printf("\n\nTime elpased is %f seconds", time_spent4);

            printf("\n\nPress 0 to exit");
            scanf("%d", &valueTest);

            if (valueTest == 0){
                return main();
            }

            break;

















        case 3:
            printf("\nEnter %d Elements for Sorting\n", MAX);
            for (i = 0; i < MAX; i++){
                scanf("%d", &arr_sort[i]);
            }
            printf("\nYour Data   :");
            for (i = 0; i < MAX; i++) {
                printf("\t%d", arr_sort[i]);
            }
            printf("%d", &arr_sort );

            for (i = 1; i < MAX; i++){
                t = arr_sort[i];
                j = i - 1;
                while (j >= 0 && arr_sort[j] > t){
                    arr_sort[j + 1] = arr_sort[j];
                    j = j - 1;
                }
                arr_sort[j + 1] = t;
                printf("\nIteration %d : ", i);
                for (a = 0; a < MAX; a++){
                    printf("\t%d", arr_sort[a]);
                }

            }
            printf("\n\nSorted Data :");
            for (i = 0; i < MAX; i++){
                printf("\t%d", arr_sort[i]);
            }


            double time_spent1 = 0.0;

	        clock_t begin1 = clock();

	        sleep(3);

	        clock_t end1 = clock();

	        time_spent1 += (double)(end1 - begin1) / CLOCKS_PER_SEC;

	        printf("\n\nTime elpased is %f seconds", time_spent1);
            

            printf("\n\nPress 0 to exit");
            scanf("%d", &valueTest);

            if (valueTest == 0){
                return main();
            }
        

            break;







        case 4:

            for(int it=0; it<TAM; it++){
                vetor[it] = rand() % 200;
            }
   
            meio = (int)((i + j) / 2);
            pivo = vetor[meio];
    
            do{
                while(vetor[i] > pivo) i++;
                while(vetor[j] < pivo) j--;
        
                if(i <= j) {
                    temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                    i++;
                    j--;
                }
            }while(j > i);
    
            if(inicio < j) (vetor,inicio,j);
            if(i < fim) (vetor,i,fim);
 
            printf("Vetor Inicial: Desordenado\n");
            for(int i = 0; i < TAM; i++) {
                printf("%d ", vetor[i]);
            }
            printf("\n");
    
            printf("Vetor Final: Ordenado\n");
            for(int i = 0; i < TAM; i++) {
                printf("%d ", vetor[i]);
            }

            break;

            
        }

    printf("your grade is: " + grade);

        

    return grade;
    
}