CC=g++
exec=sample
#obj 多个需空格隔开
obj=sample.o

$(exec):$(obj)
	$(CC) -o $(exec) $(obj) -ldl

${obj}:%.o:%.cpp
	$(CC) -c $<

.PHONY:clean
clean:
	-rm $(exec) $(obj)
