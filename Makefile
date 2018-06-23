.PHONY: clean All

All:
	@echo "----------Building project:[ 1009 - Debug ]----------"
	@cd "1009" && "$(MAKE)" -f  "1009.mk"
clean:
	@echo "----------Cleaning project:[ 1009 - Debug ]----------"
	@cd "1009" && "$(MAKE)" -f  "1009.mk" clean
