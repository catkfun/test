/*
 * =====================================================================================
 *
 *       Filename:  createjson.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年11月14日 16时29分37秒
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
#include "cJSON.h"

int main(void)
{
    printf("----------\n");
    cJSON *jsonroot = cJSON_CreateObject();
    cJSON *jsonarray = cJSON_CreateArray();
    cJSON *item1 = cJSON_CreateObject();
    cJSON *item2 = cJSON_CreateObject();
    cJSON *item4 = cJSON_CreateObject();
    cJSON_AddItemToObject(item1, "item1", cJSON_CreateString("孩子"));
    printf("%s\n", cJSON_Print(item1));
    cJSON_AddItemToObject(item4, "item4", cJSON_CreateString("item4"));
    cJSON_AddItemToArray(jsonarray, item4);
    cJSON_AddItemToObject(jsonroot, "child", item1);
    printf("----------\n");
    printf("%s\n", cJSON_Print(jsonroot));
    
    cJSON_AddItemToObject(item2, "test", jsonarray);
    cJSON_AddItemToObject(jsonroot, "item2", item2);
    printf("----------\n");
    printf("%s\n", cJSON_Print(jsonroot));
    cJSON *item3 = cJSON_CreateObject();
    cJSON_AddItemToObject(item3, "item3", cJSON_CreateString("item3"));
    cJSON_AddItemToObject(jsonroot, "test2", item3);
    
    printf("----------\n");
    printf("%s\n", cJSON_Print(jsonroot));
    
    cJSON_Delete(jsonroot);
    printf("----------\n");
    return 0;
}
