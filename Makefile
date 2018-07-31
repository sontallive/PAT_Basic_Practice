.PHONY: clean All

All:
	@echo "----------Building project:[ A1019 - Debug ]----------"
	@cd "A1019" && "$(MAKE)" -f  "A1019.mk"
clean:
	@echo "----------Cleaning project:[ A1019 - Debug ]----------"
	@cd "A1019" && "$(MAKE)" -f  "A1019.mk" clean
