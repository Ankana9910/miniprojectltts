# Name of the project
PROJECT_NAME = CALCONV

BUILD = build

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


SRC = src/calconv.c

COV_SRC = test.c

TEST_SRC = src/calconv.c \
test/test.c \
unity/unity.c \

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INC	= -Iinc\
-Iunity\

INCLUDE_LIBS = -lcunit

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all

.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


cppcheck:
	cppcheck --enable=all $(SRC)
valgrind:
	valgrind ./$(PROJECT_OUTPUT)
		
doc:
	make -C ./documentation
	
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
	
$(BUILD):
	mkdir build

























