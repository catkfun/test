/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年11月14日 15时20分18秒
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
    char *data = (char*)"{\"name\":\"hello\",\"list\":[{\"name\":\"hello\"},{\"name\":\"hello\"}]}";
    cJSON *json = cJSON_Parse(data);
    cJSON_Print(json);
    printf("%s\n", data);
    cJSON_Delete(json);
    return 0;
}
