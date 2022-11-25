/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "AlineDibbern"
#define IO_KEY       "aio_zDQh83Ncd3fIIDBuNGPqJrpyUJpf"

/******************************* WIFI **************************************/

#define WIFI_SSID "Dibbern"
#define WIFI_PASS "nikita12"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

/****************************************************************************/
