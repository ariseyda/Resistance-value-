#include<stdio.h>


//A resistor is a circuit device designed to have a specific resistance value between its ends. 
//Resistance values are expressed in ohms or kilo-ohms. 
//Resistors are frequently marked with colored bands that encode their resistance values, as shown in figure below. 
//The first two bands are digits, and the third is a power-of-ten multiplier. 
//For example,if the first band is green, the second is black, and the third is orange, the resistor has a value of 50 × 10^3 ohms or 50 k-ohms. 
//The information in the table can be stored in a C program as an array of strings. 
//Notice that “ red ” is COLOR_CODES[2] and has a digit value of 2 and a multiplier value of 10 2 . 
//In general, COLOR_CODES[ n ] has digit value n and multiplier value 10 n . 
//Write a program that prompts for the colors of Band 1, Band 2, and Band 3, and then displays the resistance in kilo-ohms. 
//Include a helper function search that takes three parameters—the list of strings, the size of the list, and a target string, 
//and returns the subscript of the list element that matches the target  
//or returns –1 if the target is not in the list.

void value(){
	
  char colors[3][15];
  int i;
  printf("Enter the colors of the resistor's three bands, beginning with the band nearest the end. Type the colors in lowercase letters only, NO CAPS.\n");
  for(i=0;i<3;i++){
  	scanf("%s",colors[i]);
  }
  for(i=0;i<3;i++){
  	printf("Band(%d)=%s\n",3-i,colors[i]);
  }

  char color_codes[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"};
	
    int k,l,count=0,count1=0;
    int array[3];
    for(k=0;k<3;k++){
        for(l=0;l<10;l++){
   		    if(strcmp(colors[k],color_codes[l])==0){
    			array[k]=l;
    			count++;
		    }
    	}
    	if(count==0){
    		printf("INVOLID COLOR=%s\n",colors[k]);
    		count1++;
    		
		}
		count=0;
			
	}
    
    if(count1==0){
    	printf("%d%d x 10^%d ohms",array[2],array[1],array[0]);
	}
    
   printf("\nDo you want to decode another resistor(y or n)?");
   char x;
   scanf(" %c",&x);
   if(x=='y'){
   	value();
   }
   else if(x=='n'){
   	 exit(1);
   }



	
}
int main(){

  
  
   value();
    
  
	
	
	return 0;
}



