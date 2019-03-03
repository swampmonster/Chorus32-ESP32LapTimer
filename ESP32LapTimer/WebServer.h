#pragma once
#include <esp_wifi.h>
#include <DNSServer.h>
//#include <WiFiClient.h>
#include <FS.h>
#include <WiFiUdp.h>
#include "WebServer.h"
#include <WebServer.h>
#include <ESPmDNS.h>
#include "SPIFFS.h"
#include <Update.h>

const byte DNS_PORT = 53;
IPAddress apIP(192, 168, 4, 1);
DNSServer dnsServer;
WebServer  webServer(80);
//WiFiClient client = webServer.client();

//flag to use from web update to reboot the ESP
bool shouldReboot = false;
const char NOSPIFFS[] PROGMEM = "You have not uploaded the SPIFFs filesystem, Please install the <b><a href=\"https://github.com/me-no-dev/arduino-esp32fs-plugin\">following plugin</a></b> then select <b>Tools > ESP32 Sketch Data Upload</b>.<br>. The web interface will not work until you do this.";
