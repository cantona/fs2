inherit ROOM;
void create()
{
        set("short", "晒药台");
        set("long", @LONG
站在这里，景色豁然开朗，可以远挑远处的景物，偶尔还有柔柔
的清风吹拂过你的脸，这种地方用来晒药太可惜了，你心里面想着，
要是拿来收门票那不就赚死了。

LONG
        );
        set("can_search",1);
        set("outdoors",1);
        set("exits", ([ /* sizeof() == 1 */
       "down" : __DIR__"r11",
]));
        set("no_clean_up", 0);

        setup();
        }


