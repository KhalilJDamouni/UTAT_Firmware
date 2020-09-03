/*
 * i2c.c
 *
 *  Created on: Sep. 2, 2020
 *      Author: Khalil Damouni
 */

#include "i2c.h"

I2C_HandleTypeDef hi2c;

int i2c_init()
{
    //Configuration of the HAL_I2C_MspInit() API
    hi2c1.Instance = I2C1;
	hi2c1.Init.Timing = 0x10707DBC;
	hi2c1.Init.OwnAddress1 = //I2C_ADDRESS;
	hi2c1.Init.AddressingMode = //I2C_ADDRESSINGMODE_7BIT;
	hi2c1.Init.DualAddressMode = //I2C_DUALADDRESS_DISABLE;
	hi2c1.Init.OwnAddress2 = //0;
	hi2c1.Init.OwnAddress2Masks = //I2C_OA2_NOMASK;
	hi2c1.Init.GeneralCallMode = //I2C_GENERALCALL_DISABLE;
	hi2c1.Init.NoStretchMode = //I2C_NOSTRETCH_DISABLE;

    //Configuration of the device using specified parameters
    HAL_I2C_Init(&hi2c);  
}


