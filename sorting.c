#include <stdio.h>
#include <string.h>

void printScores(int scores[], int length, int before){
    if (before){
        printf("scores = ");
    }else{
        printf("result = ");
    }
    
    for (int i=0; i < length; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
}

void sortScores(int scores[], int length){
    int comparStartNum = 1;
    int changeNum;
    for (int i=0; i < length; i++){
        for (int j=comparStartNum; j < length; j++){
            if(scores[i] < scores[j]){
                changeNum = scores[j];
                scores[j] = scores[i];
                scores[i] = changeNum;
            }
        }
        comparStartNum += 1;
    }
}

int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90, 100};
    //処理コード
    int length = sizeof(scores)/sizeof(int);
    printScores(scores, length, 1);
    sortScores(scores,length);
    printScores(scores, length, 0);
    return 0;
}
