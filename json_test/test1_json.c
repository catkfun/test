/*
 * =====================================================================================
 *
 *       Filename:  test1_json.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年11月15日 10时00分21秒
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

int main(void)
{
    cJSON *jsons[24];
    FILE *fp;
    fp = fopen("./json.save", "w+");
    memset(jsons, 0, sizeof(jsons));
    cJSON *jsonroot = cJSON_CreateObject();
    cJSON_AddItemToObject(jsons[0] = cJSON_CreateObject(), "Cpation1", cJSON_CreateString("第一个value!"));




    cJSON_AddItemToObject(jsonroot, "1", jsons[0]);
    char *ptr = cJSON_Print(jsonroot);
    printf("json:\n%s\n", ptr);
    fwrite(ptr, 1, strlen(ptr), fp);
    fclose(fp);
    cJSON_Delete(jsonroot);

    return 0;
}
