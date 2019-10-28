#include <stdio.h>


typedef struct FRAME_START_STRUCT
{
   unsigned int bit: 1;
} frame_start_T;

typedef struct FRAME_END_STRUCT
{
   unsigned int EOF6: 1;
   unsigned int EOF5: 1;
   unsigned int EOF4: 1;
   unsigned int EOF3: 1;
   unsigned int EOF2: 1;
   unsigned int EOF1: 1;
   unsigned int EOF0: 1;
} frame_end_T;

typedef struct ARBITRATION_FIELD_STRUCT
{
    unsigned int ID10: 1;
    unsigned int ID9: 1;
    unsigned int ID8: 1;
    unsigned int ID7: 1;
    unsigned int ID6: 1;
    unsigned int ID5: 1;
    unsigned int ID4: 1;
    unsigned int ID3: 1;
    unsigned int ID2: 1;
    unsigned int ID1: 1;
    unsigned int ID0: 1;
    unsigned int request_remote: 1;
} arbitration_field_T;

typedef struct CONTROL_FIELD_STRUCT
{
    unsigned int ID_external_bit: 1;
    unsigned int reserved: 1;
    unsigned int DL3: 1;
    unsigned int DL2: 1;
    unsigned int DL1: 1;
    unsigned int DL0: 1;
} control_field_T;

typedef struct DATA_FIELD_STRUCT
{
    unsigned int DB7: 1;
    unsigned int DB6: 1;
    unsigned int DB5: 1;
    unsigned int DB4: 1;
    unsigned int DB3: 1;
    unsigned int DB2: 1;
    unsigned int DB1: 1;
    unsigned int DB0: 1;
} data_field_T;

typedef struct CRC_FIELD_STRUCT
{
    unsigned int CRC14: 1;
    unsigned int CRC13: 1;
    unsigned int CRC12: 1;
    unsigned int CRC11: 1;
    unsigned int CRC10: 1;
    unsigned int CRC9: 1;
    unsigned int CRC8: 1;
    unsigned int CRC7: 1;
    unsigned int CRC6: 1;
    unsigned int CRC5: 1;
    unsigned int CRC4: 1;
    unsigned int CRC3: 1;
    unsigned int CRC2: 1;
    unsigned int CRC1: 1;
    unsigned int CRC0: 1;
} CRC_field_T;

typedef struct CAN_STRUCT
{
    frame_start_T* frame_start;

    arbitration_field_T* arbitration_field;
    
    control_field_T* control_field;

    data_field_T* data_field;

    unsigned int acknowledge_slot_bit: 1;
    unsigned int acknowledge_delimiter: 1;

    frame_end_T* frame_end;
} can_T;

int main(int argc, char* argv[])
{
}
