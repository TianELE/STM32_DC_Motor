STM32_DC_Motor
--------------
    `stm32`/`直流电机`/`小车`/`测速码盘`/`OLED`
    使用`STM32F103C8T6`为控制器,由STM32CubeMX生成`HAL`库基本代码,MDK5编译.
    使用4个通道定时器，两个输出PWM信号控制两个直流电机驱动，另两路作为输入捕获通道测量测速码盘.
    软件模拟IIC驱动128*64的OLED.