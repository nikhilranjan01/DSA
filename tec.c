#include <stdio.h>
#include <string.h>

void encrypt(char *data, int key) {
    int i;
    for (i = 0; data[i] != '\0'; i++) {
        char ch = data[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + key) % 26 + 'a';  
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + key) % 26 + 'A';  
        }
        
        data[i] = ch;
    }
}
void decrypt(char *data, int key) {
    int i;
    for (i = 0; data[i] != '\0'; i++) {
        char ch = data[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - key + 26) % 26 + 'a';  
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - key + 26) % 26 + 'A'; 
        }

        data[i] = ch;
    }
}
int main() {
    char data[256];
    int key;

    printf("Enter the data to encrypt: ");
    fgets(data, 256, stdin);
    data[strcspn(data, "\n")] = '\0'; 

    printf("Enter the encryption key (number): ");
    scanf("%d", &key);

    encrypt(data, key);
    printf("Encrypted data: %s\n", data);

    decrypt(data, key);
    printf("Decrypted data: %s\n", data);

    return 0;
}
