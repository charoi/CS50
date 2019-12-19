//CS50 submission

#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

string k;
string plain;
int q;
int main(int argc, string argv[])
{
if (argc !=2)
{
    printf("Nope!\n");
    return 1;
}
//putting k as a key
k =argv[1];

    for (int i = 0, n = strlen(k); i < n; i++)
{
    if(!isalpha(k[i]))
    {
   printf("Nope!\n");
    return 1;
    }
}

plain = get_string("plaintext: ");

for (int i=0, j=0, n=strlen(plain);i < n; i++)
{
 // to wraparound
        q = tolower(k[j % strlen(k)]) - 'a';
//check if its lowercase or uppercase if not just print special char
if isupper(plain[i])
// Get modulo number and add to appropriate case
         {   printf("%c", 'A' + (plain[i] - 'A' + q) % 26);

            // Only increment j when used
            j++;
}
else if islower(plain[i])

    // Get modulo number and add to appropriate case
         {   printf("%c", 'a' + (plain[i] - 'a' + q) % 26);

            // Only increment j when used
            j++;
         }
else
{
    printf("%c", plain[i]);
}
}
printf("\n");
return 0;
}
