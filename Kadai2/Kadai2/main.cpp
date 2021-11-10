/*
�y���z

Object�N���X
x, y, z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B



Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�N���X��ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�N���X��virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
	�x�N�g�����v�Z������@�ł��\���܂���B)



	Car(��)�N���X
	Vehicle�N���X���p�������N���X
	Speed�̕ύX��������Car�p�Ɏ������Ă��������B




	����𗝉�����Ƃ����Ӗ��ŁA
	���̐e�N���X����h���N���X������Ă����Ăق����̂ŁA
	���̌v�Z������f�[�^�̐ݒ�̎d���́A
	�K���ɍs���Ă�����Č��\�ł��B



	�܂��A���̃N���X�͕K����o���Ă��������B
	���тɉ������܂��B




	���Ԃ�����΁A
	Vehicle�N���X���p�����āA
	bicycle(���]��)��bike(�I�[�g�o�C)
	�Ƃ������N���X�̍쐬��A
	Car������Ɍp������police car��Atruck�Ȃǂ�
	�N���X���쐬���Ă݂Ă��������B
*/
#include <stdio.h>

class Object
{
public:
	virtual void Update(float num)
	{
		x += num;
		printf("x = %f\n", x);
		printf("y = %f\n", y);
		printf("z = %f\n", z);
	};
private:
	float x = 0;
	float y = 0;
	float z = 0;

};
class Vehicle : public Object
{
public:
	virtual void setSpeed()
	{
		speed += accel;
		printf("speed = %f\n", speed);
	}
	void Update2()
	{
		Update(speed);
	}
private:
	float speed = 5.0f;
	float accel = 1.0f;
};
class Car : public Vehicle
{
	void Speed()
	{
		setSpeed();
	}
};