# Makefile
# Author: Nohemi Morales

# [target] : [dependencies]
	
#CXX=g++ -std=c++11 -g
dependencies =dayOfYear.o

dayOfYear: ${dependencies}
	${CXX} -o $@ $^

clean:
	rm -f *.o dayOfYear