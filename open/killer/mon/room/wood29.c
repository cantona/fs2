//written by acelan...../u/a/acelan/room/wood29.c

inherit ROOM;

void create()
{
        set("short", "树林上的密道");
        set("long", @LONG
在树梢上有一只老老的肥猫, 看起来颇为灵巧的正在抓补麻雀,
在树的另一端有几支流星锥及千古恨, 看来这里似乎有杀手与人打斗
过的样子, 不知是追杀还是埋伏在这里暗杀。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood22.c",
       "west" : "/open/killer/mon/room/wood28.c",
   ]));

        set("no_clean_up", 0);

        setup();
}
