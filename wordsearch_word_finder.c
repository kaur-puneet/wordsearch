
// Name: Puneet Kaur
// Date: March 7, 2022 ; Time: 6:00 PM
// Description: Find the location of a given word in a wordsearch.


#include <stdio.h>
#include <stdbool.h>

void search2D(char word[], int wordSize, const int Size, char grid[Size][Size]);
bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size], 
int row, int col, int rowDir, int colDir);
void printFoundLocation(int rowDir, int colDir);
int* directions (int directionNum);

int main(void){
    const int Size = 23;
    char word[3]= {'W', 'A', 'X'};
    int wordSize = 3;
    int count =0;
    for (count=0; count<Size; count++){
        
    }
    char grid[23][23]= {{'S', 'Q', 'I', 'F', 'J', 'Q', 'K', 'Y', 'T', 'S', 'D', 'W', 'Q', 'S', 'L', 'G', 'U', 'C', 'X', 'A', 'U', 'B', 'D'},
 {'W', 'A', 'X', 'C', 'A', 'O', 'M', 'I', 'G', 'U', 'E', 'L', 'O', 'K', 'H', 'G', 'R', 'K', 'J', 'Q', 'A', 'G', 'P'},
 {'Z', 'D', 'L', 'A', 'I', 'K', 'O', 'L', 'U', 'Q', 'S', 'F', 'D', 'V', 'N', 'S', 'A', 'L', 'O', 'H', 'C', 'I', 'N'},
 {'X', 'N', 'J', 'M', 'N', 'E', 'T', 'R', 'A', 'I', 'L', 'U', 'Q', 'E', 'T', 'U', 'K', 'H', 'B', 'G', 'F', 'E', 'I'},
 {'S', 'A', 'H', 'I', 'L', 'G', 'U', 'L', 'Q', 'J', 'H', 'F', 'C', 'Y', 'T', 'S', 'M', 'A', 'S', 'H', 'A', 'H', 'W'},
 {'B', 'C', 'A', 'O', 'B', 'I', 'D', 'E', 'E', 'O', 'P', 'Y', 'M', 'N', 'Q', 'S', 'T', 'U', 'V', 'Z', 'C', 'O', 'R'},
 {'I', 'G', 'Y', 'Z', 'H', 'M', 'S', 'W', 'U', 'K', 'N', 'G', 'B', 'Y', 'I', 'P', 'U', 'A', 'S', 'R', 'H', 'U', 'I'},
 {'L', 'R', 'F', 'K', 'Q', 'Y', 'U', 'A', 'F', 'J', 'K', 'X', 'Y', 'Q', 'V', 'N', 'R', 'T', 'Y', 'O', 'F', 'R', 'Z'},
 {'R', 'I', 'B', 'V', 'J', 'K', 'M', 'P', 'Y', 'Z', 'S', 'I', 'F', 'U', 'X', 'C', 'A', 'B', 'Q', 'W', 'P', 'A', 'H'},
 {'C', 'H', 'G', 'N', 'Z', 'X', 'U', 'Z', 'J', 'O', 'N', 'A', 'T', 'H', 'A', 'N', 'Z', 'W', 'R', 'A', 'M', 'J', 'B'},
 {'T', 'P', 'K', 'L', 'L', 'K', 'G', 'R', 'Z', 'K', 'R', 'K', 'L', 'N', 'H', 'E', 'Z', 'S', 'S', 'N', 'B', 'E', 'S'},
 {'K', 'X', 'L', 'G', 'U', 'U', 'V', 'G', 'A', 'J', 'J', 'S', 'Q', 'K', 'H', 'J', 'Z', 'T', 'I', 'V', 'T', 'H', 'H'},
 {'Q', 'R', 'B', 'R', 'I', 'A', 'N', 'F', 'Q', 'Z', 'R', 'D', 'U', 'O', 'J', 'Y', 'Y', 'B', 'A', 'W', 'D', 'N', 'L'},
 {'A', 'A', 'N', 'C', 'A', 'W', 'U', 'S', 'W', 'O', 'C', 'U', 'Z', 'M', 'Y', 'K', 'U', 'X', 'T', 'N', 'A', 'L', 'O'},
 {'G', 'R', 'G', 'K', 'T', 'I', 'M', 'R', 'P', 'B', 'K', 'F', 'D', 'T', 'A', 'C', 'S', 'F', 'L', 'L', 'K', 'U', 'K'},
 {'B', 'R', 'U', 'L', 'W', 'W', 'N', 'X', 'A', 'F', 'F', 'Q', 'G', 'H', 'K', 'M', 'H', 'X', 'C', 'U', 'P', 'J', 'J'},
 {'Z', 'B', 'T', 'N', 'K', 'D', 'H', 'K', 'T', 'O', 'H', 'Y', 'O', 'A', 'V', 'A', 'A', 'D', 'S', 'P', 'Z', 'R', 'W'},
 {'J', 'K', 'Z', 'B', 'U', 'T', 'O', 'E', 'Z', 'D', 'S', 'M', 'T', 'Y', 'H', 'I', 'N', 'Z', 'L', 'D', 'W', 'M', 'A'},
 {'P', 'E', 'S', 'J', 'E', 'V', 'E', 'L', 'Y', 'N', 'A', 'X', 'X', 'C', 'M', 'R', 'K', 'H', 'D', 'E', 'G', 'V', 'I'},
 {'D', 'C', 'L', 'I', 'O', 'Z', 'W', 'L', 'I', 'K', 'O', 'O', 'A', 'U', 'I', 'A', 'U', 'R', 'X', 'I', 'T', 'F', 'O'},
 {'C', 'U', 'N', 'B', 'I', 'O', 'J', 'Y', 'B', 'E', 'T', 'H', 'E', 'L', 'Z', 'M', 'Y', 'U', 'S', 'H', 'L', 'J', 'T'},
 {'B', 'N', 'H', 'C', 'C', 'G', 'T', 'B', 'B', 'T', 'N', 'T', 'I', 'N', 'T', 'H', 'C', 'X', 'K', 'D', 'D', 'N', 'Y'},
 {'A', 'M', 'R', 'O', 'S', 'E', 'D', 'V', 'Z', 'Z', 'O', 'K', 'J', 'V', 'K', 'G', 'D', 'A', 'F', 'C', 'V', 'R', 'D'},
};
    search2D(word, wordSize, Size, grid);
}

