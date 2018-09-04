object= main.o clock.o delay.o

shizhong: $(object)
	gcc -o shizhong  $(object)

main.o:

clock.o:

delay.o:

clean:
	rm *.o
