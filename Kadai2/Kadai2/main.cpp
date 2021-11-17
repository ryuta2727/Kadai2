/*
【問題】

Objectクラス
x, y, z座標を保存する変数、Update関数を持つ。
Update関数はvirtualで作ってください。



Vehicle(乗り物)クラス
Objectクラスを継承したクラス。
ここではSpeedUpクラスを追加してください。
またspeedとaccelの変数をここで追加してください。
SpeedUpクラスはvirtualで作ってください。
(正確な速度の処理を行いたい場合は、向きと加速度で、
	ベクトルを計算する方法でも構いません。)



	Car(車)クラス
	Vehicleクラスを継承したクラス
	Speedの変更をここでCar用に実装してください。




	流れを理解するという意味で、
	この親クラスから派生クラスを作っていってほしいので、
	中の計算処理やデータの設定の仕方は、
	適当に行ってもらって結構です。



	また、このクラスは必ず提出してください。
	成績に加味します。




	時間があれば、
	Vehicleクラスを継承して、
	bicycle(自転車)やbike(オートバイ)
	といったクラスの作成や、
	Carをさらに継承したpolice carや、truckなどの
	クラスを作成してみてください。
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
	virtual void setSpeed(float s)
	{
		speed = s;
		printf("speed = %f\n", speed);
	}
	virtual void setAccel(float a)
	{
		accel = a;
		printf("accel = %f\n", accel);
	}
	void Update2()
	{
		speed += accel;
		Object::Update(speed);
	}
private:
	float speed = 0;
	float accel = 0;
};
class Car : public Vehicle
{
public:
	void Update3()
	{
		Vehicle::Update2();
	}
};
int main()
{

	Car  car;
	Vehicle vehicle;

	car.setAccel(0.1f);

	for (int i = 0; i < 100; i++)
	{
		car.Update3();
	}

}