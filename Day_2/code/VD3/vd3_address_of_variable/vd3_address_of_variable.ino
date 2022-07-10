
void setup() {
  Serial.begin(9600);
}
int data = 10;
int *c = (int *)0x100;
void loop() {
  char arr[50];
  sprintf(arr, "%p", &data);
  Serial.print("địa chỉ  của biến data: ");
  Serial.println(arr);
  Serial.print("Giá trị của biến data:  ");
  Serial.println(*c);
  delay(1000);
}
