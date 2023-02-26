#include<stdio.h>

void show(int mat[10][10],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
void input_matrix(int mat[10][10],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	//return mat;
}

void creat_sparse(int mat[10][10],int x,int y,int s_mat[10][10])
{
	int i,j,k=1,l=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(mat[i][j]!=0)
			{
				l++;
			}
		}
	}
	if(l<=(x*y)/3)
	{
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(mat[i][j]!=0)
			{
				s_mat[k][0]=i;
				s_mat[k][1]=j;
				s_mat[k][2]=mat[i][j];
				k++;
			}
		}
	}
		s_mat[0][0]=x;
		s_mat[0][1]=y;
		s_mat[0][2]=k;
	}
}
void add_sparse(int s_mat1[10][10],int s_mat2[10][10],int s_matt[10][10])
{
	int i,j,k;
	i=j=k=1;
	while(i<s_mat1[0][2] && j<s_mat2[0][2])
	{
		if(s_mat1[i][0] == s_mat2[j][0])
		{
			if(s_mat1[i][1] == s_mat2[j][1])
			{
				s_matt[k][0]=s_mat1[i][0];
				s_matt[k][1]=s_mat1[i][1];
				s_matt[k][2]=s_mat1[i][2] + s_mat2[j][2];
				i++;j++;k++;
			}
			else if(s_mat1[i][1] < s_mat2[j][1])
			{
				s_matt[k][0]=s_mat1[i][0];
				s_matt[k][1]=s_mat1[i][1];
				s_matt[k][2]=s_mat1[i][2];
				i++;k++;
			}
			else
			{
				s_matt[k][0]=s_mat2[j][0];
				s_matt[k][1]=s_mat2[j][1];
				s_matt[k][2]=s_mat2[j][2];
				j++;k++;
			}
		}
		else if(s_mat1[i][0] < s_mat2[j][0])
			{
				s_matt[k][0]=s_mat1[i][0];
				s_matt[k][1]=s_mat1[i][1];
				s_matt[k][2]=s_mat1[i][2];
				i++;k++;
			}
			else
			{
				s_matt[k][0]=s_mat2[j][0];
				s_matt[k][1]=s_mat2[j][1];
				s_matt[k][2]=s_mat2[j][2];
				j++;k++;
			}
	}
	while(i<s_mat1[0][2])
	{
		s_matt[k][0]=s_mat1[i][0];
		s_matt[k][1]=s_mat1[i][1];
		s_matt[k][2]=s_mat1[i][2];
		i++;k++;
	}
	while( j<s_mat2[0][2])
	{
		s_matt[k][0]=s_mat2[j][0];
		s_matt[k][1]=s_mat2[j][1];
		s_matt[k][2]=s_mat2[j][2];
		j++;k++;
	}
	s_matt[0][0]=(s_mat1[0][0]>s_mat2[0][0])? s_mat1[0][0]:s_mat2[0][0];
	s_matt[0][1]=(s_mat1[0][1]>s_mat2[0][1])? s_mat1[0][1]:s_mat2[0][1];
	s_matt[0][2]= k;
}
int main()
{
	int i,j,mat1[10][10],mat2[10][10],p,q,m,n,s_mat1[10][10],s_mat2[10][10],s_matt[10][10];
	printf("\n Enter row and colomn for first matrix:");
	scanf("%d %d",&m,&n);
	printf("\n Enter row and colomn for second matrix:");
	scanf("%d %d",&p,&q);
	printf("\nInput 1st matrix:\n");
	input_matrix(mat1,m,n);
	printf("\nInput 2nd matrix:\n");
	input_matrix(mat2,p,q);
	printf("\n1st matrix:\n");
	show(mat1,m,n);
	printf("\n2nd matrix:\n");
	show(mat2,p,q);
	creat_sparse(mat1,m,n,s_mat1);
	creat_sparse(mat2,p,q,s_mat2);
	printf("\n1st sparse matrix:\n");
	show(s_mat1,s_mat1[0][2],3);
	printf("\n2nd sparse matrix:\n");
	show(s_mat2,s_mat2[0][2],3);
	add_sparse(s_mat1,s_mat2,s_matt);
	printf("\nadded sparse matrix:\n");
	show(s_matt,s_matt[0][2],3);
	return 0;
}