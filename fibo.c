#include <stdio.h>

int fibo_i(int n)
{
	if(n <= 0)
		return 0;
	else if(n == 1 || n == 2)
		return 1;
	else if(n > 2)
	{
		int penultimo = 1, ultimo = 1, proximo;
		for(int j = 3; j <= n; j++)
		{
			proximo = penultimo + ultimo;
			penultimo = ultimo;
			ultimo = proximo;
		}
		return ultimo;
	}
	else
		return 0;
}

int fibo_r(int n)
{
	if(n <= 0)
		return 0;
	else if(n == 1 || n == 2)
		return 1;
	else if(n > 2)
		return(fibo_r(n-1) + fibo_r(n-2));
	else
		return 0;
}


int main()
{
    int m, n;
    int metodo_valido = 0; 
    
    while (!metodo_valido) 
    {
        printf("Selecione o metodo de calculo desejado:\n");
        printf("Digite 1 para iterativo\n");
        printf("Digite 2 para recursivo\n");
        printf("Digite 3 para ambos\n");
        scanf("%d",&m); 
        
        if(m == 1 || m == 2 || m == 3)
        {
            metodo_valido = 1;
            
            printf("Digite a posicao desejada:\n");
            scanf("%d",&n);
            
            if(m == 1)
            {
               printf("Valor na posicao %d: %d",n, fibo_i(n));
            }
            else if(m == 2)
            {
                printf("Valor na posicao %d: %d",n, fibo_r(n));
            }
            else if(m == 3)
            {
                printf("Valor na posicao %d iterativo: %d\n",n, fibo_i(n));
                printf("Valor na posicao %d recursivo: %d",n, fibo_r(n));
            }
        }
        else
        {
            printf("Método inválido. Tente novamente.\n");
        }
    }
    
    return 0;
}



	

