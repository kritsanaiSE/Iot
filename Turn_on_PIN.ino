void setup() {
  // put your setup code here, to run once:
  pinMode(17, OUTPUT); //เรียกใช้งาน PIN และเลือกโหมด
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(17, LOW); // สั่งให้ PIN ทำงาน HIGH=เปิด LOW=ปิด
}
