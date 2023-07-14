## Fatorial

## O que é

Fatorial é um número inteiro positivo representado por `n!`. O fatorial de um número é a multipicação desse número por todos os seus antecessores até chegar no 1. O zero é excluido. Exemplo: `5! = 5 * 4 * 3 * 2 * 1 = 120`.

## Minha solução
Fazemos o tratamento `if (nb  <  0  ||  nb  >  12)` porque não existe fatorial de número negativo e, caso `nb` seja maior que 12, ele ultrapassará o `INT_MAX`. 

Na primeira iteração do `while` temos  `factorial = nb` , visto que multiplicar por 1 não altera o valor. Na segunda iteração temos `factorial = nb * (nb - 1)`  (porque decrementamos 1 de `nb` na iteração anterior). Na terceira iteração temos `factorial = nb * (nb - 2)` (porque decrementamos 1 de `nb` na iteração anterior). 

Quando o  `while` terminar, temos na variável `factorial` o resultado da multiplicação do valor inicial de `nb` por todos os seus antecessores.

E por último, devemos retornar 1 caso a função receba 0, porque `0! == 1`.

```c
int  ft_iterative_factorial(int  nb)
{
	int  factorial;
	
	factorial  =  1;
	if (nb  <  0  ||  nb  >  12)
		return (0);
	while (nb)
	{
		factorial  =  factorial  *  nb;
		nb--;
	}
	return (factorial);
}
```
