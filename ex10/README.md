`a` e `b` são os ponteiros. `*a` e `*b` são o destino dos ponteiros.

```c
void  ft_swap(int  *a, int  *b)
{
	int tmp;

	tmp =  *a;
	*a =  *b;
	*b = tmp;
}
```
