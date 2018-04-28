$(OBJ_DOS16_DIR)/keyboard.obj : .AUTODEPEND $(SRC_DIR)/event/keyboard.c
	@$(MKDIR_CMD) $(OBJ_DOS16_DIR)
	$(CC_DOS16) -c $(CPPFLAGS) $(CFLAGS_DOS16) $[* -fo=$@ -fr=$*.err

$(OBJ_DOS16_DIR)/mouse.obj : .AUTODEPEND $(SRC_DIR)/event/mouse.c
	@$(MKDIR_CMD) $(OBJ_DOS16_DIR)
	$(CC_DOS16) -c $(CPPFLAGS) $(CFLAGS_DOS16) $[* -fo=$@ -fr=$*.err

$(OBJ_DOS32_DIR)/keyboard.obj : .AUTODEPEND $(SRC_DIR)/event/keyboard.c
	@$(MKDIR_CMD) $(OBJ_DOS32_DIR)
	$(CC_DOS32) -c $(CPPFLAGS) $(CFLAGS_DOS32) $[* -fo=$@ -fr=$*.err

$(OBJ_DOS32_DIR)/mouse.obj : .AUTODEPEND $(SRC_DIR)/event/mouse.c
	@$(MKDIR_CMD) $(OBJ_DOS32_DIR)
	$(CC_DOS32) -c $(CPPFLAGS) $(CFLAGS_DOS32) $[* -fo=$@ -fr=$*.err
