#include<stdio.h>
#include<math.h>
float determinant(int[3][25][25], int);
void cofactor(int [3][25][25], int);
void transpose(int [3][25][25], int[3][25][25], int);
int main()
{
  int a[3][25][25], k=2, d;
  int i, j,l;
  
  for(l=0;l<=2;l++)
{

   for (i = 0;i < k; i++)
    {
     for (j = 0;j < k; j++)
       {
        scanf("%d", &a[l][i][j]);
        }
    }
    printf("\n");
}
for(l=0;l<=2;l++)
{
  d = determinant(a[l], k);
  if (d == 0)
   printf("\nInverse of Entered Matrix is not possible\n");
  else
   cofactor(a[l], k);

 
/*For calculating Determinant of the Matrix */
float determinant(int a[l][25][25], int k)
{
  int s = 1, det = 0, b[l][25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (a[l][0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[l][i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[l][m][n] = a[l][i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (a[l][0][c] * determinant(b[l], k - 1));
          s = -1 * s;
          }
    }
 
    return (det);
}
 
void cofactor(int num[l][25][25], int f)
{
 int b[l][25][25], fac[l][25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[l][m][n] = num[l][i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[l][q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }
  }
  transpose(num, fac, f);
}
/*Finding transpose of matrix*/ 
void transpose(int num[l][25][25], int fac[l][25][25], int r)
{
  int i, j;
  int b[l][25][25], inverse[l][25][25], d;
 
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[l][i][j] = fac[l][j][i];
        }
    }
  d = determinant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[l][i][j] = b[l][i][j] / d;
        }
    }
   
 
   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%d", inverse[l][i][j]);
        }
    printf("\n");
     }
}}
