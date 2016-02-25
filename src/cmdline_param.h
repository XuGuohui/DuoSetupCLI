#ifndef _CMDLINE_PARAM_H_
#define _CMDLINE_PARAM_H_

#define OTA_REGION			0
#define OTA_REGION_1		1
#define OTA_REGION_2		2
#define OTA_REGION_3		3
#define FAC_REGION			4

typedef enum {
	OPTION_NOT_SPECIFIED,
	OPTION_UPLOAD_FIRMWARE,
	OPTION_FETCH_VERSIONS,
	OPTION_CHECK_CREDENTIAL,
	OPTION_FETCH_DEV_ID,
	OPTION_SCAN_AP,   
}CmdlineOptions_t;    

typedef struct {
	uint8_t file_set;
	char *file_name;
	uint8_t region;
	uint8_t safe;
	uint8_t leave;
	uint8_t verbose;
}CmdLineParams_t;        

extern CmdlineOptions_t cmdline_option;
extern CmdLineParams_t cmdline_params;

int ParseCmdlineParameters(int arg, char *argv[]);
void PrintHelpMessage(void);


#endif
