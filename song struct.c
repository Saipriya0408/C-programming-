#include<stdio.h>
#include<string.h>
struct song
{
	char title[50];
	char artist[20];
	char album[10];
	float length;
};
int main()
{
	struct song S1;
	strcpy(S1.title,"sirikkadhey");
	strcpy(S1.artist,"anirudh");
	strcpy(S1.album,"remo");
	S1.length=4.05;
	printf("title=%s,\nartist=%s,\nalbum=%s,\nlength=%.2f",S1.title,S1.artist,S1.album,S1.length);
	return 0;
}