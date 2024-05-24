#include <stdio.h>
#include "Compare.h"


int main() {

	//6��ނ̑g�ݍ��킹
	Compare<int,int>intInt(10, 100);
	Compare<int,float>intFloat(20, 100.0f);
	Compare<int,double>intDouble(30, 100.0);
	Compare<float,float>floatFloat(40.0f, 100.0f);
	Compare<float,double>floatDouble(50.0f, 100.0);
	Compare<double,double>doubleDouble(60.0, 100.0);

	//�\��
	printf("int�^��int�^:%d\n", intInt.Min());
	printf("int�^��float�^:%d\n", intFloat.Min());
	printf("int�^��double�^:%d\n", intDouble.Min());
	printf("float�^��float�^:%f\n", floatFloat.Min());
	printf("float�^��double�^:%f\n", floatDouble.Min());
	printf("double�^��double�^:%lf\n", doubleDouble.Min());

	return 0;
}