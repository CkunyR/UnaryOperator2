//int main()
//{
//	int a = 10;
//	int* p = &a;//&-取地址操作符
//	*p = 20;//*-解引用操作符
//
//	return 0;
//}


int main()
{
	int a = 10;
	char c = 'q';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof --计算的是所占内存空间的大小，单位是字节
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));//x86-4;x64-8
	printf("%d\n", sizeof(char*));

	printf("%d\n", sizeof(arr));//4*10
	printf("%d\n", sizeof(int [10]));
	return 0;
}