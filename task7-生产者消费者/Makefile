cc=gcc
EXEC=pthread
OBJS=pthread.o

all:$(EXEC)
$(EXEC):$(OBJS)
	$(CC) -o $@ $(OBJS) -lpthread

clean:
	-rm -f $(EXEC) $(OBJS)
