Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Kevin::
	trainerbattle_single TRAINER_KEVIN_1, Route102_Text_KevinIntro, Route102_Text_KevinDefeated, Route102_EventScript_KevinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_KevinRematch
	setvar VAR_0x8004, TRAINER_KEVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_KevinTryRegister
	msgbox Route102_Text_KevinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_KevinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_KevinRegisterMatchCall
	release
	end

Route102_EventScript_KevinRegisterMatchCall::
	msgbox Route102_Text_KevinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_KEVIN_1
	release
	end

Route102_EventScript_KevinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_KevinRegister
	msgbox Route102_Text_KevinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_KevinRegister::
	msgbox Route102_Text_KevinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KEVIN_1
	release
	end

Route102_EventScript_KevinRematch::
	trainerbattle_rematch TRAINER_KEVIN_1, Route102_Text_KevinRematchIntro, Route102_Text_KevinRematchDefeated
	msgbox Route102_Text_KevinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "Route 2\n"
	.string "{DOWN_ARROW} Riverside Town, {UP_ARROW} Morrow City$"

Route102_Text_RouteSignPetalburg:
	.string "Route 2\n"
	.string "{UP_ARROW} Morrow City, {DOWN_ARROW} Riverside Town$"
