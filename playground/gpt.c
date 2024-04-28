#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char dest1[20], dest2[20];

    // memcpyの例
    printf("Before memcpy:\n");
    printf("Source string: %s\n", str);
    memcpy(dest1, str, sizeof(str));
    printf("After memcpy:\n");
    printf("Destination string: %s\n", dest1);

    // memmoveの例（オーバーラップあり）
    printf("\nBefore memmove (with overlap):\n");
    printf("Source string: %s\n", str);

	printf("%s %s %zu\n", str+3, str, sizeof(str)-3);
    memmove(str + 3, str, sizeof(str) - 3);
    printf("After memmove (with overlap):\n");
    printf("Destination string: %s\n", str);

    // memmoveの例（オーバーラップなし）
    printf("\nBefore memmove (without overlap):\n");
    printf("Source string: %s\n", str);
    memmove(dest2, str, sizeof(str));
    printf("After memmove (without overlap):\n");
    printf("Destination string: %s\n", dest2);


    // memmoveの例（オーバーラップあり）
    printf("\nBefore memcpy (with overlap):\n");
    printf("Source string: %s\n", str);
    memcpy(str + 3, str, sizeof(str) - 3);
    printf("After memcpy (with overlap):\n");
    printf("Destination string: %s\n", str);

    // memmoveの例（オーバーラップなし）
    printf("\nBefore memcpy (without overlap):\n");
    printf("Source string: %s\n", str);
    memcpy(dest2, str, sizeof(str));
    printf("After memcpy (without overlap):\n");
    printf("Destination string: %s\n", dest2);
    return 0;
}
