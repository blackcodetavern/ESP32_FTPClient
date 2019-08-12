#include <WiFi.h>
#include <WiFiClient.h>    
#include "ESP32_FTPClient.h"
#include "octocat.h"

#define WIFI_SSID ""
#define WIFI_PASS ""

char ftp_server[] = "";
char ftp_user[]   = "";
char ftp_pass[]   = "";

char working_dir[]   = ".";


ESP32_FTPClient ftp (ftp_server,ftp_user,ftp_pass, 5000, 2);


void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  
  Serial.println("Connecting Wifi...");
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.println("Connecting to WiFi..");
      
  }
  Serial.println("IP address: ");
      
  Serial.println(WiFi.localIP());

  ftp.OpenConnection();

  // Create the new image file and send the image
  ftp.ChangeWorkDir(working_dir);
  ftp.InitFile("Type I");
  ftp.NewFile("octocat.jpg");
  ftp.WriteData( octocat_pic, sizeof(octocat_pic) );
  ftp.CloseFile();

  //Create the file new and write a string into it
  ftp.InitFile("Type A");
  ftp.NewFile("hello_world.txt");
  ftp.Write("Hello World");
  ftp.CloseFile();

  //Append an string to a file (it does not need to exist)
  ftp.InitFile("Type A");
  ftp.AppendFile("hello_world_append.txt");
  ftp.Write("Hello World");
  ftp.CloseFile();
}

void loop() {
  delay(1000);
}
