#include <stdio.h>
#include "Compare.h"


int main() {

	//6éÌóﬁÇÃëgÇ›çáÇÌÇπ
	Compare<int,int>intInt(10, 100);
	Compare<int,float>intFloat(20, 100.0f);
	Compare<int,double>intDouble(30, 100.0);
	Compare<float,float>floatFloat(40.0f, 100.0f);
	Compare<float,double>floatDouble(50.0f, 100.0);
	Compare<double,double>doubleDouble(60.0, 100.0);

	//ï\é¶
	printf("intå^Ç∆intå^:%d\n", intInt.Min());
	printf("intå^Ç∆floatå^:%d\n", intFloat.Min());
	printf("intå^Ç∆doubleå^:%d\n", intDouble.Min());
	printf("floatå^Ç∆floatå^:%f\n", floatFloat.Min());
	printf("floatå^Ç∆doubleå^:%f\n", floatDouble.Min());
	printf("doubleå^Ç∆doubleå^:%lf\n", doubleDouble.Min());

	return 0;
}