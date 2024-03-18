#NOTES ON FATAL FRAME 1:

<p>A list of global structs and their functionality.<br>
- sys_wrk: Handles all base operation, is used to check if ingame or outgame.
- outgame_wrk: Handles title screen and any related modes like scene select or some debug screens.
- ingame_wrk: Mode of ingame Game. Mode relates to ingame, Game seemingly relates to Game function.
- ene_wrk: An array of 4 slots. For some reason active enemies appear in the third slot.

### Ingame_wrk:
  Mode 4: "reset"
  Mode 7: "Event (Based on night and progress)"
  Mode 8: "Special Event (This is controlled by a table)"
  Mode 0x10: "save point"
  Mode 0x18: "New Game"
  Mode 20 Stts 60: "Game Over"

- Ene_Wrk:
  stts 0x2: "battle mode"

  # Movie_On: Type being played, 3 is FMV, 4 is ingame, the actual index is Event_No
  # These are controlled by EventMain, reg t2: EvtNo a0: Ingame_wrk mode
- Event_Wrk:
  Event_No 0xb / 0x1: "There's an old camera here. I think I can take a shot (opens save screen) This is the default event when nothing is selected"
  Event_No 0x16: "Ingame Cutscene - Room matters"
  Event_No 0x20": "Give next key Item Or, play next ingame cutscene?"
  Event_No 0x21: "FMV"
  Event_No 22 Movie_On is 2 initally, changes to 4 End_Ev 185: "Miku slowly approaches camera"
  Event_No 23 Movie_On 4 End_Ev 185: "Did ... Something happen to my brother? *Kirie appears in the background surprising Miku*
  Event_No 26 Msg_Init 1: "Its locked I hear something on the other side of the door"
  Event_No 0x28: "SlidingStonePuzzle:"
  Event_No 30 Movie_on 0x4 End_Ev 195: "(Night 1) Should I take a photo?"
  Event_No 0x32: "FolkloristsNotes"
  Event_No 0x3a: "I put the photo in my file"
  Event_No 0x3c / 0x3d: "Uhhhhhh?"
  Event_No 46 Btl_Ene 28 Btl_Lock 1 Movie_On 4: "Koji first fight" Night 1. Door puzzle Night 3
  Event_No 0x5a": "Door Unlock and cutscene"
  Event_No 91 Movie_On 3 End_Ev 185: "Miku! The first vision with Mafuyu"
  Event_No 100": "Key Item (Sacred Ropes)"
  Event_No 102 - 105: "Buddah rope placed - ingame_wrk stts == 40"
  Event_No 0x6e": "Stakes are at the base of the Buddha with the damaged right hand use sacred ropes? (Hour 3)"
  Event_No 0x78": "Door Number Puzzle (Hour / night 3)"
  Event_No 0x82: "I can't go through from this side"
  Event_No 0x8c: "night 2?"
  Event_No 0x8d": "Outside Takamine's shrine. Grabbed buddah cutscene"
  Event_No 0x96": "This only works night 1, Transition to night 2, will read ingame_wrk msn_no for what night. Defaults to 1 not 0"
  Event_No 200: "A row of 4 Buddhas, there's space for one in the middle. Place the headless buddah?"
  Event_No 225 Movie_On 4 End_Ev 185: "First encounter with the camera"
  Event_No 315: "The alter door is opened"
  Event_No 335 Movie_on 3: "Himuro Master pre fight cutscene"
  Event_No 465 Movie_On 4 Btl_Ene 285 End_Ev 095: "(Night 1): Koji first fight scene"

  Btl_Ene 1   End_Ev 83: "Roopeess, Roopes. Always more rooopeess"
  

 <p>Special_Event_no 127: "Cerimonial Rope (night 3)"
EventOpenMain, despite its name inferring it's openeing an event. It's specifically referring to Doors opened by player</p>

Miku's death, hp is 0, mode is 2, sta is 1, anime_no is 64, mvsta is 0
In Miku normal gameplay, her sta is set to 2