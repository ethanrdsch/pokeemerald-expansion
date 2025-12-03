GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey, did you see the sign?\n"
	.string "There are ghosts down there!\p"
	.string "Well, if you're really set on going,\n"
	.string "this may help you fend them off.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "Or not…\p"
	.string "I wouldn't actually know.\n"
	.string "I'm too scared to go find out.$"

GraniteCave_1F_Text_AfterTalking:
	.string "Good luck down there.$"
