// by roger

inherit NPC;
#include <ansi.h>
int do_acc();
int do_acc1();
void make_sword();

void create()
{      
        set("nickname","巧夺天工");
        set_name("李昆阳",({"lee"}));
        set("gender","男性");
        set("age",58);
        set("str",30);
        set("long","
一个孤独的老人，在魔界村里打造一些兵器和防具为生。由于魔界村的人常常
要出魔界村去冒险，因此兵器和护具的需求也蛮大的。不过仔细一看他的眼神
精光内敛，打铁的手法更隐隐约约有武功的影子，且稳健异常显示他的内力修
为非常深厚。难道他的过去有什么惊人的艺业吗?
\n");   
        set("inquiry",([
        "迅雷剑" : (:do_acc:),
        "护甲宝物" : (:do_acc1:),       
       // "过去" : (:do_acc2:),  
        ]));
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",3000);
        set("force",5000);
        setup();
}
int accept_fight(object who)
{
 return notify_fail("李昆阳说:老夫很久不动手啦...\n");
}
int accept_kill(object who)
{
 return notify_fail("李昆阳说:老夫很久不动手啦...\n");
}
int do_acc()
{
object me;
me = this_player();
    if(me->query("quest/tunder_sword")!=1){
    command("say 听说有这把剑，不过铸法已失传了。");
    return 0;
                                           }
    else{
          if(!present("tunder_sword",me)){
    command("say 什么...这...你竟然知道铸法...难以相信啊..");
    command("say 你等着，让老夫为你打造这把早已失传的剑!");
    tell_object(me,HIY"李昆阳的眼睛突然精光暴射...\n"NOR);
    tell_object(me,HIY"李昆阳开始烧铁铸剑...\n"NOR);
    call_out("make_sword",10,me);
                                        }
         else{
         command("say 你不是已经有一把了??");
         return 0;
             }
        }
}

void make_sword(object me)
{
   object me=this_player();
    tell_object(me,HIB"屋里忽然蓝光隐隐....\n"NOR);
    command("say 唉...终于铸好了...花了我毕生的功力...");
    command("say 拿去吧，望你凭藉此剑斩妖除魔!!");
    new("/u/r/roger/castle/obj/tunsword")->move(me);
    /*放到open下改为/open/mogi/castle/obj/tunsword*/
}
int do_acc1()
{
 object me;
   if(me->query("quest/save_yan")!=1){
     command("say 你在说什么?");
     return 0;
                                     }
   else{
     if(me->query("bank/coin",1)<500000){
     command("say 这护甲很贵，你的存款不足以支付(需50两黄金)");
     return 0;
                                         }
     else{
     command("say 没问题，马上打给你");      
     tell_object(me,HIY"李昆阳给你一顶金翅朝天冠\n"NOR);
     new("/u/r/roger/castle/obj/gold-hat")->move(me);
     /*放到open下改为/open/mogi/castle/obj/gold-hat */
         }
}


