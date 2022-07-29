# vim:noet
CXX = c++
USE_LIBCXX = -stdlib=libc++ \
	-std=c++14
CXXFLAGS = $(USE_LIBCXX)
LDFLAGS = $(USE_LIBCXX)

OBJS = exercise.o \
	main.o

.PHONY: all
all: exercise

exercise: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o exercise

exercise.o: exercise.h
main.o: exercise.h

.PHONY: clean
clean:
	rm -f exercise $(OBJS)
