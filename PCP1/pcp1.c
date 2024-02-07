#include <stdio.h>

//Main Function
int main() {
	//Declare character array with enough space for flag
	char flag[50];

	//Create array of values representing ASCII code
	int values[] = {110, 1, 105, 110, 1, 106, 2, 97, 123, 100, 3, 117, 53, 5, 116, 95, 48, 102, 8, 102, 95, 121, 48, 117, 114, 95, 67, 125};
	//Calculate # of elements in the values array for the loop
	int length = sizeof(values) / sizeof(values[0]);
	//index (Keep track of where to insert character)
	int flagIndex = 0;

	//for loop
	for (int i = 0; i < length; i++) {
		//Check for value greater than ten (Skip if ten or more)
		if (values[i] > 10) {
			//Convert to char and store
			flag[flagIndex++] = (char)values[i];
		}
	}
	
	//Print flag
	printf("Flag: %s\n", flag);

	return 0;
}
