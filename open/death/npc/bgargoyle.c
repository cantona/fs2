// gargoyle.c

#include <ansi.h>
#include <login.h>

inherit NPC;

string *death_msg = ({
        HIB "黑无常说道：喂！新来的，你叫什么名字？\n\n" NOR,
        HIB "黑无常用奇异的眼光盯着你，好像要看穿你的一切似的。\n\n" NOR,
        HIB "黑无常「哼”的一声，从袖中掏出一本像帐册的东西翻看着。\n\n" NOR,
        HIB "黑无常閤上册子，说道：咦？阳寿未尽？怎么可能？\n\n" NOR,
        HIB "黑无常搔了搔头，叹道：罢了罢了，你走吧。\n\n"
                "一股阴冷的浓雾突然出现，很快地包围了你。\n\n" NOR,
});

void create()
{
        set_name("黑无常", ({ "black gargoyle", "gargoyle" }) );
        set("long",
                "黑无常伸着长长的舌头瞪着你，黝黑的脸上看不出任何喜怒哀乐。\n");
        set("attitude", "peaceful");
        set("random_move",3);
        set("chat_chance", 15);
        set("chat_msg", ({
                (: random_move :),
                "黑无常发出一阵像呻吟的声音，当他发现你正注视着他的时候，瞪了你一眼。\n",
                "黑无常把长长的舌头伸出来，缓缓地舔了舔自己又黑又长的手指。\n"
        }) );
        set("age", 217);
        set("combat_exp", 20000);
        set("max_gin", 900);
        set("max_kee", 900);
        set("max_sen", 200);
        set_skill("dodge", 40);
        set_skill("unarmed", 40);
        set_temp("apply/armor", 60);
        set_temp("apply/damage", 20);
        setup();
}

void init()
{
        ::init();
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
        call_out( "death_stage", 5, previous_object(), 0 );
}

void death_stage(object ob, int stage)
{
        if( !ob || !present(ob) ) return;

        if( !ob->is_ghost() ) {
                command("say 喂！阳人来阴间做什么？");
                kill_ob(ob);
                ob->fight_ob(this_object());
                return;
        }

        tell_object(ob, death_msg[stage]);
        if( ++stage < sizeof(death_msg) ) {
                call_out( "death_stage", 5, ob, stage );
                return;
        } else
        {
        if(!COMBAT_D->death_effect(ob))
          write_file("/u/b/bss/record/no_death_effect",
            sprintf("%s死了但是没有扣值!!\n",geteuid(ob)));
        ob->reincarnate();
        DEATHROOM->end_death(ob);
	/*复活时将吃的跟喝的补满*/
  	 ob->set("food", ob->max_food_capacity());
     ob->set("water", ob->max_water_capacity());
    if(ob->query("have_get_rest"))
      ob->move("/open/wiz/guilty_room");
    else
        ob->move(REVIVEROOM);
        message("vision",
                "你忽然发现前面多了一个人影，不过那人影又好像已经在那里\n"
                "很久了，只是你一直没发觉。\n", environment(ob), ob);
    }
}
