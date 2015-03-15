#include<iostream>
#include<string.h>


using namespace std;

int main()
{

	char word[20];
	cout<<"\n\nEnter the string : ";
	cin.getline(word,20);
	cout<<"\n\nThe plain string is "<<word<<endl;
	for(int i=0; i<strlen(word); i++)
	for(int j=i; j<strlen(word); j++)
	{
        word[i]+=word[j];
	}

	cout<<"The encrypted word is "<<word;
    //for(int k=0; k<strlen(word); k++)
	//for(int l=k; l<strlen(word); l++)
	//{

	//}
	//cout<<"The decrypted word is "<<word;
	return 0;
}
