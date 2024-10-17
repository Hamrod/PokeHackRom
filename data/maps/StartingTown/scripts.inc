StartingTown_MapScripts::
	.byte 0


StartingTown_EventScript_PlayersHouseSign::
# 4 "data/maps/StartingTown/scripts.pory"
	msgbox StartingTown_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


StartingTown_EventScript_TownSign::
# 8 "data/maps/StartingTown/scripts.pory"
	msgbox StartingTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


StartingTown_EventScript_PlayersHouseSign_Text_0:
# 4 "data/maps/StartingTown/scripts.pory"
	.string "Maison de {PLAYER}$"

StartingTown_EventScript_TownSign_Text_0:
# 8 "data/maps/StartingTown/scripts.pory"
	.string "Starting Town la ville de tout les\n"
	.string "départs$"
