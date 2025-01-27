#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to demonstrate dynamic memory allocation
char* create_greeting(const char* name) {
    // Allocate memory for "Hello, " + name + "!\n" + null terminator
    char* greeting = (char*)malloc(strlen("Hello, ") + strlen(name) + 3);
    if (greeting == NULL) {
        return NULL;
    }
    
    sprintf(greeting, "Hello, %s!\n", name);
    return greeting;
}
 
int main() {
    // Basic output
    printf("Development container is working!\n");
    
    // Demonstrate some basic C operations
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of numbers 1-5: %d\n", sum);
    
    // Dynamic memory example
    char* message = create_greeting("Developer");
    if (message != NULL) {
        printf("%s", message);
        free(message);  // Clean up allocated memory
    }
    
    return 0;
}