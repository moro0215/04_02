#pragma once
template <typename T1,typename T2>

class Compare {
public:
	//�����o�ϐ�
	T1 num1;
	T2 num2;

	//�R���X�g���N�^
	Compare(T1 num1, T2 num2): num1(num1), num2(num2) {};

	//�����o�֐�
	T1 Min() {
		//num2��num1�ȉ��̏ꍇ
		if (num1 >= num2) {
			return static_cast<T2>(num2);
		}
		//num1�̕����������ꍇ
		else {
			return static_cast<T1>(num1);
		}
	}
};