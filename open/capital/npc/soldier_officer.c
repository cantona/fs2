#include <ansi.h>;
#include "/open/open.h";
inherit F_SOLDIER;

string do_help();
void create()
{
set_name("掌兵使",({"soldier officer","officer"}));
set("attitude","heroism");
        set("combat_exp",440);
        set("class","officer");
        set("officer_class","掌兵使");
        set("officer_power",30);
        set("max_officer_power",30);
          set("age",47);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("soldier_list",([
        "soldier":"兵士(soldier)",
        "fighter":"武士(fighter)",
        "guard":"守卫(guard)",
        "guard2":"私人护卫(guard2)",
        ]));
        set("soldier_lv",([
        "soldier":5,
        "fighter":10,
        "guard":15,
        "guard2":25,
        ]));
        set("inquiry", ([
                "帮忙" : (: do_help :),


        ]) );
        setup();
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="soldier_letter")
        {
                destruct(ob);
                command("say 咦!我的信，嗯......多谢你啦");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",7);
                        break;
                        case 2:
                        me->set("taigan_work",8);
                        break;
                        case 3:
                        me->set("taigan_work",1);
                        break;
                        }
        }
        else{
                command("say 嗯???这信不是给我的，你搞错啰!!!");
                command("give"+ob->query("id")+me->query("id"));
            }
}
string do_help()
{
        int work,i,j,k;
        object me,ob,letter;
        me=this_player();
        ob=this_object();
        work=me->query("taigan_work");
        if(work!=6 || me->query_temp("working"))
                return "我现在没什么事需要你帮忙，去看看别人需不需要吧。\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/lee_letter")->move(me);
                me->set_temp("working",1);
                message_vision("掌兵使给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给战情室的李大人，你帮我跑一趟吧。\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/wu_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给粮草总兵吴大人，你帮我跑一趟吧。\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/yen_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给东厂的严公公，你帮我跑一趟吧。\n";
                break;
        }
        }
}

