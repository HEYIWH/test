//int main()
//{
//	int l1, l2, l3;
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && b > c)
//	{
//		l1 = a;
//		l2 = b;
//		l3 = c;
//	}
//	else if (a>c&&b < c)
//	{
//		l1 = a;
//		l2 = c;
//		l3 = b;
//	}
//	if (b > a && a > c)
//	{
//		l1 = b;
//		l2 = a;
//		l3 = c;
//	}
//	else if (b>c&&a < c)
//	{
//		l1 = b;
//		l2 = c;
//		l3 = a;
//	}
//	if (c > a && a > b)
//	{
//		l1 = c;
//		l2 = a;
//		l3 = b;
//	}
//	else if (c>b&&a < b)
//	{
//		l1 = c;
//		l2 = b;
//		l3 = a;
//	}
//	printf("%d %d %d\n", l1, l2, l3);
//	return 0;
//}
//以上是我的，太繁琐了。。。。。。，下面是老师的
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d%d%d\n", a, b, c);
}
