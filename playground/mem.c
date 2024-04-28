
#include <string.h>
#include <stdio.h>

int	main(void)
{
	// char	a[] = "Hello";
	// printf("元 = 「%s」\n", a);
	// printf("memcpy = 「%s」\n", (char *)memcpy(a, "ABCD", 4));
	// printf("memmove = 「%s」\n", (char *)memmove(a, "ABCD", 4));

	// char	b[] = "wor ld!";
	// printf("\n元 = 「%s」\n", b);
	// printf("memcpy = 「%s」\n", (char *)memcpy(b, "tttt", 2));
	// printf("memmove = 「%s」\n", (char *)memmove(b, "tttt", 2));

	// char	c[] = "#\t%&\n";
	// printf("\n元 = 「%s」\n", c);
	// printf("memcpy = 「%s」\n", (char *)memcpy(c, "1234", 6));
	// printf("memmove = 「%s」\n", (char *)memmove(c, "1234", 6));

	// char	d[] = "123456789";
	// printf("\n元 = 「%s」\n", d);
	// printf("memcpy = 「%s」\n", (char *)memcpy(d, "12345678901", 10));
	// printf("memmove = 「%s」\n", (char *)memmove(d, "12345678901", 10));

	// char	e[] = "abcdefg";
	// printf("\n元 = 「%s」\n", e);
	// printf("memcpy = 「%s」\n", (char *)memcpy(e, "123456789", 0));
	// printf("memmove = 「%s」\n", (char *)memmove(e, "123456789", 0));

	char	f[] = "1234567";

//	printf("memmove = 「%s」\n", f+2);
	printf("\n元 = 「%s」\n", f);
	printf("memcpy = 「%s」\n", (char *)memcpy(f+2, f, 6));
	char	g[] = "1234567";
	printf("%s\n", g+2);
	printf("memmove = 「%s」\n", (char *)memmove(g+2, g, 6));

	// char dst1[] = "1234";
	// char dst2[] = "1234";
	// char src[10] = "ABCD";

	// int len = 4;
	// printf("%s\n", "memcpy test");
	// printf("test:%s\n", (char *)memmove(dst1,src,len));
	// printf("test:%s\n", (char *)memcpy(dst2,src,len));


	// printf("%s\n", "memcpy test");
	// printf("test:%s\n", (char *)memmove(src,src,len));
	// // printf("test:%s\n", (char *)memcpy(src,src,len));
	// printf("%c %c %c %c %c %c\n", src[4], src[5], src[6], src[7], src[8], src[9]);
	return (0);
}
