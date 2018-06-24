.PHONY: clean All

All:
	@echo "----------Building project:[ 1010 - Debug ]----------"
	@cd "1010" && "$(MAKE)" -f  "1010.mk"
clean:
	@echo "----------Cleaning project:[ 1010 - Debug ]----------"
	@cd "1010" && "$(MAKE)" -f  "1010.mk" clean
