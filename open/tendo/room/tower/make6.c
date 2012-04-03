
inherit ROOM;

int do_climb(string str);
string show_ring();

void create()
{
    set("short", "树壁上");
    set("long", @LONG
你正挂在树壁之中，往下看去发现你离地面有一段距离了，往上
看去，那块突起的树干也不是很远了，在你身边钉着一个铁环(ring)。

LONG
        );
    set("item_desc", ([
    "ring" : (: show_ring :)
    ]) );
     set("outdoors",1);

        setup();
}

void init()
{
    reset();
    add_action("re_route_cmd","",1);
    add_action("do_climb", "climb");
}

int re_route_cmd(string str)
{
    string cmd;
    int i;
    string *invalid_cmds;
    cmd = query_verb();
    invalid_cmds = ({"enforce", "meditate", "practice", "study", "wield", 
"exercise", "learn", "scribe", "conjure", "enchant", "exert", "perform", 
"respirate","drop"});
    i = member_array(cmd, invalid_cmds);
    if (i == -1) return 0;
    else write("[1;37m以你目前的处境来看，要做这件事很难。[0m\n");
    return 1;
}

int do_climb(string str)
{
    int chance;
    if (this_player()->query_temp("looked_ring")) chance = 10;
    else chance = random(10);
    if (!str) return notify_fail("[1;32m往那爬? 爬那里?!?是要往上还下爬??[0m\n");
    if ((str != "up") && (str != "down"))
        return notify_fail("[1;32m嗯.... 这里没有这样东西让你爬.[0m\n");
    write("[1;37m你深深地吸了一口气，看准方位，慢慢的开始爬...[0m\n");
    if ((str == "up" ) && (chance >= 8)) {
        this_player()->move(__DIR__"make7");
        tell_room(environment(this_player()),
        (string)this_player()->name()+"气喘嘘嘘地爬了上来.\n",
        this_player());
    return 1;
    }
    else {
        if ((str == "down" ) && (chance >= 8)) {
        this_player()->move(__DIR__"make5");
        tell_room(environment(this_player()),
        (string)this_player()->name()+"很小心地从上面爬下来.\n",
        this_player());
        return 1;
        }
        else {
            write("[1;37m一不小心没抓好.... 掉了下去... 摔得你头昏眼花.[0m\n");
            this_player()->receive_damage("kee", 50);
            this_player()->move(__DIR__"make5");
            tell_room(environment(this_player()),
            "你听到一声惨叫, "+(string)this_player()->name()+"从上面摔了"+
            "下来.\n",
            this_player());
        }
    }
    return 1;
}

string show_ring()
{
    this_player()->set_temp("looked_ring",1);
    return "一个生锈的铁环，约有手掌般大，上面还有一截断掉的绳子，不知是那个倒\n"+
    "霉鬼留下来的. 你试了试铁环... 决定还是冒个险吧. 小心点就是了.\n";
}



