int sensor_track[5] = {8, 9, 10, 11, 12}; 
bool nilai_sense[5] = {0, 0, 0, 0, 0}; 

void setup()
{
  Serial.begin(9600);
  for (int sensor_track_id = 0; sensor_track_id < 5; sensor_track_id++) 
  {
    pinMode(sensor_track[sensor_track_id], INPUT); 
  }
}

void loop()
{
  baca_sensor_track();
  Serial.print("nilai_sensor[0]: ");
  Serial.println(nilai_sense[0]); 
  Serial.print("nilai_sensor[1]: ");
  Serial.println(nilai_sense[1]); 
  Serial.print("nilai_sensor[2]: ");
  Serial.println(nilai_sense[2]); 
  Serial.print("nilai_sensor[3]: ");
  Serial.println(nilai_sense[3]); 
  Serial.print("nilai_sensor[4]: ");
  Serial.println(nilai_sense[4]); 
  delay(500);
}

void baca_sensor_track()
{
  for (int nilai_sense_id = 0; nilai_sense_id < 5; nilai_sense_id++) 
  {
    nilai_sense[nilai_sense_id] = digitalRead(sensor_track[nilai_sense_id]); 
  }
}
