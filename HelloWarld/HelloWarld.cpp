#include <stdio.h>
#include<stdlib.h>

// Hello Worldを表示する関数
void DrawHelloWorld()
{
// 今回は両方の変更を適用する
	printf("HelloWorld\n");
	printf("HelloWorld\n");
	printf("ハローワールド（WebUI)\n");
	printf("HelloWorld!\n");
	printf("ハローワールド!  (ローカル）\n");
}

int main()
{
	DrawHelloWorld();

	system("pause");
	return 0;

}

