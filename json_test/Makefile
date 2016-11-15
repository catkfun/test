# make 
# MAKECMDGOALS是make时指定的终极目标
# 使用 Makefile 中目标名作为参数来执行“make” （格式
# 为 “make TARGET_NAME” ， 如： “make clean” ），MAKECMDGOALS
# 的值就是clean，可以用$()取出改值，
# 可以把这个目标指定为终极目标。
# 使用这种方式，我们也可以同时指定多个终极目标。
# joid 函数是字符串连接函数用法 $(join str1,str2)

target = $(join $(MAKECMDGOALS),.c)
cjson = cJSON.c
flags = -lm


$(MAKECMDGOALS):$(target)
	gcc -o $(MAKECMDGOALS) $(target) $(cjson) $(flags)




