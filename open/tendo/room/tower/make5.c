
inherit ROOM;

string long_desc();

void create()
{
    set("short", "茅芦");
    set("long", (: long_desc :) );
    set("long.desc", @LONG
你来到了此地，忽然发现，茅芦竟然是建在一棵齐腰而断的大树
上，在这里你听到了，一阵阵叮叮当当的声音从屋内传了出来，往上
看似乎可以看到一块突出来的树干。树干上可看到不少凹洞(hole)。
LONG
        );
    set("item_desc", ([
    "hole" : @HOLE
仔细地观察这些凹洞后，你发现这里原来可能有一座通往上面的梯子，
试了试那些洞，你想你「可能”爬得上去....

HOLE
    ]) );
    set("exits", ([
    "east" : "/open/tendo/room/tower/make4",
]));
         set("outdoors",1);

        setup();
}

void init()
{
    add_action("do_climb","climb");
}

string long_desc()
{
    string str;
    object ob;
    str = query("long.desc");
    ob = first_inventory(__DIR__"make6");
    if (!ob) return str+"\n";
    else
    return sprintf("[1;37m%s\n可怜的%s正在上面挣扎。[0m\n",
        str,(string)ob->name());
}

int do_climb(string str)
{
    object ob;
    return notify_fail("梯子的痕迹已经很浅了, 你的直觉告诉你, 你爬不上去!!\n");
    if (!str) return notify_fail("[1;32m往那爬? 爬那里?!?试试爬墙或往上爬嘛!![0m\n");
    if ((str != "wall") && (str != "up"))
        return notify_fail("[1;32m嗯.... 你不可能爬得上去的。[0m\n");
    ob = first_inventory(__DIR__"make6");
    if (!ob) {
        write("[1;37m你深深地吸了一口气，看准方位，慢慢的往上爬...[0m\n");
        tell_room(environment(this_player()),
        (string)this_player()->name()+"深深地吸了一口气，开始往上爬。\n",
        ({this_object(), this_player()}) );
        this_player()->move(__DIR__"make6");
        return 1;
    }
    else {
        return notify_fail(sprintf("[1;37m你抬头看去，%s正在很努力的往上爬... 不要吓他...[0m\n",
                                    (string)ob->name()));
    }
}



