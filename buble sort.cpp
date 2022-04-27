#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int data [100];
	int i, j, k, tmp;
	cout<<"Pengurutan Bilangan Buble Sort \n\n";
	cout<<"Masukkan Jumlah Bilangan : ";cin>>k;
	for(i=0; i<k; i++)
	{
		cout<<"Masukkan Angka Ke "<<(i+1)<<" : ";
		cin>>data[1];
	}
	cout<<"\nAngka Sebelum Diurutkan : "<<endl;
	for(i=0; i<k; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	for(i=0; i<k; i++)
	{
		for(j=i+1; j<k; j++)
		{
			if(data[i]>data[j])
			{
				tmp=data[i];
				data[i]=data[j];
				data[j]=tmp;
			}
		}
	}
		cout<<"\nAngka Setelah Diurutkan : "<<endl;
	for(i=0; i<k; i++)
	{
		{
			cout<<data[i]<<" ";
		}
	}
	getch();
}
