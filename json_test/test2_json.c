/*
 * =====================================================================================
 *
 *       Filename:  test2_json.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年11月15日 10时50分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Wind (wind), kai19961201@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cJSON.h"

#define MAXJSON 4


int main(void)
{
    printf("begin!\n");
    cJSON *jsons[MAXJSON];
    char *ptr1[] = {(char*)"Faye", (char*)"andy", (char*)"eddie"};
    char *ptr2[] = {(char*)"beijing", (char*)"HK", (char*)"Taiwan"};
    memset(jsons, 0, sizeof(jsons));
    for(int i = 0; i < MAXJSON; ++i)
    {
        jsons[i] = cJSON_CreateObject();
    }
    cJSON *jsonarray1 = cJSON_CreateArray();
    cJSON_AddItemToObject(jsons[0], "country", cJSON_CreateString("china"));
    printf("%s\n", cJSON_Print(jsons[0]));
    printf("---------\n");
    for(int i = 0; i < MAXJSON - 1; ++i)
    {
        cJSON_AddItemToObject(jsons[i+1], "name", cJSON_CreateString(ptr1[i]));
        cJSON_AddItemToObject(jsons[i+1], "address", cJSON_CreateString(ptr2[i]));
        cJSON_AddItemToArray(jsonarray1, jsons[i+1]);
    }
    
    cJSON_AddItemToObject(jsons[0], "stars", jsonarray1);
    printf("%s\n", cJSON_Print(jsons[0]));
    cJSON_Delete(jsons[0]);
    return 0;
}
