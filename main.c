//! EX00

// int	main(void)
// {
// 	int	a;
// 	int	*ptr;
// 	a = 5;
// 	ptr = &a;
// 	ft_ft(ptr);
// 	return (0);
// }


//! EX01

int main(void)
{
	int a = 5;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;


// 	ft_ultimate_ft(ptr9);
// 	printf("a = %d\n", a);
// 	return(0);
// }

void ft_putstr(char *str);
int	main(void)
{
  ft_putstr("Hello world\n");
  return (0);
}