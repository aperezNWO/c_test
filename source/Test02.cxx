#include<stdio.h>

void OpenFile()
{
    // declaration of file pointer
    FILE* fp = NULL;
    // declaration of variable
    int x;     
    // opening of file
    fopen_s(&fp, "file.txt", "w"); 
    // checking of error
    if (!fp) 
        return 1;
    // giving content
    for (x = 1; x <= 10; x++)
        fprintf(fp, "%d\n", x); 
    // closing of file
    fclose(fp); 
    //
    return 0;
}

//
void ReadFile()
{
    // declaration of file pointer
    FILE* fp = NULL; 
    // variable to read the content
    char con[1000]; 
    // opening of file
    fopen_s(&fp,"file.txt", "r");
    // checking for error
    if (!fp)
        return 1;
    // reading file content
    while (fgets(con, 1000, fp) != NULL)
        printf("%s", con);
    // closing file
    fclose(fp); 
    //
    printf("%c", getchar());
    //
    return 0;
}

//
int main()
{
    //
    OpenFile();
    //
    ReadFile();
    //
    return  0;
}