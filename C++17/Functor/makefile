# ------ MAKE ------------- #
CC = x86_64-w64-mingw32-c++
VPATH = src
CPPFLAGS = -std=c++17
# ------ Directories -------#
SRCDIR = src
OBJDIR = obj
APPDIR = rel
# ------ Files -------------#
SRCS = $(notdir $(wildcard $(SRCDIR)/*.cpp ))
OBJS = $(SRCS:.cpp=.o)
OBJSFULL = $(addprefix $(OBJDIR)/, $(OBJS))
APP = Functor.exe
# ------ Rules -------------#

.PHONY = all
.PHONY = clean
.PHONY = run

all:$(APP)

$(APP):$(OBJS)
	$(CC) -o $(APPDIR)/$@ $(OBJSFULL)
	
%.o:%.cpp
	$(CC) -c -o $(OBJDIR)/$@ $< $(CPPFLAGS)
	
clean:
	rm $(APPDIR)/$(APP) $(OBJSFULL)
	
run:
	$(APPDIR)/$(APP)