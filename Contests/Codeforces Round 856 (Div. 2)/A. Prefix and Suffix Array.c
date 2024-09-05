#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int is_palindrome(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0; // Not a palindrome
    }
    return 1; // Is a palindrome
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        char strings[2 * n - 2][n]; // Array to store the 2n-2 strings
        char longest_prefix[n], longest_suffix[n];
        
        for (int i = 0; i < 2 * n - 2; i++) {
            scanf("%s", strings[i]);
        }
        
        // Identify the longest prefix and longest suffix
        for (int i = 0; i < 2 * n - 2; i++) {
            if (strlen(strings[i]) == n - 1) {
                if (longest_prefix[0] == '\0')
                    strcpy(longest_prefix, strings[i]);
                else
                    strcpy(longest_suffix, strings[i]);
            }
        }
        
        // Construct potential palindrome strings
        char s1[2 * n], s2[2 * n];
        strcpy(s1, longest_prefix);
        strcat(s1, longest_suffix);
        strcpy(s2, longest_suffix);
        strcat(s2, longest_prefix);
        
        // Check if either constructed string is a palindrome
        if (is_palindrome(s1) || is_palindrome(s2)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
