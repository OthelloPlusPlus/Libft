include $(shell find . -type f -name 'config.mk' | head -1)
include $(shell find . -type f -name 'colors.mk' | head -1)

NAME :=	libft.a

CC :=	gcc
CFLAGS	+=	-Wall -Wextra -Werror
DEPFLAGS +=	-MMD -MF $(DEP_DIR)$(DELIM)$*.d
INCL_HDR :=	$(shell find . -type f -name '*.h' -exec dirname "{}" \; | \
					uniq | sed -e 's/^/-I/g')

SRC_DIR :=	src
OBJ_DIR :=	obj
DEP_DIR :=	dep

OBJ_DIRS =	$(OBJ_DIR) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_MEM) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_FT_PRINTF)
DIRS =	$(OBJ_DIRS) \
		$(OBJ_DIRS:$(OBJ_DIR)%=$(DEP_DIR)%)

SRC =	$(SRC_MAIN) \
		$(SRC_MEM:%.c=			$(SRC_DIR)$(DELIM)$(SRC_DIR_MEM)$(DELIM)%.c) \
		$(SRC_FT_PRINTF:%.c=	$(SRC_DIR)$(DELIM)$(SRC_DIR_FT_PRINTF)$(DELIM)%.c)

SRC_MAIN :=	

# SRC_DIR_MEM :=	mem
# SRC_MEM :=		test.c test2.c test3.c

SRC_DIR_FT_PRINTF :=	ft_printf
SRC_FT_PRINTF :=	ft_printf.c		ft_dprintf.c\
					ft_printf_utils.c\
					ft_printf_utils_convert_arg.c\
					ft_printf_utils_convert_string.c\
					ft_printf_utils_convert_string_fieldwidth.c\
					ft_printf_utils_convert_string_precision.c\
					ft_printf_utils_flag_struct.c


OBJ :=	$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
DEP :=	$(SRC:$(SRC_DIR)%.c=$(DEP_DIR)%.d)

all: $(DIRS) $(NAME)

$(NAME): $(OBJ)
	@printf	"\t$(C_DCYAN)Creating library $(C_CYAN)%s$(C_DCYAN)...$(C_RESET)\n"\
			"$(NAME)"
# Linking object files into static library
	@ar -rc $(NAME) $(OBJ) 2> $(DEVNULL)
	@printf	"$(CC_1UP)\t$(C_DGREEN)Static archive $(C_GREEN)%s$(C_DGREEN) created.\n"\
			"$(NAME)"

$(OBJ_DIR)$(DELIM)%.o: $(SRC_DIR)$(DELIM)%.c
	@printf	"$(CC_LINE)\t$(C_LBLUE)Compiling $(C_CYAN)%s$(C_LBLUE)...$(C_RESET)\n" $<
# Compiling object files
	@$(CC) $(CFLAGS) $(DEPFLAGS) $(INCL_HDR) -c $< -o $@  && \
	printf	"$(CC_1UP)\t$(C_DCHRT)Compiled $(C_CHRT)%s$(C_DCHRT).$(C_RESET)\n" $@ || \
	(printf	"$(CC_1UP)\t$(C_DRED)Failed to compile $(C_RED)%s$(C_RESET)\n" $@ && exit 1)

-include $(DEP)

$(DIRS):
	@printf	"$(CC_LINE)$(C_DCYAN)Creating directory $(C_CYAN)%s$(C_DCYAN).$(C_RESET)\n"	$@
# Making missing directories
	@mkdir -p $@
	@printf	"$(CC_1UP)\t$(C_DCHRT)Created directory $(C_CHRT)%s$(C_DCHRT).$(C_RESET)\n" $@


clean:
	@printf	"$(CC_LINE)$(C_DORANGE)Removing object files...$(C_RESET)\n"
# Removing object files
	@$(RMFILE) $(OBJ)
	@printf	"$(CC_1UP)$(C_DPURPLE)Object files removed.$(C_RESET)\n"
# Removing dependency files
	@printf	"$(CC_LINE)$(C_DORANGE)Removing dependency files...$(C_RESET)\n"
	@$(RMFILE) $(DEP)
	@printf	"$(CC_1UP)$(C_DPURPLE)Dependency files removed.$(C_RESET)\n"

fclean: clean
	@printf	"$(CC_LINE)$(C_DORANGE)Removing empty directories...$(C_RESET)\n"
# Removing empty directories
	@$(RMDIR) $(DIRS) $(RMDIR_FLAGS) 2> $(DEVNULL) || true
	@printf	"$(CC_1UP)$(C_DPURPLE)Empty directories removed.$(C_RESET)\n"
# Removing Static archive
	@printf	"$(CC_LINE)$(C_DORANGE)Removing $(C_ORANGE)%s$(C_DORANGE)...$(C_RESET)\n"\
			$(NAME)
	@$(RMFILE) $(NAME)
	@printf	"$(CC_1UP)$(C_PURPLE)%s$(C_DPURPLE) removed.$(C_RESET)\n"\
			$(NAME)

re: fclean all

.PHONY: all clean fclean re
