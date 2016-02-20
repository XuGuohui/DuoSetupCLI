#ifndef _JSON_CMD_H_
#define _JSON_CMD_H_

void AssembleOtaCmdString(char *js, uint32_t file_len, uint32_t chunk_address, uint16_t chunk_size, uint8_t region);
void AssembleRstCmdString(char *js);
void AssembleVerCmdString(char *js);
void AssembleDevidCmdString(char *js);
void AssembleChkCredentCmdString(char *js); 
void AssembleScanApCmdString(char *js);
void AssembleInvalidCmdString(char *js);
int SendJSONCmd(char *js, char *rsp, uint16_t rsp_len);


#endif

