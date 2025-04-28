#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void clear() {
    system("cls");
}

void printtemp(){
	printf("   ____  _        _               ____                                   \n");
	printf("  / ___|| |_ _ __(_)_ __   __ _  |  _ \\ _____   _____ _ __ ___  ___ _ __ \n");
	printf("  \\___ \\| __| '__| | '_ \\ / _` | | |_) / _ \\ \\ / / _ \\ '__/ __|/ _ \\ '__|\n");
	printf("   ___) | |_| |  | | | | | (_| | |  _ <  __/\\ V /  __/ |  \\__ \\  __/ |   \n");
	printf("  |____/ \\__|_|  |_|_| |_|\\__, | |_| \\_\\___| \\_/ \\___|_|  |___/\\___|_|   \n");
	printf("                          |___/                                          \n\n");
}

void printend(){
	printf("   ____                 _ _                _ \n");
    printf("  / ___| ___   ___   __| | |__  _   _  ___| |\n");
	printf(" | |  _ / _ \\ / _ \\ / _` | '_ \\| | | |/ _ \\ |\n");
    printf(" | |_| | (_) | (_) | (_| | |_) | |_| |  __/_|\n");
    printf("  \\____|\\___/ \\___/ \\__,_|_.__/ \\__, |\\___(_)\n");
    printf("                                |___/         \n");
}

void type(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
        fflush(stdout); 
        Sleep(150); 
    }
    printf("\n\n");
}

int main(){
	char loading[] = "\t\t\t\t\t\t\tLoading...";
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t  =====================================\n");
   		printf("\t\t\t\t\t  ||         String Reverser         ||\n");
   		printf("\t\t\t\t\t  =====================================\n");
   		
		for (int i = 0; i < strlen(loading); i++) {
		        putchar(loading[i]);
		        fflush(stdout); 
		        Sleep(110); 
		    }
		    clear();
		    Sleep(350);
		    int command;
		do {
		        // Print menu
		        clear();
		        printtemp();
		        printf("1. Input string for reversal\n");
		        printf("2. Exit\n");
		        printf("Choose an option (1/2): ");
		
		        // get command for selection menu
		        scanf("%d", &command);	getchar(); // get the newline character
		
				// switch case menu
		        switch (command) {
		            case 1: {
		            	clear(); //clear screen
		                // print template
		                printtemp();
		                puts("Masukkan kalimat yang ingin di reverse:");
		                printf("-> ");
		
		                // declare and scan string until \n
		                char original[101];
		                char reversed[101];
		                scanf(" %[^\n]", original); getchar(); // get the newline character
		
		                int size = strlen(original); // get the length
		
		                clear();	// clear screen
		
		                // reverse string and convert capitalize using ASCII 
		                for (int i = 0, j = size - 1; i < size; i++, j--) {
		                    if (original[j] >= 'a' && original[j] <= 'z') {
		                        reversed[i] = original[j] - 'a' + 'A';
		                    } else if (original[j] >= 'A' && original[j] <= 'Z') {
		                        reversed[i] = original[j] - 'A' + 'a';
		                    } else {
		                        reversed[i] = original[j];
		                    }
		                }
		
		                reversed[size] = '\0'; // add null at the end of the reversed string
		                
		                // print template
						printtemp();
		                printf("Kalimat sebelum di reverse:\n-> %s\n\n", original);
		                printf("Kalimat setelah di reverse:\n-> ");
		                type(reversed);
		                
		                printf("Press any key to continue...");getch(); //using getch to make a better visual
		                break;
		            }
		            case 2:
		                // exit program with countdown
		                clear();
		                printtemp();
		                printf("Exiting the program.\n");
		                for (int i = 3; i > 0; i--) {
		                    printf("Closing in %d...\r", i);
		                    Sleep(250); //
		                }
		                clear(); //clear screen
		                Sleep(350);
		                printend(); // print ascii art
		                return 0;
		            default:
		            	clear();
		            	printtemp();
		                printf("Invalid choice. Please choose a valid option.\n");
		                printf("Press any key to continue..."); getch(); //using getch to make a better visual
		       	}
			
			    } while (command != 2);
		
    return 0;
}
