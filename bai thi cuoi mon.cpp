#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct doibong// tao kieu du lieu doi bong
{
	int madoibong[5];
	char tendoibong[30];
}db;
typedef struct cauthu //tao kieu du lieu cua mot cau thu
{
	char macauthu[10];
	char tencauthu[30];
	int ngaysinh;
}ct;
void NhapSLdoibong(int &n);
void NhapSLcauthu(int &m);
void Nhap1doibong(doibong db);
void Xuat1doibong(doibong db);
void Nhap1cauthu(cauthu ct);
void Xuat1cauthu(cauthu ct);
void Nhapdsdoibong(doibong db[],cauthu ct[],int n,int m);
void Xuatdsdoibong(doibong db[],cauthu ct[],int n,int m);
void NhapSLdoibong(int &n)// nhap so luong doi bong
{
	do 
	{
		printf("\3Nhap so luong doi bong:");
		scanf("%d",&n);
	}while(n<=0 || n>100);
}
void NhapSLcauthu(int &m)// nhap so luong cau thu mot doi
{
	do
	{
		printf("\3Nhap so luong cau thu:");
		scanf("%d",&m);
	}while(m<=0 || m>15);
}
void Nhap1doibong(doibong db)// thong tin ve mot doi bong 
{
	flushall;
	printf("\n\3Ma doi bong:");
	scanf("%d",&db.madoibong);
	printf("\3Ten cua doi bong:");
	fflush(stdin);
	gets(db.tendoibong);
}
void Xuat1doibong(doibong db)// xuat thong tin do ra 
{
	printf("\n\3Ma doi bong:%d",db.madoibong);
	printf("\n\3Ten cua doi bong:");
	puts(db.tendoibong);
}
void Nhap1cauthu(cauthu ct)// nhap thong tin cua mot cau thu
{
	flushall;
	printf("\n\3Ma cau thu:");
	scanf("%d",&ct.macauthu);
	fflush(stdin);
	printf("\3Ten cau thu:");
	fflush(stdin);
	gets(ct.tencauthu);
	printf("\3Ngay thang nam sinh:");
	scanf("%d",&ct.ngaysinh);
}	
void Xuat1cauthu(cauthu ct)// xuat thong tin cau thu ra
{
	flushall;
	printf("\n\3Ma cau thu:");
	puts(ct.macauthu);
	printf("\n\3Ten cau thu:");
	puts(ct.tencauthu);
	printf("\3Ngay thang nam sinh:%d",ct.ngaysinh);
}
void Nhapdsdoibong(doibong db[],cauthu ct[],int n,int m)// nhap danh sach mot doi bong
{
	for(int i=0;i<n;i++)
	{
		printf("\n***************************************");
		printf("\n\3Doi bong thu %d\n",i+1);
		Nhap1doibong(db[i]);
		for(int j=0;j<m;j++)
		{
			printf("\n\3Cau thu thu %d\n",j+1);
			Nhap1cauthu(ct[j]);
		}
	}
}
void Xuatdsdoibong(doibong db[],cauthu ct[],int n,int m)//xuat danh sach mot doi bong
{
	printf("\n___________________________________________________________________________________\n");
	for(int i=0;i<n;i++)
	{
		printf("\n\3Doi bong thu %d",i+1);
		Xuat1doibong(db[i]);
		for(int j=0;j<m;j++)
		{
			printf("\n\3Cau thu thu %d\n",j+1);
			Xuat1cauthu(ct[j]);
		}
	}
}
int main()
{
	int n;
	int m;
	doibong db[MAX];
	cauthu ct[MAX];
	NhapSLdoibong(n);
	NhapSLcauthu(m);
	Nhapdsdoibong(db,ct,n,m);
	Xuatdsdoibong(db,ct,n,m);
	return 0;
}

