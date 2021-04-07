#include "converting.h"

void converting() {
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80];
	int int_number;
	while (TRUE) {
		printf("Type the int numeric string (q- to quit):\n");
		gets(int_string);
		if (strcmp(int_string, "q") == 0) break;
		int_number = atoi(int_string);
		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");

	printf("*** Start of Converting Strings to double Demo ***\n");
	char double_string[80];
	double double_number;
	while (TRUE) {
		printf("Type the double numeric string (q- to quit):\n");
		gets(double_string);
		if (strcmp(double_string, "q") == 0) break;
		double_number = atof(double_string);
		printf("Converted number is %f\n", double_number);
	}
	printf("*** End of Converting Strings to double Demo ***\n\n");

	printf("*** Start of Converting Strings to long Demo ***\n");
	char long_string[80];
	long long_number;
	while (TRUE) {
		printf("Type the long numeric string (q- to quit):\n");
		gets(long_string);
		if (strcmp(long_string, "q") == 0) break;
		long_number = atol(long_string);
		printf("Converted number is %ld\n", long_number);
	}
	printf("*** End of Converting Strings to long Demo ***\n\n");
}
