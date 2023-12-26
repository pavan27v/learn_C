project specification:

 Implement a communication protocol for a temperature sensor.
 The communication protocol includes the framing of messages and handling sensor data.


Requirments 
1)  Message Structure
The communication protocol includes the following message structure:
Start of Frame (SOF)
Opcode
Type
Length
Value
Checksum

2) Supported Data Types
The protocol supports the following data types:
 Integer (INT)
 Character (CHAR)

3)Operations
SET: Set a value for a specific type.
GET: Retrieve data.

4)Error Handling
Implement appropriate error-handling mechanisms for invalid messages or checksum failures.

