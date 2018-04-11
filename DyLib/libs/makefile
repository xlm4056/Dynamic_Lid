CC=g++
exec=interface.so

obj=Proxy.o

$(exec):$(obj)
	$(CC) -o $(exec) -shared $(obj)

${obj}:%.o:%.cpp
	$(CC)  -fpic -c $<

.PHONY:clean
clean:
	-rm $(exec) $(obj)
