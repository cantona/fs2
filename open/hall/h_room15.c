// Room: /open/hall/h_room15.c

inherit ROOM;

void create()
{
        set("short","二捕头─朱火旺之厢房");
        set("long", @LONG
此处是总衙二捕头─朱火旺的厢房，如果你去过三捕头的厢房，那
你必定受不了这里的乱像，床上堆满了没洗过的衣物，地上几乎没着脚
之处～一骨刺鼻的酸味扑面而来，这....是人住的地方吗??!!
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "south":__DIR__"h_room11",
]));
        set("objects", ([ /* sizeof() == 1 */
"/open/hall/npc/zhu":1,
]));

        setup();
}
