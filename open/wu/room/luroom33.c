// Room: /open/wu/room/luroom33.c
// 泷山内院书房
inherit ROOM;
void create()
{
        set("short", "书房");
        set("long", @LONG
这里是任正晴的书房,藏书虽然不多,但也甚为可观,书房的桌上
放着一本书,仔细一看书名好像是基本拳法,由于任正晴一年也难
得进书房几次,所以书都看来很新!!墙上有一幅对联(couplet),
是任正晴亲手题的．
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"luroom32",
        ]));
        set("item_desc", ([
       "couplet" : "
  
            忠                                  浩

            肝                                  气

            义                                  长

            胆                                  存

            为                                  保

            国                                  家  任
                                                    正
            家                                  乡  晴
          "]));
        set("light_up", 1);
        setup();
}
