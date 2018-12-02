VPATH = src
OBJDIR = obj
SRCDIR = src
APPDIR = release
CC = x86_64-w64-mingw32-c++
CPPFLAGS += -I include -std=c++17
SRCS = $(notdir $(wildcard $(SRCDIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJSFULL = $(addprefix $(OBJDIR)/, $(OBJS))
APP = nestedNameSpace.exe

.PHONY: all
.PHONY: clean

all: $(APP)

$(APP): $(OBJS)	
	$(CC) -o $(APPDIR)/$@ $(OBJSFULL)
	
%.o:%.cpp
	$(CC) -c -o $(OBJDIR)/$@ $<
	
clean:
	rm $(APPDIR)/$(APP) $(OBJSFULL)
	
imprime:
	@echo $(APP) $(SRCS) $(OBJS) $(OBJSFULL)