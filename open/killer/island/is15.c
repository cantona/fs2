inherit ROOM;

void create ()
{
  set ("short", "船只残骸");
  set ("long", @LONG
你爬上甲板上, 只见四处都是青苔及锈烂的铁器, 船板极为脆弱, 似乎随时
都有整艘船解体的的可能. 这艘船搁浅的地方由于被山及树林所遮挡, 所以在小
岛的石丘上并无法探得此船.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"is14.c",
]));

  setup();
}

void init()
{
        add_action("do_search", "search");
        add_action("do_enter","enter");
}

int do_search()
{
        object who;
        who = this_player();
        tell_object(who,"\n你仔细搜索,在甲板后方发现船舱的入口.\n");
        who->set_temp("search_enter",1);
        set("exits/enter",__DIR__"b_s");
        return 1;
}
int do_enter()
{
        object who;
        who = this_player();
        if (who->query_temp("search_enter")!=1||who->query_temp("get_note")==1) return 0;
else {
        tell_object(who,"\n你钻进船舱之中.\n\n\n");
        who->move(__DIR__"b_s");
        delete("exits/enter");
        who->delete_temp("search_enter");
        return 1;}
}
int valid_leave(object me, string dir)
{
  if (dir != "enter") {
    delete("exits/enter");
    return 1;
  }
}

