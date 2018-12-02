# ---- MAKE VARS ---- #
CC = x86_64-w64-mingw32-c++
CPPFLAGS = -std=c++17
VPATH = src
# ---- DIRECTORIES -- #
SRCDIR = src
OBJDIR = obj
APPDIR = rel
# ---- FILES 
SRCS = $(notdir $(wildcard $(SRCDIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJSFULL = $(addprefix $(OBJDIR)/, $(OBJS))
APP = structuredBinding.exe

.PHONY:all
.PHONY:clean 

all:$(APP)

$(APP):$(OBJS)
	$(CC) -o $(APPDIR)/$@ $(OBJSFULL)

%.o:%.cpp
	$(CC) -c -o $(OBJDIR)/$@ $< $(CPPFLAGS)

clean:
	rm $(APPDIR)/$(APP) $(OBJSFULL)
	