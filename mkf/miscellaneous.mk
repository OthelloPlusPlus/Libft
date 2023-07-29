include $(shell find . -type f -name 'config.mk' | head -1)
include $(shell find . -type f -name 'colors.mk' | head -1)

MKF_DIR = mkf

norm:
	@if [ $(shell norminette src/*/*.c hdr/*.h | grep -w Error! | wc -l) == 0 ]; then\
		printf	"$(C_CHRT)$(C_BOLD)%s\t$(C_GREEN)[OK]$(C_RESET)\n"	\
		"$(shell norminette -v)";\
	else\
		printf	"$(C_LRED)$(C_BOLD)%s\t$(C_RED)[KO]$(C_RESET)\n"	\
		"$(shell norminette -v)";\
		printf	"$(C_LORANGE)";\
		norminette src/*/*.c hdr/*.h | grep -w Error | sed 's/Error:/    Error:/g';\
		printf	"$(C_RESET)\n";\
	fi

signature:
	printf	"$(CC_CLEAR)"
	@time=$(TIME); max=$(MAX); count=$$max; while [[ $$count -ge 0 ]] ; do \
		((CBM_R=	(255	* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBM_G=	(128	* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBM_B=	(0		* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBS_R=	(128	* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBS_G=	(64		* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBS_B=	(0		* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBB_R=	(192	* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBB_G=	(192	* ($$max-$$count) + 30*$$count)	/ $$max)); \
		((CBB_B=	(192	* ($$max-$$count) + 30*$$count)	/ $$max)); \
		$(MAKE) -f $(MKF_DIR)$(DELIM)miscellaneous.mk TIME=$$time MAX=$$max CBM='\x1b[48;2;'$$CBM_R';'$$CBM_G';'$$CBM_B'm' CBS='\x1b[48;2;'$$CBS_R';'$$CBS_G';'$$CBS_B'm' CBB='\x1b[48;2;'$$CBB_R';'$$CBB_G';'$$CBB_B'm' signature_print ; \
		((count = count - 1)) ; \
	done

signature_print:
	@SLEEP_TIME=$(shell echo "scale=7; $(TIME)/$(MAX)" | bc);\
	sleep $$SLEEP_TIME
	@printf	"$(CC_TOP)"
	@echo "\n\
	     $(CBB)       $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)       $(C_RESET)\n\
	    $(CBB) $(C_RESET)       $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)       $(CBB) $(C_RESET)\n\
	\n\
	       $(CBS) $(CBM)   $(CBS)  $(C_RESET)                                                                   \n\
	    $(CBS)     $(CBM)     $(CBS)    $(C_RESET) $(CBS)  $(CBM) $(CBS) $(C_RESET)   $(CBS) $(CBM) $(CBS) $(C_RESET)                              $(CBS)  $(CBM) $(C_RESET)                  \n\
	 $(CBS)  $(CBM)   $(CBS) $(C_RESET)   $(CBS)    $(CBM)   $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)                        $(CBS)   $(C_RESET)   $(CBS)$(CBM)   $(C_RESET)                  \n\
	  $(CBS) $(CBM)   $(CBS) $(C_RESET)      $(CBS) $(CBM)   $(C_RESET) $(CBS) $(CBM)            $(CBS) $(C_RESET)                    $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)                  \n\
	  $(CBS)  $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM) $(CBS) $(C_RESET) $(CBS) $(CBM)   $(CBS)   $(CBM)  $(CBS)    $(CBM)  $(CBS)     $(C_RESET)            $(CBS)   $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)           $(CBS) $(C_RESET)      \n\
	$(CBS)  $(CBM) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)   $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)        $(CBS)   $(C_RESET)     $(CBS)  $(CBM)     $(CBS)  $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)        $(CBS)  $(CBM)   $(CBS)   $(C_RESET) $(CBS) $(C_RESET)\n\
	 $(CBS) $(CBM) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)   $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS)   $(CBM)   $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS)      $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)      $(CBS) $(CBM)  $(CBS)  $(CBM)    $(CBS)  $(C_RESET) \n\
	 $(CBS) $(CBM) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)   $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS)    $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)      $(CBM)   $(C_RESET)   $(CBM)   $(CBS) $(C_RESET)  \n\
	 $(CBS) $(CBM) $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM) $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)    $(CBS)  $(C_RESET) $(CBS)  $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)      $(CBM)   $(C_RESET)   $(CBM)   $(CBS) $(C_RESET)  \n\
	 $(CBS) $(CBM) $(CBS) $(CBM)  $(CBS) $(C_RESET)      $(CBS) $(CBM) $(CBS) $(C_RESET)   $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(C_RESET)      $(CBM)   $(C_RESET)   $(CBM)   $(CBS) $(C_RESET)  \n\
	 $(CBS) $(C_RESET) $(CBS) $(CBM)  $(CBS)  $(C_RESET)    $(CBS)   $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS) $(CBM)  $(CBS) $(C_RESET)  $(CBS) $(CBM) $(CBS)  $(C_RESET) $(CBS) $(CBM)  $(CBS) $(C_RESET)   $(CBM)   $(CBS) $(C_RESET)    $(CBS) $(CBM)   $(CBS) $(C_RESET)  $(CBM)  $(CBS) $(C_RESET)   \n\
	  $(CBS)  $(CBM)     $(CBS)   $(C_RESET)       $(CBS) $(CBM)  $(CBS) $(C_RESET) $(CBS)  $(CBM)    $(CBS) $(C_RESET) $(CBS) $(CBM)     $(CBS)    $(CBM)      $(CBS) $(C_RESET)  $(CBS)  $(CBM)    $(CBS)  $(CBM)     $(CBS)    $(CBM)     $(CBS)  $(C_RESET)     \n\
	      $(CBS)   $(C_RESET)          $(CBS) $(CBM)  $(CBS) $(C_RESET)    $(CBS)  $(C_RESET)     $(CBS)   $(C_RESET)     $(CBS)     $(C_RESET)       $(CBS)   $(C_RESET)   $(CBS)   $(C_RESET)      $(CBS)   $(C_RESET)        \n\
	                   $(CBS) $(CBM)  $(CBS) $(C_RESET)                                                         \n\
	                   $(CBS)   $(C_RESET)                                                               \n\
	\n\
	    $(CBB) $(C_RESET)       $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)       $(CBB) $(C_RESET)\n\
	     $(CBB)       $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)        $(C_RESET)        $(CBB)       $(C_RESET)\n\
	"


.PHONY: norm