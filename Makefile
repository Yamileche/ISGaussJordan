PROJECT=main
INCLUDE=includes
OBJS=objs
SOURCES=sources
	

$(PROJECT): $(SOURCES)/$(PROJECT).c $(OBJS)/Functions.o
	gcc -o $@ $^ -I$(INCLUDE)/

$(OBJS)/Functions.o: $(SOURCES)/Functions.c
	gcc -c -o $@ $^ -I$(INCLUDE)/

clear:
	rm $(OBJS)/*.o $(PROJECT)


