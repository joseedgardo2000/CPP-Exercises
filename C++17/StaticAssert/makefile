CC = x86_64-w64-mingw32-c++
CPPFLAGS = -std=c++11
VPATH = src
# ----- Directories ----- #
OBJDIR = obj
APPDIR = rel
SRCDIR = src
# ----- Directories ----- #
SRCS = $(notdir $(wildcard $(SRCDIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJSFULL = $(addprefix $(OBJDIR)/,$(OBJS))
APP = staticAssert.exe

.PHONY:all
.PHONY:clean

all:$(APP)

$(APP):$(OBJS)
	$(CC) -o $(APPDIR)/$@ $(OBJSFULL)
	
%.o:%.cpp
	$(CC) -c -o $(OBJDIR)/$@ $<
	
clean:
	rm $(APPDIR)/$(APP) $(OBJSFULL)