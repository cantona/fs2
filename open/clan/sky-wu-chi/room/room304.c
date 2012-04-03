inherit ROOM;
void create() {
	set( "short", "$HIR$Ω«$HIC$ΤΖ$HIW$ΎΣ" );
	set( "owner", "mudu" );
	set( "light_up", 1 );
	set( "object", ([
		"file5"    : "/open/gsword/npc2/sadsword",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file1"    : "/u/b/babe/cloud",
		"amount8"  : 1,
		"file8"    : "/open/magic-manor/wood/obj/wood-sword",
		"file9"    : "/open/gsword/obj/silver_sword",
		"file3"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/badman/obj/sword_book",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/capital/guard/gring",
		"amount7"  : 1,
		"amount10" : 1,
		"file10"   : "/open/magic-manor/obj/fon-sky-sword",
	]) );
	set( "build", 10104 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
                                                                                   
         ‘ρ---                                   ¦ε                             
         £ό£ά                                 ¦ε     ¦ε                         
                  ¨¨¨¨¨¨¨¨¨                      ¨¨                  
    ¨x¨y¨{¨x¨z¨y¨¨¨¨¨¨¨ ¨ ¨¨y¨z¨z¨y¨{¨}¨|¨z¨y¨{ ¨¨¨¨y               
    ¨y¨z¨x¨z¨{¨|¨Μο Μο Μο¨========¨x¨y¨z¨x¨y¨x¨¨¨z¨x¨¨¨¨¨x              
              ¨¨¨¨¨¨¨ ¨¨¨¨¨        ¨¨¨   ¨¨¨¨                
              ¨Μο ¨ Μο¨   ¨¨  Μο          ¨¨¨  ¨¨¨¨¨               
      ¨ts©Π©Π¨   ¨   ¨   ¨¨      ©Π©Π©Π©Π©Π¨©Π©Π©Π  ¨                   
    ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨              


LONG);
	setup();
	replace_program(ROOM);
}
