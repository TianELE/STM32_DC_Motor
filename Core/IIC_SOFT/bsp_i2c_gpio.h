
#include "main.h"

#define I2C_WR	0		/* д����bit */
#define I2C_RD	1		/* ������bit */


/* ����I2C�������ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����4�д��뼴������ı�SCL��SDA������ */
#define GPIO_PORT_I2C	GPIOB			/* GPIO�˿� */
#define I2C_SCL_PIN		GPIO_PIN_8			/* ���ӵ�SCLʱ���ߵ�GPIO */
#define I2C_SDA_PIN		GPIO_PIN_9			/* ���ӵ�SDA�����ߵ�GPIO */

#define I2C_SCL_1()  HAL_GPIO_WritePin(GPIO_PORT_I2C, I2C_SCL_PIN,GPIO_PIN_SET)	/* SCL = 1 */
#define I2C_SCL_0()  HAL_GPIO_WritePin(GPIO_PORT_I2C, I2C_SCL_PIN,GPIO_PIN_RESET)		/* SCL = 0 */

#define I2C_SDA_1()  HAL_GPIO_WritePin(GPIO_PORT_I2C, I2C_SDA_PIN,GPIO_PIN_SET)		/* SDA = 1 */
#define I2C_SDA_0()  HAL_GPIO_WritePin(GPIO_PORT_I2C, I2C_SDA_PIN,GPIO_PIN_RESET)		/* SDA = 0 */

#define I2C_SDA_READ()  HAL_GPIO_ReadPin(GPIO_PORT_I2C, I2C_SDA_PIN)	/* ��SDA����״̬ */


void i2c_Start(void);
void i2c_Stop(void);
void i2c_SendByte(uint8_t _ucByte);
uint8_t i2c_ReadByte(void);
uint8_t i2c_WaitAck(void);
void i2c_Ack(void);
void i2c_NAck(void);
void i2c_CfgGpio(void);
uint8_t i2c_CheckDevice(uint8_t _Address);



