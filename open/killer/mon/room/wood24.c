//written by acelan...../u/a/acelan/room/wood24.c

inherit ROOM;

void create()
{
        set("short", "神秘的地道");
        set("long", @LONG
地道继续的前进, 前方偶有落下的树根挡住你的去路, 并且阻碍
了你的视线, 上方不时会滴下几滴水滴, 使整个地道滴答滴答地作响
, 一阵寒意突然由你的背脊往上窜升......
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood25.c",
       "west" : "/open/killer/mon/room/wood23.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
