/********************************************************
* ������������λ����ת
* (��������������)ʹ��0��ģ�������
* ʹ��arduino IDE�Դ���Stepper.h���ļ�
*********************************************************/
#include <Stepper.h>
#define STEPS 100						// �������ò��������תһȦ�Ƕ��ٲ�

Stepper stepper(STEPS, 8, 9, 10, 11);	// attached to���ò�������Ĳ���������
int previous = 0;						// ������������洢��ʷ����

void setup()
{
	stepper.setSpeed(90);					// ���õ��ÿ���ӵ�ת��Ϊ90��
}

void loop()
{
	int val = analogRead(0);				// ��ȡ����������
	delay(200);
	if(abs(analogRead(0)-val)>=5)
	stepper.step(val - previous);			// �ƶ�����Ϊ��ǰ������ȥ��ʷ����
	previous = val;							// ������ʷ����
}
