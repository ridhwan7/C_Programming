#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
     int a_c = 0; // Count of apples in range
    int b_c = 0; // Count of oranges in range
    
    
    for (int i = 0; i < apples_count; i++) {
        int landing_position = apples[i] + a; // Calculate the landing position
        if (landing_position >= s && landing_position <= t) {
            a_c++;
        }
    }

    // Process oranges
    for (int i = 0; i < oranges_count; i++) {
        int landing_position = oranges[i] + b; // Calculate the landing position
        if (landing_position >= s && landing_position <= t) {
            b_c++;
        }
    }

printf("%d\n",a_c);
printf("%d\n",b_c);

}

int main()
{
  

    countApplesAndOranges(s, t, a, b, m, apples, n, oranges);

    return 0;
}


}
