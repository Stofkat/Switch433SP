/*
* Scan for RF signals and map them for later usage
*/
#include <NewRemoteReceiver.h>
#include <RemoteReceiver.h>
#include "Configuration.h"
void setup() {
  Serial.begin(115200);//for debugging purposes.
  config_init();
  wifi_init();
  rf_init();
}

void loop() {
  wifi_handle_client();
}

      
