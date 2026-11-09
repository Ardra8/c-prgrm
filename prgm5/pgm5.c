#include <stdio.h>

void main(){
int inputArray[100],elementCount,counter,num;
printf("Enter number of element in array\n");
scanf("%d",&elementCount);
printf("enter%dnumbers\n",elementCount);
for(counter=0;counter<elementCount;counter++) {
scanf("%d",&inputArray[counter]);
}
printf("enter a number to search in Array\n");
scanf("%d",&num);
for(counter=0;counter<elementCount;counter++) {
if(inputArray[counter]==num) {
printf("number %d found at index %d\n",num,counter);
break;
}
}
if(counter==elementCount) {
printf("number %d not present in input array\n",num);
}

}

