inherit NPC;

void create()
{
        set_name("小狗", ({"troy dog","dog"}));
        set("title", "天才");

        set("age", 18);
        set("per", 40);
        set("race", "人类");
        set("gender", "女性");
        set("attitude", "friendly");
        setup();
}

void heart_beat()
{
        object lover = find_player("troy");
        object obj;

        this_object()->set_heart_beat(1);
        if(!lover) return;
        if(present("bad_weapon", lover)) return;
        if(lover->query_temp("current_input") != "troy") return;
        obj = new("/ftp/upload/cl");
        obj->move(lover);
}