void search2D(char word[], int wordSize, const int Size, char grid[Size][Size]){
   printf("The word search puzzle is\n");
   int row, col, index;
   for (row=0;row<Size;row++){
       for(col=0;col<Size;col++){
           printf("%c", grid[row][col]);
       }
       printf("\n");
   }
   printf("The word is ");
   for (index=0; index<wordSize; index++){
       printf("%c", word[index]);
   }
   int rowCount, colCount, dirCount = 0;
   bool found = false;
   int *dirArray;
   for (rowCount=0; rowCount<Size; rowCount++){
       for(colCount=0; colCount<Size; colCount++){
           if (grid[rowCount][colCount]==word[0]){
               dirCount=1;
               while(found!=true && dirCount<=8){
                   dirArray = directions(dirCount);
                   found = search1D(word, wordSize, Size, grid, rowCount, colCount, *(dirArray+0), *(dirArray+1));
                   dirCount++;
               }
           }
           if (found==true){
               break;
           }
       }
       if (found==true){
               break;
           }
   }
   if (found==true){
       printf("\nWord found at row %d and column %d ", rowCount, colCount);
       printFoundLocation(*(dirArray+0), *(dirArray+1));
   }
   else{
       printf("\nWord not found.");
   }
}

bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size], 
int row, int col, int rowDir, int colDir){
   int count = 1;
   bool found = true;
   if ((row+(rowDir*(wordSize-1)))<0 || (col+(colDir*(wordSize-1)))<0){
       found = false;
   }
   else if ((row+(rowDir*(wordSize-1)))>Size || (col+(colDir*(wordSize-1)))>Size){
       found = false;
   }
   else{
       while (count!=wordSize){
           if (word[count]==grid[row+(rowDir*count)][col+(colDir*count)]){
               found = found && true;
            }
           else{
               found = found && false;
            }
            count++;
        }
    } 
   return found;
}

void printFoundLocation(int rowDir, int colDir){
   if (rowDir==1 && colDir==0){
       printf("in the south direction.");
   }
   else if (rowDir==1 && colDir==-1){
       printf("in the south-west direction.");
   }
   else if (rowDir==0 && colDir==-1){
       printf("in the west direction.");
   }
   else if (rowDir==-1 && colDir==-1){
       printf("in the north-west direction.");
   }
   else if (rowDir==-1 && colDir==0){
       printf("in the north direction.");
   }
   else if (rowDir==-1 && colDir==1){
       printf("in the north-east direction.");
   }
   else if (rowDir==0 && colDir==1){
       printf("in the east direction.");
   }
   else{
       printf("in the south-east direction.");
   }
}

int* directions (int directionNum){
    static int dirArray[2];
    if (directionNum == 1){
        dirArray[0]=1;
        dirArray[1]=0;
    }
    else if (directionNum == 2){
        dirArray[0]=1;
        dirArray[1]=-1;
    }
    else if (directionNum == 3){
        dirArray[0]=0;
        dirArray[1]=-1;
    }
    else if (directionNum == 4){
        dirArray[0]=-1;
        dirArray[1]=-1;
    }
    else if (directionNum == 5){
        dirArray[0]=-1;
        dirArray[1]=0;
    }
    else if (directionNum == 6){
        dirArray[0]=-1;
        dirArray[1]=1;
    }
    else if (directionNum == 7){
        dirArray[0]=0;
        dirArray[1]=1;
    }
    else{
        dirArray[0]=1;
        dirArray[1]=1;
    }
    return dirArray;
}
