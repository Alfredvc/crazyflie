/*
 * range_sensors.h
 *
 *  Created on: Feb 9, 2016
 *      Author: bitcraze
 */

#ifndef DRIVERS_INTERFACE_RANGE_SENSORS_H_
#define DRIVERS_INTERFACE_RANGE_SENSORS_H_

//Voltage to meters from sensor face
#define PROX_CONST 2.041

void setProximityReading(float reading);
void getProximityReading(float* proximity);


#endif /* DRIVERS_INTERFACE_RANGE_SENSORS_H_ */
