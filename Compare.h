#pragma once
template <typename T1,typename T2>

class Compare {
public:
	//メンバ変数
	T1 num1;
	T2 num2;

	//コンストラクタ
	Compare(T1 num1, T2 num2): num1(num1), num2(num2) {};

	//メンバ関数
	T1 Min() {
		//num2がnum1以下の場合
		if (num1 >= num2) {
			return static_cast<T2>(num2);
		}
		//num1の方が小さい場合
		else {
			return static_cast<T1>(num1);
		}
	}
};