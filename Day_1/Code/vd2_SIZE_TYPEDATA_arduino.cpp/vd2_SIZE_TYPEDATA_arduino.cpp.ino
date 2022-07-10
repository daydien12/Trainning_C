#define BYTE_SIZE 8
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sizeof_int = sizeof(int) * BYTE_SIZE;
  int sizeof_long = sizeof(long) * BYTE_SIZE;
  int sizeof_ptr = sizeof(&sizeof_int) * BYTE_SIZE;
  Serial.print("Size of int: ");
  Serial.println(sizeof_int);
  Serial.print("Size of long: ");
  Serial.println(sizeof_long);
  Serial.print("Size of pointer: ");
  Serial.println(sizeof_ptr);
  while(1);
}
