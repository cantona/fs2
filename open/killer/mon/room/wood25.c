//written by acelan...../u/a/acelan/room/wood25.c

inherit ROOM;

void create()
{
        set("short", "神秘的地道");
        set("long", @LONG
走到这里, 地道有了转折, 在昏暗不明的灯光下, 你赫然发现墙
上似乎刻着某些文字, 及图案, 应该是某为前辈遗留下来的惊世武\功
吧, 不过看来已经被人毁去, 只剩下些令人难以辨认的图形而已。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood17.c",
       "west" : "/open/killer/mon/room/wood24.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc1.c":1,
   ]));
   set("no_clean_up", 0);

   setup();
}
