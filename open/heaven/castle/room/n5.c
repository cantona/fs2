inherit ROOM;

void create()
{
        set("short", "荒舞修罗道");
        set("long", @LONG
这里是通往天界之城的必经之地，也是介于人神之间的悲剧族群 --
修罗出没的地方，由于天界众神与修罗一族之间长年的征战，使得修罗们
变得暴戾，如果在这里走动要格外小心，免得遭受无妄之灾。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"n4.c",
]));
        set("no_clean_up", 0);
        set("outdoors", 1);

        setup();
        }

