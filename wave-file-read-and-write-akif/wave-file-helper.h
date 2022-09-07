//create header
#ifndef WAVE_FILE_HELPER_H
#define WAVE_FILE_HELPER_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

const int BUFSIZE = 512;					          
int count = 0;						          
short int buff[BUFSIZE];				

typedef struct WAV_HEADER
{
    char chunk_id[4];
    int chunk_size;
    char format[4];
    char subchunk1_id[4];
    int subchunk1_size;
    short int audio_format;
    short int num_channels;
    int sample_rate;			// sample_rate denotes the sampling rate.
    int byte_rate;
    short int block_align;
    short int bits_per_sample;
    char subchunk2_id[4];
    int subchunk2_size;			// subchunk2_size denotes the number of samples.

} header;

typedef struct WAV_HEADER* header_p;
header_p headerData = (header_p)malloc(sizeof(header));	

//function to load wave file and return file pointer
FILE *loadWaveFile(char *filename){
    FILE *fp = fopen(filename, "r");
    if(fp == NULL)
    {
        return NULL;
    }
    return fp;
}

//function to read wave file header
size_t readWaveFileHeader(FILE *fp, WAV_HEADER *waveHeader){
   size_t bytesRead = fread(waveHeader, sizeof(WAV_HEADER), 1, fp);

   return bytesRead;
}

//function to display wave file header
void displayWaveHeader(WAV_HEADER *waveHeader, size_t bytesRead){
    
    //sizeOfHeader = fread(&waveHeader, sizeof(WAV_HEADER), 1, fp);
    cout << " Size of Header file is "<<sizeof(headerData)<<" bytes" << endl;
    cout << " Sampling rate of the input wave file is "<< headerData->sample_rate <<" Hz" << endl;
	cout << " Number of samples in wave file are " << headerData->subchunk2_size << " samples" << endl;
}

bool createCopy(char *file){

    FILE *fp = fopen(file, "rb");
    FILE * outFilePointer = fopen("Output.wav","wb");
    if(outFilePointer == NULL || fp == NULL){
        return false;
    }

    fread(headerData, 1, sizeof(header), fp);
    fwrite(headerData,1, sizeof(*headerData), outFilePointer);
    int count = 0;	int flag;
    while (!feof(fp))
    {
        flag = fread(buff,1,BUFSIZE,fp);		
        //count++;					        
        fwrite(buff,1,flag,outFilePointer);
    }
    
    fclose(outFilePointer);
    fclose(fp);
    return true;
}

//end header
#endif