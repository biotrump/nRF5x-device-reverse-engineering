
/********************************************************************************************************/
/************************ DEFINITIONS *******************************************************************/
/********************************************************************************************************/

#define HR_LED_PIN         4
#define HR_DETECTOR        29
#define TOUCH_BUTTON       30
#define VIBRATE_PIN        8
#define BATTERY_PIN        28
#define OLED_CS            15
#define OLED_RES           14
#define OLED_DC            13
#define OLED_SCL           12
#define OLED_SDA           11
#define KX126_CS           24
#define KX126_SDI          19
#define KX126_SDO          20
#define KX126_SCL          18
#define KX126_INT          23
#define BLE_REQ   10
#define BLE_RDY   2
#define BLE_RST   9


/********************************************************************************************************/
/************************ SETUP *************************************************************************/
/********************************************************************************************************/

void setup() 
{

  // HEART RATE SENSOR GREEN LED 
    pinMode(HR_LED_PIN, OUTPUT);  digitalWrite(HR_LED_PIN, 0);

}

/********************************************************************************************************/
/************************ LOOP **************************************************************************/
/********************************************************************************************************/

void loop()
{     

    digitalWrite(HR_LED_PIN, 1);
    delay(1000);
    digitalWrite(HR_LED_PIN, 0);
    delay(1000);
 
} 

