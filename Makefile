.PHONY: clean All

All:
	@echo "----------Building project:[ 1013 - Debug ]----------"
	@cd "1013" && "$(MAKE)" -f  "1013.mk"
clean:
	@echo "----------Cleaning project:[ 1013 - Debug ]----------"
	@cd "1013" && "$(MAKE)" -f  "1013.mk" clean
