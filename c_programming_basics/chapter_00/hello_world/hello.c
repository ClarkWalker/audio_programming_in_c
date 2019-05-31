
// comment section to describe the code

// the link section for linking other libraries in
#include <stdio.h>
#include <string.h>

// global variables section, never do this
// global functions section,
// void test(char message[40] = "hi") {
//     if (message != "") {
//         printf("%s\n", message);
//     } else {
//         printf("I farted\n");
//     }
// }
void test(int num, char message[40], ...) {
    printf("%i %s\n", num,  message);
}


// main section
void main() {
    // variable declaration Section
    test(3, "hello");
    // test("You farted ");
    // executables scetion
    char message[40] = "hello";
    // strcpy(message, "Hello, World!");
    printf("%s", message);

}


// sub programms
