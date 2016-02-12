
#include "log.h"
#include "range_sensors.h"

//The proximity in cm from the sensor face
static float proxim;


LOG_GROUP_START(rs)
LOG_ADD(LOG_FLOAT, prox, &proxim)
LOG_GROUP_STOP(rs)

void setProximityReading(float reading){
	proxim = reading;
}

void getProximityReading(float* proximity){
	*proximity = proxim;
}
