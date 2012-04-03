inherit NPC;
void create()
{
        set_name("司徒千钟",({"si-tu wine","si-tu","wine"}));
        set("gender","男性");
        set("age",50);
        set("str",35);
        set("title","千杯不醉");
        set("long","一个酒鬼 ,有千杯不醉的功力 .\n");
        set("combat_exp",100000);
        set("max_kee",1500);
        set("kee",1500);
        set_skill("parry",60);
        set_skill("dodge",80);
        set("chat_chance",10);
        set("chat_msg",({
                "司徒千钟说道 : 啊啊..谁能给我酒 ?\n",
                "司徒千钟说道 : 我愿意将最宝贵的东西给他 .\n"
                }));
        setup();
}


int accept_object(object me,object ob)
{
      if(ob->query("id")=="wineskin")
     new("/open/poison/obj/playboy.c")->move(me);
      message_vision("司徒千钟取出一本春宫图 ,交给$N !\n",me);
      command("say 嘿嘿 ,很好看喔 :P~~~~");
}
