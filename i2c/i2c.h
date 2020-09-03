/*
 * i2c.h
 *
 *  Created on: Sep. 2, 2020
 *      Author: Khalil Damouni
 */



int i2c_init(void);
int i2c_deinit(void);
int i2c_parent_operation(enum i2c_operation op, I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t Timeout);
int i2c_child_operation(enum i2c_operation op, I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t Timeout);