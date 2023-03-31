#include <windows.h>
#include <Stdio.h>
int main()
{
    // Копирование текстового файла
    LPCSTR srcTxtFilePath = "input.txt";
    LPCSTR dstTxtFilePath = "output.txt";
    BOOL resultTxtCopy = CopyFile(srcTxtFilePath, dstTxtFilePath, FALSE);

    if (resultTxtCopy == FALSE)
    {
        printf("Error copy txt file: %d\n", GetLastError());
        return 1;
    }

    printf("Txt file sucessfuly copied\n");

    // Копирование бинарного файла
    LPCSTR srcBinFilePath = "binary.jpg";
    LPCSTR dstBinFilePath = "destination_binary_file.jpeg";
    BOOL resultBinCopy = CopyFile(srcBinFilePath, dstBinFilePath, FALSE);

    if (resultBinCopy == FALSE)
    {
        printf("Error copying binary file: %d\n", GetLastError());
        return 1;
    }

    printf("Binary file succesfully copied\n");

    return 0;
}