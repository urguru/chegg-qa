#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int num_row;
int num_column;
int i;
int j;
int rand(void);
int count;
int randCount;


char word[45];
char identifier;


void setWord(char identifier, char grid[], char [num_row]) {


for (int k = 0; k < strlen(word); k++)
{
grid[j][i] = word[k];

if (identifier == 'H'){
j++;
}
else i++;
}

}


void printGrid (char grid[][num_row]) {
for (int l = 0; l < num_row; l++)
{
for (int p = 0; p < num_column; p++)
{
printf ("%c ", grid[p][l]);
}
printf ("\n");
}

}

int check_horizontal (char * word, int row, int col, int num_rows,
int num_cols, char grid[num_cols][num_rows]) {

int length = strlen(word);
char check = 'F';
char check2 = 'T';

int k;

printf("strlen = %d count = %d \n", length, count);

if (num_cols - col >= length && row < num_rows) {

for (k = 0; k < length; k++) {
printf("k=%d word[k] = %c, grid[col][row] = %c \n", k, word[k], grid[col][row]);

if (grid[col][row] == word[k] || count == 0){

printf("grid[col][row] = %c word[k]= %c \n", grid[col][row], word[k]);
check = 'T';

printf("count = %d check = %c, check2 = %c, INT k = %d,char = %c, row = %d, col = %d\n",count, check ,check2, k, word[k], row,
col);


}


else if (grid[col][row] == ' ') {


}

else {

check2 = 'F';
printf("grid[col][row] =%c check = %c, check2 = %c, INT k = %d,char = %c, row = %d, col = %d\n",grid[col][row], check ,check2, k, word[k], row,
col);
}

col++;
}

printf("done with loop %c \n", word[k]);

}

if (check == 'T' && check2 == 'T'){

printf("Finalcheck = %c\n", check);
return 1;
}

else {
return 0;
}



}


int check_vertical (char * word, int row, int col, int num_rows,
int num_cols, char grid[num_cols][num_rows]) {

int length = strlen(word);
char check = 'F';
char check2 = 'T';
int k;


printf("strlen = %d count = %d \n", length, count);
if (num_rows - row >= length && col < num_cols){


for (k = 0; k < length; k++) {
printf("k=%d word[k] = %c, grid[col][row] = %c \n", k, word[k], grid[col][row]);

if (grid[col][row] == word[k] || count == 0){


printf("grid[col][row] = %c word[k]= %c \n", grid[col][row], word[k]);
check = 'T';
printf("count = %d check = %c, check2 = %c, INT k = %d,char = %c, row = %d, col = %d\n",count, check ,check2, k, word[k], row,
col);

}

else if (grid[col][row] == ' ') {

// NOTHING

}

else {

check2 = 'F';
printf("grid[col][row] =%c check = %c, check2 = %c, INT k = %d,char = %c, row = %d, col = %d\n",grid[col][row], check ,check2, k, word[k], row,
   col);


}

row++;

}


}

if (check == 'T' && check2 == 'T'){

printf("Finalcheck = %c\n", check);
return 1;
}

else {

return 0;
}


}


void checkPlacement (char grid[num_column][num_row], int row, int column) {


if (identifier == 'H') {

if (check_horizontal (word, i, j, row, column, grid)){
setWord(identifier, grid);
printGrid(grid);

} else {
if (count == 0){
count = -1;
}
else printf ("Word can't be placed horizontally!");
}
}

//Case if user asks the word to be placed vertically
else if (identifier == 'V') {

if (check_vertical (word, i, j, row, column, grid)){

setWord(identifier, grid);
printGrid(grid);
}
else {
if (count == 0){
count = -1;
}
else printf ("Word can't be placed vertically!");
}
}

else {

if (count == 0){
count = -1;
}

printf ("Please choose a valid identifier");
}

}


void checkRandom (char grid[num_column][num_row], int row, int column) {


srand (time(NULL));

int randVH = rand() % 2;

if (randVH == 1){
identifier = 'H';
} else identifier = 'V';


struct randomVal
{
int row;
int col;
};

struct randomVal random[row * column];

int arrayIndex = 0;

if (identifier == 'H'){


for (int l = 0; l < row; l++)
{
for (int p = 0; p < column; p++)
{
if (check_horizontal (word, l, p, row, column, grid)){

random[arrayIndex].row = l;
random[arrayIndex].col = p;

arrayIndex++;


}
}
printf ("\n");
}
} else {


for (int l = 0; l < row; l++)
{
for (int p = 0; p < column; p++)
{
if (check_vertical (word, l, p, row, column, grid)){

random[arrayIndex].row = l;
random[arrayIndex].col = p;

arrayIndex++;


}
}
printf ("\n");
}

}


printf("randomPosition = %i %i \n", random[0].row, random[0].col);

if (arrayIndex == 0){


if (identifier == 'V') {
for (int l = 0; l < row; l++){

for (int p = 0; p < column; p++)
{
if (check_horizontal (word, l, p, row, column, grid)){

random[arrayIndex].row = l;
random[arrayIndex].col = p;

arrayIndex++;


}
}
printf ("\n");
}

identifier ='H';

}

else if (identifier == 'H'){

for (int l = 0; l < row; l++){

for (int p = 0; p < column; p++)
{
if (check_vertical (word, l, p, row, column, grid)){

random[arrayIndex].row = l;
random[arrayIndex].col = p;

arrayIndex++;


}
}
printf ("\n");
}

identifier ='V';


}


}


if (arrayIndex > 0) {


int randArray = rand() % arrayIndex;


i = random[randArray].row;
j = random[randArray].col;

printf("randomPosition = %i %i, arrayIndex = %d, randArray = %i\n", i, j, arrayIndex, randArray);

setWord(identifier, grid);
printGrid(grid);

} else {

printf("That word can't be placed anywhere. \n");

}

}

int main ()
{
printf ("How many rows and columns do you want? \n");

scanf ("%d", &num_row);
scanf ("%d", &num_column);

char grid [num_column][num_row];

for (int l = 0; l < num_row; l++)
{
for (int p = 0; p < num_column; p++)
{
grid[p][l] = ' ';
printf (" ");
}

printf ("\n");
}

char end;
char end2;

while (1){
printf ("\nEnter a word, identifier, and i,j (if required). Type QUIT to quit. \n");

scanf ("%s", word);

scanf ("%c", &end);

if (end == '\n' && strcmp(word, "QUIT") == 0) {
break;

}


scanf ("%c", &identifier);
scanf ("%c", &end2);


if (end2 != '\n' && identifier != 'R') {

scanf ("%d", &i);
scanf (" %d", &j);

}


if (identifier == 'R') {


checkRandom(grid, num_row, num_column);
} else {

checkPlacement(grid, num_row, num_column);

}

printf ("\n");

count++;


}

return 0;
}
