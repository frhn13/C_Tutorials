#include <stdio.h>

int main()
{
   // WRITE/APPEND A FILE
   FILE *pF = fopen("test.txt", "a");

   fprintf(pF, "Patrick Star\n");

   fclose(pF);
   
   // DELETE A FILE
   /*if(remove("test.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT deleted!");
   }
   return 0;
*/

    FILE *pA = fopen("test.txt", "r");
    char buffer[255];
    if (pA==NULL) {
        printf("Unable to open file!\n");
    }

    while(fgets(buffer, 255, pA) != NULL) {
        printf("%s", buffer);
    }
    fclose(pA);
}