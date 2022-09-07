#include <iostream>
using namespace std;

#include "wave-file-helper.h"

int main(int argc, char **argv)
{
   
    if(argc < 2)
    {
        cout << "Usage: " << "/.main" << " <filename>" << endl;
        return 1;
    }

    char *filename = argv[1];
    FILE *fp = loadWaveFile(filename);
    if(fp == NULL)
    {
        cout << "Error: Could not open file " << filename << endl;
        return 1;
    }
    
    size_t sizeOfHeader;
    cout<<"Input File Data : "<< endl;
    sizeOfHeader = fread(headerData, 1, sizeof(header), fp);
    displayWaveHeader(headerData, sizeOfHeader);
    
    fclose(fp);


    //below code if for creating new file or copy of existing wave file
    bool c = createCopy(filename);
    if(c==true){
        cout<< "\nCopy Created : "<< endl;
    }
    else {cout<<"Failed to Create Copy: ";}


    cout<<"\nOutput File Data : "<< endl;
    fp = fopen("Output.wav", "r");
    sizeOfHeader = fread(headerData, 1, sizeof(header), fp);
    displayWaveHeader(headerData, sizeOfHeader);

    fclose(fp);
    
    return 0;
}
