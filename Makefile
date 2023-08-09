# include $(shell powershell -Command "(Get-ChildItem -Recurse -Filter 'config.mk' | Select-Object -First 1).FullName")
# E:\hardcoded_correct_path\config.mk

ifeq	($(OS), Windows_NT)
    include $(shell cmd /C "where /r . config.mk")
else
    include $(shell find . -type f -name 'config.mk' | head -1)
endif
# include E:\Codeer\templibft\mkf\config.mk
MKF_DIR = mkf

# all:

# all:
# 	$(STDOUT) $(MKF_DIR)$(DELIM)config.mk$(STDOUT)
all: libft

libft:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk

norminette:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)miscellaneous.mk norm

norm: norminette

signature:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)miscellaneous.mk signature TIME=3 MAX=23

clean:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk clean

fclean:
	@$(RMFILE) .DS_Store
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk fclean

re:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk re

bonus: all

.PHONY: all clean fclean re\
		libft \
		norminette norm signature
