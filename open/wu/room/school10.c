// Room: /u/d/devils/school10.c

inherit ROOM;

void create()
{
	set("short", "藏经阁");
	set("long", @LONG
这是任正晴的书房,藏书号称三千卷,武馆中谄媚弟子把它取名为藏经阁
来拍馆主马屁,事实上,好像也只是藏书间,因为任正晴一年也难得进书房几次
,更别提读书了!墙上有一幅对联(couplet),是任正晴亲手题的．
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"school8",
]));

        set("item_desc", ([
"couplet" : @LONG
                  
                        谁      来      挑      战
  
                  拳                                  脚

                  打                                  踢

                  黄                                  李

                  飞                                  小

                  鸿                                  龙

LONG
            ]));
        set("light_up", 1);
        setup();
}
