.PHONY: clean All

All:
	@echo "----------Building project:[ 1008 - Debug ]----------"
	@cd "1008" && "$(MAKE)" -f  "1008.mk"
clean:
	@echo "----------Cleaning project:[ 1008 - Debug ]----------"
	@cd "1008" && "$(MAKE)" -f  "1008.mk" clean
